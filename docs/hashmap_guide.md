# Hash Map (Hash Table) — Complete Guide

## What is a Hash Map?

A **hash map** (or hash table) is a data structure that maps keys to values using a **hash function**. Instead of searching linearly through data, you compute where to store/find a value in near-constant time.

**Core idea:** Given a key, use a hash function to calculate which "bucket" (array index) to look in. Then retrieve the value directly from that bucket.

## The Building Blocks

### 1. The Hash Function

Converts a key into an array index:

```
index = hashKey(key) % capacity
```

**Example:** If your key is "apple" and capacity is 10, the hash function might compute a large number (say 2374819) and then `2374819 % 10 = 9`, so "apple" goes in bucket 9.

### 2. The Bucket Array

An array of "buckets" — each bucket can hold one or more key-value pairs.

```
Bucket array (capacity = 5):

[0] → empty
[1] → empty
[2] → (age, 25)
[3] → empty
[4] → (name, Alice)
```

### 3. Collision Resolution

**Problem:** Two different keys might hash to the same bucket. Example: both "cat" and "bat" hash to bucket 2.

**Solution: Chaining** — Each bucket stores a linked list of (key, value) pairs instead of just one pair.

```
Hash table with chaining (capacity = 4):

Bucket 0:  [key="dog", value=1] → NULL

Bucket 1:  NULL

Bucket 2:  [key="cat", value=3] → [key="bat", value=7] → NULL
           (collision! both hashed to bucket 2)

Bucket 3:  [key="ant", value=5] → NULL
```

**Note:** This is what your `Node *next` pointer is for — it chains collisions together.

## Your HashMap Structure in Memory

```
HashMap object:
┌─────────────────┐
│ buckets ----┐   │  (pointer to array)
│ capacity: 4 │   │
│ size_: 3    │   │
└─────────────┼───┘
              │
              ▼
    buckets array (size = 4):
    ┌──────┬──────┬──────┬──────┐
    │  [0] │  [1] │  [2] │  [3] │
    └──┬───┴──────┴──┬───┴──────┘
       │             │
       ▼             ▼
     Node          Node → Node
    (key,          (key, (key,
     value)        value) value)
```

## The Three Core Operations

### INSERT(key, value)

1. Compute: `index = hashKey(key) % capacity`
2. Go to bucket at that index
3. Walk the chain to check if key already exists (if so, update the value)
4. If not found, add a new Node at the front of the chain
5. Increment `size_`

```
INSERT("cat", 3) into empty table (capacity=4):

1. index = hashKey("cat") % 4 = 2

2. Go to bucket[2] (currently empty)

3. Create Node: [key="cat", value=3, next=NULL]

4. Insert:
   Bucket 2: [cat→3] → NULL

Result: size_ = 1
```

### GET(key)

1. Compute: `index = hashKey(key) % capacity`
2. Walk the chain in that bucket
3. If key found, return pointer to value
4. If key not found, return NULL

```
GET("bat") from table with collision:

Bucket 2: [cat→3] → [bat→7] → NULL

1. Compute index = 2
2. Walk chain: check "cat" ✗, check "bat" ✓
3. Return pointer to value 7
```

### REMOVE(key)

1. Compute: `index = hashKey(key) % capacity`
2. Walk the chain in that bucket
3. If key found, unlink the Node and delete it
4. Decrement `size_`
5. Return true if found, false otherwise

## Initialization (Your Constructor)

When you create a new HashMap, you need to:

1. Pick an initial **capacity** (e.g., 16 or 17) — this is how many buckets to create
2. Allocate a dynamic array of that size: `buckets = new Node*[capacity]()`
3. All bucket pointers are automatically initialized to NULL (using the `()` syntax)
4. Set `size_ = 0`

```
After constructor with capacity = 4:

buckets array:
┌──────┬──────┬──────┬──────┐
│nullptr│nullptr│nullptr│nullptr│
└──────┴──────┴──────┴──────┘

size_ = 0
capacity = 4
```

## Time Complexity

- **Insert:** O(1) average case, O(n) worst case (all keys hash to same bucket)
- **Get:** O(1) average case, O(n) worst case
- **Remove:** O(1) average case, O(n) worst case

**Note:** The worst case happens when the hash function is bad or the table has very high load factor (size/capacity). A good hash function and reasonable capacity growth keeps you in the average case.

## Key Takeaways

- Hash map = array of chains (linked lists)
- Hash function maps key → bucket index
- Collisions are handled by chaining (your `Node *next`)
- Constructor must allocate buckets array and initialize to nullptr
- Destructor must walk each chain and delete all Nodes, then delete buckets
- Copy constructor/assignment must deep-copy the entire chain structure
