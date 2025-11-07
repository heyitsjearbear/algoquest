# 🎮 AlgoQuest

> **A hands-on C++ learning journey**: Build a playable command‑line game while mastering core data structures and algorithms. Each module introduces a new part of the game engine, ties it to C++ fundamentals and DSA topics, and maps the concepts to real LeetCode problem patterns.

---

## 📖 About This Project

**AlgoQuest** is a self-paced course designed to bridge the gap between web development experience and strong C++ fundamentals needed for technical interviews and LeetCode problem-solving.

### 🎯 Motivation

After working primarily in web development, where many low-level details are abstracted away, I found myself:
- **Lacking deep C++ fundamentals** — Web frameworks handle memory management, but understanding pointers, memory allocation, and manual resource management is crucial for systems programming and interviews
- **Over-relying on AI assistance** — While helpful, this created gaps in foundational understanding
- **Missing LeetCode preparation** — Past internships and experiences didn't require algorithmic interviews, leaving a significant gap in my technical interview skills

This project is my structured approach to:
- ✅ Master C++ fundamentals from the ground up (pointers, memory management, templates, etc.)
- ✅ Build data structures and algorithms from scratch to truly understand them
- ✅ Prepare for LeetCode-style technical interviews
- ✅ Create a tangible project (a CLI game) that demonstrates practical application of concepts

### 🎓 Learning Goals

By completing this course, I aim to:

| Goal | Description |
|------|-------------|
| **C++ Mastery** | Understand memory management, pointers, references, templates, and the distinctions between stack/heap allocation |
| **DSA Fundamentals** | Implement arrays, linked lists, stacks, queues, hash tables, graphs, heaps, and dynamic programming from scratch |
| **Algorithm Proficiency** | Master BFS, DFS, sorting algorithms, binary search, greedy strategies, backtracking, and dynamic programming |
| **LeetCode Readiness** | Solve 30+ curated LeetCode problems mapped to each module, building pattern recognition and problem-solving skills |
| **Practical Application** | Build a complete CLI game that demonstrates real-world application of these concepts |

---

## 📚 Table of Contents

- [How to Use This Course](#-how-to-use-this-course)
- [Getting Started](#-getting-started)
- [Prerequisites](#️-prerequisites)
- [Course Modules](#-course-modules)
  - [Module 1: Core Engine & World Grid (Arrays & Strings)](#-module-1--core-engine--world-grid-arrays--strings)
  - [Module 2: Hash Table for Game Entities (Hashing)](#-module-2--hash-table-for-game-entities-hashing)
  - [Module 3: Singly Linked List for Inventory](#-module-3--singly-linked-list-for-inventory)
  - [Module 4: Stack and Queue for Quests & History](#-module-4--stack-and-queue-for-quests--history)
  - [Module 5: Graph for World Navigation](#-module-5--graph-for-world-navigation)
  - [Module 6: Binary Heap for Event Priority](#-module-6--binary-heap-for-event-priority)
  - [Module 7: Greedy Combat System](#-module-7--greedy-combat-system)
  - [Module 8: Binary Search for Shop Items](#-module-8--binary-search-for-shop-items)
  - [Module 9: Dungeon Maze Solver (Backtracking)](#-module-9--dungeon-maze-solver-backtracking)
  - [Module 10: Combat Optimization (Dynamic Programming)](#-module-10--combat-optimization-dynamic-programming)
- [Learning Outcomes](#-learning-outcomes)

---

## 📌 How to Use This Course

- **Watch** the suggested lectures (links provided) to gain an overview of each topic. When selecting videos, priority was given to credible educators like *Abdul Bari* and *freeCodeCamp* because they offer clear explanations without unnecessary fluff. If a video focuses on another language (e.g., Python), concentrate on the algorithmic idea and then implement it in C++.
- **Read** the documentation linked under *Additional Resources* to reinforce understanding. These articles are from reputable sources such as GeeksforGeeks and Programiz and include up‑to‑date examples.
- **Implement** the assignments. Each module’s assignment specifies sub‑programs to build and includes test cases you should run to verify correctness.
- **Practice** the corresponding LeetCode problems. They match the data structure or algorithm taught in the module and reinforce problem‑solving skills.

Throughout this course, remember to embrace C++'s strengths: manual memory management gives you control over performance, but it also requires careful handling.  The lectures below explain the differences between arrays and pointers ([GeeksforGeeks: Arrays vs Pointers](https://www.geeksforgeeks.org/c/difference-between-array-and-pointers/#:~:text=Distinguishing%20Features%20of%20Arrays%20and,Pointers)), when to use stack versus heap allocation ([GeeksforGeeks: Stack vs Heap Arrays](https://www.geeksforgeeks.org/cpp/difference-between-stack-allocated-and-heap-allocated-arrays/#:~:text=In%20C%2FC%2B%2B%2C%20arrays%20can%20be,allocated%20arrays)), and how C++ structures differ from classes ([GeeksforGeeks: Structure vs Class](https://www.geeksforgeeks.org/cpp/structure-vs-class-in-cpp/#:~:text=In%20C%2B%2B%2C%20a%20structure%20works,structure%20are%20public%20by%20default)).

---

## 🚀 Getting Started

### For Contributors

To begin working on this project:

1. **Fork the repository** — Click the "Fork" button at the top of this repository
2. **Clone your fork** — `git clone https://github.com/YOUR_USERNAME/AlgoQuest.git`
3. **Checkout the starter branch** — `git checkout starter` (or `git checkout -b starter origin/starter` if the branch doesn't exist locally)
4. **Create your working branch** — `git checkout -b your-name/module-1` (or similar naming convention)
5. **Start coding!** — Begin with Module 1 and work through each module sequentially

**Important**: 
- The `starter` branch contains the project structure and any starter code. Fork from this branch to begin your implementation.
- The `main` branch contains the owner's working solution. As the owner completes each module, they create separate branches (e.g., `module-1`, `module-2`) and merge them into `main`. Please do not work directly from `main` — use the `starter` branch instead.

**Note on File Structure**: 
- No specific file structure is provided intentionally. It is up to you as the programmer to decide how to organize your codebase. This is part of the learning experience—you'll need to think about how to structure your project, organize header files, source files, and modules. Consider factors like separation of concerns, maintainability, and scalability when designing your project structure.

---

## 🛠️ Prerequisites

- Basic programming knowledge (variables, functions, control flow)
- Familiarity with any programming language (web dev experience is fine!)
- A C++ compiler (GCC, Clang, or MSVC)
- A text editor or IDE (VS Code, CLion, etc.)
- Willingness to learn low-level concepts that web frameworks typically abstract away

**Note**: No prior C++ experience required! This course is designed for developers coming from higher-level languages.

---

## 📦 Course Modules

## 🧩 Module 1 — Core Engine & World Grid (Arrays & Strings)

### 🎥 Recommended Lectures

- **freeCodeCamp – "C++ Programming – Full Course"** (Chapters on arrays & strings). This six‑hour video covers C++ fundamentals, including declaration, initialization, and traversal of arrays and `std::string`. While long, the sections on arrays and strings are concise and well explained.
- **Neso Academy – "Pointers and Arrays in C/C++"**. Neso Academy offers a clear distinction between arrays and pointers, demonstrating pointer arithmetic and how arrays decay to pointers when passed to functions ([GeeksforGeeks: Arrays vs Pointers](https://www.geeksforgeeks.org/c/difference-between-array-and-pointers/#:~:text=Distinguishing%20Features%20of%20Arrays%20and,Pointers)).

### 🧠 Assignment: Build the World Grid & Command Parser

The first deliverable is a CLI engine that maintains a two‑dimensional map of the game world.  You will implement the following sub‑programs:

1. **World representation**: Create a `char` grid `world[ROWS][COLS]` on the stack to represent the map. Initialize empty cells with `'.'` and blocked cells with `'#'`. Use constants `ROWS` and `COLS` for dimensions.
2. **Input handling**: Write a function `std::string getCommand()` that reads a full line from `std::cin` using `std::getline`. Since `std::getline` returns an entire string, you will manually parse it by splitting on spaces. Avoid `strtok` for safety; instead, iterate over the string and build tokens.
3. **Command interpreter**: Implement `void executeCommand(const std::string& cmd, int& row, int& col)` that modifies the player’s position `(row, col)` based on the commands `move north`, `move south`, `move east`, `move west`. Add commands `map` (prints the world), `help` (lists available commands) and `exit` (terminates the game).
4. **Boundary checking**: When moving, ensure the player cannot leave the grid or move into a `'#'` cell. Return a descriptive error if the move is invalid.

### Test cases and instructions

- **Initial map test**: After creating the world, print it. Check that all cells are set to `'.'` except any obstacles you manually assign.
- **Command parsing test**: Input `move north` and verify that your parser splits it into the tokens `"move"` and `"north"`. Similarly, ensure `map` and `help` are parsed as single tokens.
- **Movement tests**:
    1. Place the player at `(0,0)` and issue `move north`. Expect a boundary error.
    2. Place the player at `(2,3)` and assign `world[1][3] = '#'`. Issue `move north` and expect a blocked‑cell error.
    3. Issue valid moves in all four directions and verify that `(row, col)` updates correctly.
- **Exit test**: When `exit` is entered, the program should terminate gracefully.

### 🧩 C++ Lesson: Arrays, Pointers, and Strings (Detailed Lecture)

### Arrays vs Pointers

An array is a contiguous block of elements of the same type.  Declaring `int arr[5]` allocates memory for five integers on the stack.  A pointer, on the other hand, stores the address of a variable; declaring `int* ptr` does not allocate any integers—it only allocates space for the pointer itself.  The key differences include:

- **Declaration**: arrays are declared with a size (e.g., `data_type var_name[size]`), whereas pointers are declared with a type and point to existing memory ([GeeksforGeeks: Arrays vs Pointers](https://www.geeksforgeeks.org/c/difference-between-array-and-pointers/#:~:text=The%20following%20table%20lists%20the,an%20array%20and%20a%20pointer)).
- **Memory allocation**: arrays have a fixed size defined at compile time; pointers can be assigned addresses of variables or memory allocated at runtime with `new`, allowing dynamic resizing ([GeeksforGeeks: Arrays vs Pointers](https://www.geeksforgeeks.org/c/difference-between-array-and-pointers/#:~:text=Pointer%20allocation%20is%20done%20during,is%20done%20during%20compile%20runtime)).
- **`sizeof` behaviour**: `sizeof(arr)` returns the total bytes of the entire array (`sizeof(int) * elements`), whereas `sizeof(ptr)` returns the size of the pointer type (commonly 8 bytes on 64‑bit machines) ([GeeksforGeeks: Arrays vs Pointers](https://www.geeksforgeeks.org/c/difference-between-array-and-pointers/#:~:text=Distinguishing%20Features%20of%20Arrays%20and,Pointers)).
- **Pointer arithmetic**: array subscripting is defined in terms of pointer arithmetic. `arr[i]` is equivalent to `(arr + i)`. Likewise, pointers can be indexed like arrays (`ptr[i]`), as long as they point to a valid contiguous block ([GeeksforGeeks: Arrays vs Pointers](https://www.geeksforgeeks.org/c/difference-between-array-and-pointers/#:~:text=2,using%20pointer%20arithmetic)).

### Char arrays vs `std::string`

Character arrays (`char myArray[N]`) are C‑style strings.  They occupy a fixed‑size block of memory and are null‑terminated by a `\0` character ([GeeksforGeeks: Char Arrays vs std::string](https://www.geeksforgeeks.org/cpp/difference-between-array-of-characters-and-std-string-in-cpp/#:~:text=The%20array%20of%20characters%20or,the%20end%20of%20the%20string)).  They require manual memory management and functions like `strcpy`/`strlen` for manipulation.  The `std::string` class is part of the C++ Standard Library and manages its own dynamic storage.  It allows convenient operations such as concatenation, substring extraction and length queries ([GeeksforGeeks: Char Arrays vs std::string](https://www.geeksforgeeks.org/cpp/difference-between-array-of-characters-and-std-string-in-cpp/#:~:text=The%20std%3A%3Astring%20is%20a%20class,memory%20allocation%20and%20resizing%20automatically)).  While both represent sequences of characters, `std::string` automatically handles memory resizing and is less error‑prone.

### Stack vs Heap Memory

Stack‑allocated arrays, such as `int numbers[10]`, are stored on the call stack.  Their size must be known at compile time, and they are automatically deallocated when the scope ends ([GeeksforGeeks: Stack vs Heap Arrays](https://www.geeksforgeeks.org/cpp/difference-between-stack-allocated-and-heap-allocated-arrays/#:~:text=In%20C%2FC%2B%2B%2C%20arrays%20can%20be,allocated%20arrays)).  Heap‑allocated arrays use dynamic memory: `int* numbers = new int[10];` reserves space on the heap and remains allocated until `delete[] numbers;` is called ([GeeksforGeeks: Stack vs Heap Arrays](https://www.geeksforgeeks.org/cpp/difference-between-stack-allocated-and-heap-allocated-arrays/#:~:text=Heap)).  Heap allocation is more flexible but incurs overhead and requires manual deallocation to prevent memory leaks.  The table in the GeeksforGeeks article highlights trade‑offs such as automatic deallocation (stack) vs. manual management (heap), access speed and memory fragmentation ([GeeksforGeeks: Stack vs Heap Arrays](https://www.geeksforgeeks.org/cpp/difference-between-stack-allocated-and-heap-allocated-arrays/#:~:text=The%20following%20table%20illustrates%20the,allocated%20arrays)).

### Structs vs Classes and Function References

In C++, `struct` and `class` are nearly identical.  The only language‑level difference is that members of a structure are `public` by default, whereas class members are `private` by default ([GeeksforGeeks: Structure vs Class](https://www.geeksforgeeks.org/cpp/structure-vs-class-in-cpp/#:~:text=In%20C%2B%2B%2C%20a%20structure%20works,structure%20are%20public%20by%20default)).  Both can contain data members and member functions, support inheritance and polymorphism, and be used to group related data.  When designing simple records for the game (e.g., player stats or item properties), using a `struct` is acceptable, but for encapsulation, prefer a `class` with explicit access specifiers.

Passing an argument by reference allows a function to modify the caller’s variable without copying.  For example:

```cpp
void movePlayer(int& row, int& col, int dRow, int dCol) {
    row += dRow;
    col += dCol;
}

// Usage:
movePlayer(currentRow, currentCol, -1, 0); // Moves north

```

The `&` in the parameter list binds the arguments to the original variables, eliminating the need to return a pair.  When a function must not modify the argument, declare the parameter as a `const` reference (`const std::string&`), which avoids copying while preserving immutability.

### 📚 Additional Resources

- **GeeksforGeeks – "Difference between Arrays and Pointers"**: Explains how arrays and pointers differ in declaration, memory allocation, `sizeof` behaviour, pointer arithmetic and parameter passing ([GeeksforGeeks: Arrays vs Pointers](https://www.geeksforgeeks.org/c/difference-between-array-and-pointers/#:~:text=Distinguishing%20Features%20of%20Arrays%20and,Pointers)).
- **GeeksforGeeks – "Difference Between Stack‑Allocated and Heap‑Allocated Arrays"**: Describes the characteristics, syntax and trade‑offs of stack vs heap memory ([GeeksforGeeks: Stack vs Heap Arrays](https://www.geeksforgeeks.org/cpp/difference-between-stack-allocated-and-heap-allocated-arrays/#:~:text=In%20C%2FC%2B%2B%2C%20arrays%20can%20be,allocated%20arrays)).
- **GeeksforGeeks – "Difference Between Structure and Class in C++"**: Summarizes that struct members are public by default and class members are private by default ([GeeksforGeeks: Structure vs Class](https://www.geeksforgeeks.org/cpp/structure-vs-class-in-cpp/#:~:text=In%20C%2B%2B%2C%20a%20structure%20works,structure%20are%20public%20by%20default)).

### 🧪 LeetCode Practice

| Problem | Concept |
| --- | --- |
| [344. Reverse String](https://leetcode.com/problems/reverse-string/) | Basic array and pointer manipulation |
| [151. Reverse Words in a String](https://leetcode.com/problems/reverse-words-in-a-string/) | String parsing and tokenization |
| [566. Reshape the Matrix](https://leetcode.com/problems/reshape-the-matrix/) | 2‑D array indexing |

---

## 🧩 Module 2 — Hash Table for Game Entities (Hashing)

### 🎥 Recommended Lectures

- **Abdul Bari – "Hashing Data Structure Explained"**. A concise explanation of hash functions, collision resolution strategies (open addressing vs chaining) and load factor.
- **William Fiset – "Hash Tables in C++ – Unordered Maps and Implementation"** (from his data structures course). This video discusses how to build a hash table from scratch and compares it with the `std::unordered_map` implementation in C++.

### 🧠 Assignment: Implement a Custom `HashMap<K,V>`

In the game, you’ll use a hash table to map entity names (keys) to pointers or IDs (values) for fast lookup.  Implement the following sub‑programs:

1. **Hash function**: Write a template function `std::size_t hashKey(const K& key, std::size_t capacity)` using a polynomial rolling hash (e.g., `hash = hash*31 + char`) for strings or use `std::hash<K>` for generic types. The function should return a non‑negative index within the current capacity.
2. **Collision resolution**: Use *separate chaining*. Represent buckets as a singly linked list (`std::forward_list<Node>` or your own `Node<K,V>`). Each node stores a `key`, a `value` pointer, and a pointer to the next node.
3. **Insertion**: Implement `void insert(const K& key, const V& value)`. Compute the bucket index, traverse the chain to check for an existing key (update value if found) or append a new node at the head if not. When the number of elements exceeds a load factor (e.g., 0.75), double the capacity and rehash all elements into a new bucket array.
4. **Lookup**: Implement `V* get(const K& key)` that returns a pointer to the value if found or `nullptr` if missing.
5. **Removal**: Implement `bool remove(const K& key)` that searches for the key in its bucket and erases the node if found. Return `true` if removed or `false` otherwise.
6. **Destructor**: Implement a destructor to deallocate the bucket array and all nodes, preventing memory leaks.

### Test cases and instructions

- **Insertion and lookup**: Insert a set of key–value pairs (e.g., `{ "orc", 1 }`, `{ "elf", 2 }`) and verify that `get` returns the correct values.
- **Update value**: Insert a key with one value and then insert the same key with a new value. Ensure the table updates instead of creating a duplicate entry.
- **Removal**: Remove an existing key and check that subsequent `get` calls return `nullptr`. Removing a non‑existent key should return `false`.
- **Rehashing**: Insert enough elements to trigger a rehash. Confirm that all pre‑existing keys are still accessible and their values are intact.

### 🧩 C++ Lesson: Dynamic Memory, Templates & Copy Semantics

### Dynamic Allocation with `new`/`delete[]`

To implement a dynamic array of buckets, allocate memory on the heap using `new`.  For example, `Node<K,V>* buckets = new Node<K,V>[capacity];`.  Always release heap memory using `delete[]` in your destructor to avoid leaks.  Remember that each node in the chain also uses `new` and should be paired with `delete` when removed.

### Templates and Generic Programming

Templates allow functions and classes to operate with generic types.  Declare your hash table as `template<typename K, typename V> class HashMap`.  When defining methods outside the class, prefix them with `template<typename K, typename V>` and qualify the class name as `HashMap<K,V>::`.

### Shallow vs Deep Copy

By default, the compiler generates a copy constructor and assignment operator that perform **shallow copies**—pointers are copied without allocating new memory.  For classes managing dynamic memory (like `HashMap`), implement a custom **copy constructor** and **copy assignment operator** to perform **deep copies**: allocate new buckets and duplicate each node so that the new object owns its own memory.  Similarly, implement a **move constructor** and **move assignment operator** for efficient transfers.

### Copy Constructors Example

```cpp
// Deep copy constructor for HashMap
HashMap(const HashMap& other) : capacity(other.capacity), size_(0) {
    buckets = new Node<K,V>[capacity]();
    for (std::size_t i = 0; i < other.capacity; ++i) {
        Node<K,V>* node = other.buckets[i].next;
        while (node) {
            insert(node->key, node->value);
            node = node->next;
        }
    }
}

```

### 📚 Additional Resources

- **GeeksforGeeks – "Program to Implement Hash Table using Open Addressing"**: Provides sample code for hash functions and collision resolution (open addressing). Use this as a comparison to your separate chaining implementation.
- **GeeksforGeeks – "Copy Constructor in C++"**: Explains how and when to define custom copy constructors and the differences between shallow and deep copying.
- **Programiz – "Dynamic Memory in C++"**: Introduces `new`/`delete` and best practices for memory management.

### 🧪 LeetCode Practice

| Problem | Concept |
| --- | --- |
| [1. Two Sum](https://leetcode.com/problems/two-sum/) | Basic use of a hash map to store indices |
| [49. Group Anagrams](https://leetcode.com/problems/group-anagrams/) | Hashing strings into buckets |
| [219. Contains Duplicate II](https://leetcode.com/problems/contains-duplicate-ii/) | Hash set lookups with sliding window |

---

## 🧩 Module 3 — Singly Linked List for Inventory

### 🎥 Recommended Lectures

- **Jenny’s Lectures – "Linked List Full Concept"**. Provides a thorough explanation of singly linked lists, node creation, insertion and deletion operations, and memory management.
- **Bro Code – "Linked Lists in C++"**. Walks through creating a simple linked list class in C++ and highlights common pitfalls.

### 🧠 Assignment: Build an `Inventory` Singly Linked List

The inventory system stores items picked up by the player.  You’ll implement a custom singly linked list instead of using `std::list`.  Create the following components:

1. **Node struct**: Define `struct Node { std::string item; Node* next; };`. Use dynamic allocation for each `Node` when inserting items.
2. **Inventory class**: Encapsulate the list operations. Private members include `Node* head` and optionally `Node* tail` for efficient inserts. Public methods:
    - `void addItem(const std::string& item)`: Allocate a new `Node` on the heap and append it to the list.
    - `bool removeItem(const std::string& item)`: Search for a node containing `item`, remove it by updating pointers and freeing memory, and return `true` if removed or `false` otherwise.
    - `bool contains(const std::string& item) const`: Check whether the item exists in the list.
    - `void print() const`: Display all items in order.
    - **Destructor**: Traverse the list and delete every node to avoid leaks.
3. **Iterators** (optional): Implement a simple iterator that allows ranged‑for loops over the inventory. Overload `begin()` and `end()` to return `Node*`.

### Test cases and instructions

- **Insertion and traversal**: Add several items (e.g., "sword", "potion", "shield") and print the list. Verify the order matches insertion order.
- **Removal cases**: Remove the head, middle and last items in separate tests. Ensure pointers update correctly and no memory leaks occur (use tools like Valgrind or sanitizers to check).
- **Contains**: Verify that `contains` returns `true` for existing items and `false` for absent ones.
- **Destructor**: Create an `Inventory` object in a local scope and let it go out of scope. Ensure there are no memory leaks.

### 🧩 C++ Lesson: Pointers, Traversal & Ownership

Linked lists reinforce pointer manipulation.  Each node contains a pointer to the next node; traversal means repeatedly following `next` until `nullptr`.  When deleting a node, adjust the previous node’s `next` pointer to skip over it and free the memory of the removed node.  This pattern exemplifies **object ownership**: the `Inventory` class owns the nodes and is responsible for allocating and deleting them.

Pass pointers to functions when you need to modify the pointer itself (e.g., when removing the head node you must update `head`).  Alternatively, pass **references to pointers** to achieve the same effect:

```cpp
void removeHead(Node*& head) {
    Node* temp = head;
    head = head->next;
    delete temp;
}

```

Use **destructors** to free all remaining nodes.  In C++, destructors run automatically when an object goes out of scope.  When writing classes that manage resources, follow the *Rule of Three/Five* (define copy constructor, copy assignment operator and destructor, and optionally move constructor and move assignment operator).

### 📚 Additional Resources

- **Programiz – "Linked List in C++"**: Introduces the concept of linked lists, node creation, insertion, deletion and traversal.
- **GeeksforGeeks – "Destructors in C++"**: Explains when destructors are called and how to manage resource cleanup.
- **GeeksforGeeks – "Pointer to Pointer"**: Demonstrates how to pass a pointer’s address to a function to modify it.

### 🧪 LeetCode Practice

| Problem | Concept |
| --- | --- |
| [206. Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/) | Pointer manipulation and in‑place reversal |
| [141. Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/) | Cycle detection using two‑pointer technique |
| [21. Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/) | Traversal and merging pointers |

---

## 🧩 Module 4 — Stack and Queue for Quests & History

### 🎥 Recommended Lectures

- **Abdul Bari – "Stack & Queue"**. Explains the difference between stack (LIFO) and queue (FIFO), common operations and applications.
- **CS50 – "Stacks, Queues & Memory"**. Offers an accessible visual demonstration of how stacks and queues work in memory and how they relate to call stacks.

### 🧠 Assignment: Implement Stack and Queue Classes

You’ll build two container classes to manage quests (stack) and player action history (queue).

1. **Stack class**:
    - Use a fixed‑size array to store elements. Provide methods `void push(const T&)`, `T pop()`, and `bool isEmpty() const`.
    - Track the top index; detect **overflow** (pushing when full) and **underflow** (popping when empty) and handle gracefully by returning an error or throwing an exception.
2. **Queue class**:
    - Implement a circular buffer using a fixed‑size array and two indices (`front`, `rear`). Provide methods `void enqueue(const T&)`, `T dequeue()`, and `bool isEmpty() const`.
    - When the buffer fills, either resize dynamically or reject new insertions; decide based on your game’s requirements.
3. **Integration**: In your game loop, push new quests onto the stack when the player accepts them and pop them when completed. Enqueue each command the player issues in the history queue and optionally allow the player to review past commands.

### Test cases and instructions

- **Stack overflow**: Fill the stack to its capacity and attempt one more push. Verify that the program reports an overflow.
- **Stack underflow**: Pop from an empty stack and ensure that your code handles the situation gracefully.
- **Queue wrap‑around**: Fill the queue, dequeue a few elements, enqueue additional elements, and verify that the indices wrap around correctly without overwriting un‑dequeued items.

### 🧩 C++ Lesson: References, Allocation & Access Control

When implementing stacks and queues, decide whether to allocate the internal array on the stack or the heap.  For fixed‑size containers, a stack‑allocated array (`T data[MAX_SIZE]`) suffices.  If you need to resize dynamically, allocate on the heap (`T* data = new T[capacity]`) and expand when needed.

Distinguish between **pass‑by‑reference** and **pass‑by‑pointer**.  Passing by reference uses `&` and is generally safer and cleaner, while passing by pointer uses `*` and allows null values.  For example, `void push(const T& value)` (reference) vs. `void push(const T* value)` (pointer).  Use references unless you explicitly need to handle null pointers.

In classes, use the `private` access specifier to hide implementation details such as the array and indices.  Provide `public` methods for interaction.  This encapsulation prevents invalid states (e.g., modifying the `top` index directly) and aligns with good object‑oriented design.

### 📚 Additional Resources

- **GeeksforGeeks – "Stack Data Structure"**: Describes stack operations, applications, and implementation patterns.
- **Programiz – "Circular Queue"**: Provides pseudocode for implementing a circular queue and explains front/rear index arithmetic.

### 🧪 LeetCode Practice

| Problem | Concept |
| --- | --- |
| [20. Valid Parentheses](https://leetcode.com/problems/valid-parentheses/) | Stack to check balanced parentheses |
| [232. Implement Queue using Stacks](https://leetcode.com/problems/implement-queue-using-stacks/) | Queue logic and stack operations |
| [155. Min Stack](https://leetcode.com/problems/min-stack/) | Designing a stack supporting constant‑time minimum lookup |

---

## 🧩 Module 5 — Graph for World Navigation

### 🎥 Recommended Lectures

- **Abdul Bari – "Graph Representation"**. Introduces adjacency lists and matrices and discusses when to use each.
- **William Fiset – "BFS and DFS in Graphs"**. Provides step‑by‑step visualizations of breadth‑first search and depth‑first search algorithms.

### 🧠 Assignment: Build a Graph and Implement BFS/DFS

The game world may have multiple interconnected zones or rooms.  Represent each zone as a vertex and connections as edges.

1. **Graph representation**: Build an adjacency list using your `LinkedList` implementation from Module 3. Create a class `Graph` with a vector of adjacency lists: `std::vector<LinkedList<int>> adj;` or a vector of `std::forward_list<int>`.
2. **Add/remove edges**: Implement `void addEdge(int u, int v)` and `void removeEdge(int u, int v)` for an undirected graph. Ensure no duplicate edges are inserted.
3. **BFS**: Implement `std::vector<int> bfs(int start)` using your `Queue` class from Module 4. Track visited vertices, enqueue neighbours and record visitation order.
4. **DFS**: Implement `std::vector<int> dfs(int start)` using your `Stack` class or via recursion. Ensure you handle cycles by marking visited nodes.
5. **Integrate with the world**: Use the graph to determine the shortest path between regions and to generate quests that require the player to navigate through connected zones.

### Test cases and instructions

- **Graph creation**: Build a graph with 5 vertices and connect them in a specific pattern. Print the adjacency list to verify that `addEdge` works as expected.
- **BFS order**: Perform BFS starting from vertex 0 and compare the visitation order with the expected result.
- **DFS order**: Perform DFS starting from vertex 0 and ensure that the traversal covers all reachable vertices without revisiting.
- **Removing edges**: Remove an edge and verify that subsequent BFS/DFS results reflect the change.

### 🧩 C++ Lesson: Recursion, Composition & Initialization

### Recursion & Call Stack

Depth‑first search is naturally implemented using recursion.  Each function call pushes a frame onto the call stack containing local variables and return address.  When the recursion unwinds, these frames are popped off.  Be mindful of stack overflows in very large graphs—iterative implementations using an explicit stack (your `Stack` class) avoid this issue.

### Composition

Model complex objects by composing them from simpler ones.  For example, the `World` may **have** a `Graph` to represent connectivity.  Composition (`World` has‑a `Graph`) promotes modularity and reusability.

### Constructor Initialization Lists

Initialize member variables of a class in the constructor’s initialization list for better performance and clarity:

```cpp
class Graph {
public:
    Graph(int n) : adj(n) {}
    // ...
};

```

Initialization lists ensure members are constructed directly rather than default‑constructed and then assigned.

### 📚 Additional Resources

- **GeeksforGeeks – "Graph Representations"**: Compares adjacency lists and matrices and discusses their trade‑offs.
- **GeeksforGeeks – "BFS vs DFS"**: Summarizes differences between breadth‑first and depth‑first search.

### 🧪 LeetCode Practice

| Problem | Concept |
| --- | --- |
| [200. Number of Islands](https://leetcode.com/problems/number-of-islands/) | DFS/BFS on a grid |
| [133. Clone Graph](https://leetcode.com/problems/clone-graph/) | Traversing and copying graphs |
| [207. Course Schedule](https://leetcode.com/problems/course-schedule/) | Cycle detection and topological sorting |

---

## 🧩 Module 6 — Binary Heap for Event Priority

### 🎥 Recommended Lectures

- **Abdul Bari – "Heap Data Structure"**. Discusses max‑heap and min‑heap properties, array representation and heap operations.
- **William Fiset – "Heap / Priority Queue Visualization"**. Shows interactive animations of heap insertions and deletions.

### 🧠 Assignment: Implement a Binary Heap and Priority Queue

In the game, events such as attacks, NPC actions and scheduled tasks will have priorities.  A binary heap supports quick retrieval of the highest (or lowest) priority element.

1. **Heap representation**: Store the heap as a dynamic array (`std::vector<Event>`). Index `0` holds the root; children of index `i` are at `2*i+1` and `2*i+2`.
2. **Insertion (`heapifyUp`)**: Append the new element to the end of the array and repeatedly swap it with its parent until the heap property is restored.
3. **Extraction (`extractMax`)**: Swap the root with the last element, remove the last element, and call `heapifyDown` from the root to restore the heap property.
4. **Decrease/increase key (optional)**: Adjust an element’s priority and call `heapifyUp` or `heapifyDown` accordingly.
5. **Priority queue API**: Wrap the heap inside a `PriorityQueue` class with methods `push`, `pop`, and `top`.

### Test cases and instructions

- **Heap property**: After each insertion and extraction, traverse the array and confirm that every parent is ≥ its children (for max‑heap). Use assert statements to automate this check.
- **Extraction order**: Insert a set of events with distinct priorities and repeatedly call `extractMax`. Verify that elements are returned in descending order.
- **Corner cases**: Extract from an empty heap and ensure your code handles it gracefully.

### 🧩 C++ Lesson: Dynamic Array & Helpers

Implementing a heap requires resizing the underlying array when it reaches capacity.  You can use `std::vector` and rely on its automatic resizing, or manually manage a raw pointer and double the capacity when needed.  In either case, write **private helper methods** such as `parentIndex(i)`, `leftChild(i)`, `rightChild(i)` to improve readability.

Write constructors and destructors for your `PriorityQueue` class.  Since `std::vector` manages its own memory, you may not need explicit destructors, but if you implement the array manually, remember to deallocate it in the destructor.

### 📚 Additional Resources

- **GeeksforGeeks – "Binary Heap"**: Covers heap properties, array representation and pseudocode for insertion and deletion.
- **GeeksforGeeks – "Dynamic Array Implementation"**: Demonstrates how to implement a resizable array and handle capacity changes.

### 🧪 LeetCode Practice

| Problem | Concept |
| --- | --- |
| [215. Kth Largest Element](https://leetcode.com/problems/kth-largest-element-in-an-array/) | Using a heap to find the k‑th largest element |
| [347. Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/) | Heap and hash map combined |
| [973. K Closest Points](https://leetcode.com/problems/k-closest-points-to-origin/) | Min‑heap for nearest neighbours |

---

## 🧩 Module 7 — Greedy Combat System

### 🎥 Recommended Lectures

- **Abdul Bari – "Greedy Algorithm Explained"**. Introduces the greedy paradigm and explains why greedy choices lead to optimal solutions in certain problems.
- **CS50 – "Greedy Algorithms"**. Provides intuitive examples of greedy strategies and contrasts them with dynamic programming.

### 🧠 Assignment: Implement Greedy Combat & Quicksort

Combat in the game involves selecting attacks or loot items based on a value‑to‑cost ratio.  Greedy choices often yield optimal outcomes when the problem exhibits the **greedy choice property**.

1. **Implement Quicksort**: Write a generic function `template<typename T> void quickSort(std::vector<T>& arr, int low, int high)` with partitioning based on a comparison operator. Use randomized pivot selection to avoid worst‑case performance.
2. **Compare items by ratio**: Define a struct `Item { std::string name; int value; int cost; }` and overload the `<` operator to compare items by the ratio `value / cost`.
3. **Greedy selection**: Given a list of items and a budget, sort the items in decreasing order of `value/cost`. Iterate through the sorted list, selecting each item while the remaining budget allows. Keep track of the total value obtained.
4. **Evaluation**: Print the selected items and the total value. Provide feedback when the budget is exhausted.

### Test cases and instructions

- **Correct sorting**: Generate a list of items with varying values and costs. After running quicksort, verify that the list is sorted in non‑increasing order of `value/cost`.
- **Greedy selection**: For a given budget, manually compute the optimal set of items and compare with your program’s output.
- **Edge cases**: Test with items of equal ratios, zero cost items (handle division by zero) and budgets smaller than the cheapest item’s cost.

### 🧩 C++ Lesson: Function Templates, Operator Overloading & Friend Functions

### Function Templates

Templates enable you to write sorting algorithms that work for any comparable type.  Use `template<typename T>` before the function declaration.  Inside the function, rely on the `<` operator for comparison.

### Operator Overloading

Overload operators to define custom comparison logic.  In your `Item` struct, overload the `<` operator as a friend function so it can access private members:

```cpp
struct Item {
    std::string name;
    int value;
    int cost;
    friend bool operator<(const Item& a, const Item& b) {
        double ratioA = static_cast<double>(a.value) / a.cost;
        double ratioB = static_cast<double>(b.value) / b.cost;
        return ratioA < ratioB;
    }
};

```

Use `static_cast<double>` to avoid integer division.  The operator returns `true` if `a` has a lower ratio than `b` so that sorting algorithms place higher ratios first.

### Friend Functions

Friend functions are not member functions but have access to private and protected members of the class in which they are declared.  They’re useful for overloading operators that require access to private data (e.g., stream insertion `operator<<`).  Declare them inside the class definition and define them outside.

### 📚 Additional Resources

- **GeeksforGeeks – "Greedy Algorithms Overview"**: Describes the greedy paradigm and common problems solved by greedy strategies.
- **GeeksforGeeks – "Implement QuickSort"**: Provides code and explanation for quicksort, including partitioning and recursion.

### 🧪 LeetCode Practice

| Problem | Concept |
| --- | --- |
| [122. Best Time to Buy and Sell Stock II](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/) | Greedy decisions in stock trading |
| [455. Assign Cookies](https://leetcode.com/problems/assign-cookies/) | Allocation using greedy matching |
| [406. Queue Reconstruction by Height](https://leetcode.com/problems/queue-reconstruction-by-height/) | Sorting with custom criteria |

---

## 🧩 Module 8 — Binary Search for Shop Items

### 🎥 Recommended Lectures

- **Bro Code – "Binary Search Explained"**. Demonstrates how to perform binary search on sorted arrays, including base cases and recursion.
- **freeCodeCamp – "Search Algorithms"**. Provides an overview of linear search vs binary search and explains the efficiency differences.

### 🧠 Assignment: Implement Sorting and Binary Search

In the shop system, items are sorted by price.  You will implement sorting algorithms and binary search to quickly locate items.

1. **Sorting algorithms**: Implement a simple `bubbleSort` and `insertionSort` on a vector of `Item` objects (reusing the `Item` struct from Module 7). Provide ascending and descending variants by taking a comparison function as a parameter.
2. **Binary search**: Implement both iterative and recursive versions of binary search: `int binarySearch(const std::vector<Item>& items, int targetPrice)` that returns the index of an item with price equal to `targetPrice` or `-1` if not found.
3. **Integration**: After sorting the items by price, allow the player to search for an item by specifying a price. If found, display the item’s details; otherwise, report that the item is not available.

### Test cases and instructions

- **Sorting correctness**: After sorting, verify that the prices are in non‑decreasing order. Check both bubble sort and insertion sort implementations.
- **Binary search correctness**: Test binary search on arrays of odd and even lengths and ensure it returns correct indices or `-1` when appropriate.
- **Edge cases**: Search for prices outside the range of existing item prices and for duplicate prices; ensure the function returns any valid index of a duplicate.

### 🧩 C++ Lesson: Recursion, Base Cases & Pointers

Binary search is a classic divide‑and‑conquer algorithm.  In the **recursive** implementation, clearly define the base case: if the search range becomes empty (low > high), return `-1`.  Calculate the middle index carefully to avoid overflow: `mid = low + (high - low) / 2;`.  Compare the target with `items[mid].price` and recurse into the half where the target may reside.

In the **iterative** version, use a while loop to narrow the search range.  Iterative implementations avoid function call overhead and are preferred when recursion depth might be large.

When passing vectors or arrays to functions, use `const` references (`const std::vector<Item>&`) to avoid unnecessary copying while preserving immutability.

### 📚 Additional Resources

- **Programiz – "Binary Search"**: Explains iterative and recursive implementations and includes diagrams.
- **GeeksforGeeks – "Sorting Algorithms"**: Provides pseudocode and analysis of common sorting algorithms.

### 🧪 LeetCode Practice

| Problem | Concept |
| --- | --- |
| [704. Binary Search](https://leetcode.com/problems/binary-search/) | Fundamental binary search |
| [35. Search Insert Position](https://leetcode.com/problems/search-insert-position/) | Variant: find insertion point |
| [34. Find First and Last Position of Element in Sorted Array](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/) | Range search with binary search |

---

## 🧩 Module 9 — Dungeon Maze Solver (Backtracking)

### 🎥 Recommended Lectures

- **Abdul Bari – "Backtracking Explained"**. Presents the core backtracking technique using classic problems like the Rat in a Maze.
- **Backtracking Visualized – "Rat in a Maze"**. Offers a visual simulation of a maze and shows how recursion explores paths and backtracks upon dead ends.

### 🧠 Assignment: Build a Recursive Maze Solver

1. **Maze representation**: Use a 2‑D `char` array (size specified by constants) with `'#'` representing walls and `'.'` representing open paths. Mark the start and end positions with `S` and `E`.
2. **Solver function**: Implement `bool solveMaze(int x, int y)` that returns `true` if a path from `(x,y)` to the end exists. The function should:
    - Check if `(x,y)` is out of bounds or a wall; return `false`.
    - If `(x,y)` is the end, return `true`.
    - Mark `(x,y)` as visited (e.g., with `'*'`).
    - Recursively explore neighbours in four directions (up, right, down, left). If any recursive call returns `true`, propagate the success upward.
    - Backtrack by unmarking `(x,y)` if no path is found.
3. **Integration**: Allow the user to input the maze or generate one randomly. Print the solution path if found or report that no path exists.

### Test cases and instructions

- **Simple maze**: Solve a small maze with a clear path. Verify that the solver finds the path.
- **Dead end**: Include dead ends and verify that the solver backtracks correctly without getting stuck.
- **No solution**: Provide a maze with no path from start to end. Confirm that the solver explores all possibilities and reports failure.

### 🧩 C++ Lesson: Recursion & State Restoration

Backtracking uses recursion to explore all potential solutions.  The call stack keeps track of the current path.  When a path fails, the solver must undo state changes before returning.  Use **reference parameters** or global variables to maintain shared state.  Always mark and unmark visited cells appropriately; otherwise, the algorithm may revisit the same cell and enter infinite recursion.

### 📚 Additional Resources

- **GeeksforGeeks – "Backtracking Basics"**: Introduces the backtracking framework and common patterns.
- **GeeksforGeeks – "Rat in a Maze"**: Presents a C++ implementation of the maze‑solving problem.

### 🧪 LeetCode Practice

| Problem | Concept |
| --- | --- |
| [79. Word Search](https://leetcode.com/problems/word-search/) | Backtracking on a 2‑D grid |
| [90. Subsets II](https://leetcode.com/problems/subsets-ii/) | Generating combinations with duplicates |
| [46. Permutations](https://leetcode.com/problems/permutations/) | Recursive generation of permutations |

---

## 🧩 Module 10 — Combat Optimization (Dynamic Programming)

### 🎥 Recommended Lectures

- **freeCodeCamp – "Dynamic Programming for Beginners"**. Covers memoization and tabulation using classic problems like Fibonacci, and shows how to turn exponential recursive algorithms into polynomial time.
- **Abdul Bari – "Dynamic Programming Introduction"**. Introduces overlapping subproblems and optimal substructure with knapsack examples.

### 🧠 Assignment: Implement DP Solutions for Game Mechanics

Dynamic programming (DP) helps optimize resource usage in the game (e.g., crafting or stamina management).  Complete the following tasks:

1. **1‑D DP (Climbing Stairs)**: Implement `int waysToClimb(int n)` using a 1‑D array of size `n+1`. Each `ways[i] = ways[i-1] + ways[i-2]` because the player can take one or two steps. Use bottom‑up tabulation.
2. **0/1 Knapsack (Stamina/Crafting)**: Given a list of actions, each with a stamina cost and a reward, and a maximum stamina `S`, implement `int maxReward(const vector<int>& cost, const vector<int>& reward, int S)`. Use a 2‑D DP array `dp[i][j]` where `i` is the number of actions considered and `j` is the current stamina budget. Transition: `dp[i][j] = max(dp[i-1][j], dp[i-1][j-cost[i]] + reward[i])` if `cost[i] <= j`.
3. **Memory management**: Allocate the DP tables using `new` (e.g., `int** dp = new int*[n+1];` and `dp[i] = new int[S+1];`) and deallocate them at the end. Alternatively, use `std::vector` or `std::unique_ptr` for safer management.

### Test cases and instructions

- **Climbing stairs**: Test `waysToClimb` for `n=1…10` and verify the results match the Fibonacci sequence (e.g., `n=5` should return 8).
- **Knapsack**: For a small set of actions (e.g., costs `[1,3,4]`, rewards `[15,20,30]` and `S=4`), manually compute the optimal reward (e.g., choose actions with costs 1 and 3 for a reward of 35) and compare with your function’s output.
- **Space optimization**: Modify your 2‑D DP to use a 1‑D array (only previous row) and verify that results remain correct.

### 🧩 C++ Lesson: Multi‑Dimensional Arrays & Resource Cleanup

When allocating 2‑D arrays with `new`, remember that each row is an independent allocation.  Deallocate using nested loops: `for (int i=0; i<=n; ++i) delete[] dp[i]; delete[] dp;`.  Alternatively, use `std::vector<std::vector<int>>` to manage memory automatically.  Always weigh **time & space trade‑offs**: using a 1‑D array can reduce space from `O(n*S)` to `O(S)` but may require careful in‑place updates.

### 📚 Additional Resources

- **GeeksforGeeks – "Dynamic Programming"**: Overviews DP concepts, including memoization and tabulation.
- **GeeksforGeeks – "0/1 Knapsack Problem"**: Provides code and explanation for the 0/1 knapsack problem, which directly relates to stamina optimization.

### 🧪 LeetCode Practice

| Problem | Concept |
| --- | --- |
| [70. Climbing Stairs](https://leetcode.com/problems/climbing-stairs/) | DP basics with 1‑D table |
| [198. House Robber](https://leetcode.com/problems/house-robber/) | DP with recurrence relations |
| [322. Coin Change](https://leetcode.com/problems/coin-change/) | Minimizing combinations with tabulation |

---

## 📊 Progress Tracking

- [ ] Module 1: Core Engine & World Grid
- [ ] Module 2: Hash Table for Game Entities
- [ ] Module 3: Singly Linked List for Inventory
- [ ] Module 4: Stack and Queue for Quests & History
- [ ] Module 5: Graph for World Navigation
- [ ] Module 6: Binary Heap for Event Priority
- [ ] Module 7: Greedy Combat System
- [ ] Module 8: Binary Search for Shop Items
- [ ] Module 9: Dungeon Maze Solver (Backtracking)
- [ ] Module 10: Combat Optimization (Dynamic Programming)

---

## 🎓 Learning Outcomes

By the end of **AlgoQuest**, you will:

| Area | Mastery |
| --- | --- |
| **C++ Fundamentals** | Understand syntax, memory management, pointers, references and the distinctions between arrays and pointers ([GeeksforGeeks: Arrays vs Pointers](https://www.geeksforgeeks.org/c/difference-between-array-and-pointers/#:~:text=Distinguishing%20Features%20of%20Arrays%20and,Pointers)).  You will know when to allocate on the stack vs the heap and how to manage dynamic memory correctly ([GeeksforGeeks: Stack vs Heap Arrays](https://www.geeksforgeeks.org/cpp/difference-between-stack-allocated-and-heap-allocated-arrays/#:~:text=In%20C%2FC%2B%2B%2C%20arrays%20can%20be,allocated%20arrays)). |
| **OOP Design** | Utilize classes and structs appropriately ([GeeksforGeeks: Structure vs Class](https://www.geeksforgeeks.org/cpp/structure-vs-class-in-cpp/#:~:text=In%20C%2B%2B%2C%20a%20structure%20works,structure%20are%20public%20by%20default)), apply encapsulation, and follow the Rule of Five when handling resources. |
| **Pointers & Memory** | Master pointer arithmetic, pointer to pointer, and memory ownership.  Write destructors, copy constructors and move semantics to manage resources. |
| **Data Structures** | Build and understand arrays, linked lists, stacks, queues, hash tables, graphs, heaps and dynamic programming tables from scratch. |
| **Algorithms** | Implement and analyze BFS, DFS, sorting algorithms, binary search, greedy strategies, backtracking and dynamic programming. |
| **Problem Solving** | Tackle over 30 curated LeetCode problems mapped to each module, reinforcing theoretical knowledge with practical coding exercises. |

---

## 💡 Tips for Success

- **Start from Module 1** — Even if you think you know the basics, the C++ fundamentals covered here are crucial
- **Don't skip the LeetCode problems** — They're specifically chosen to reinforce each module's concepts
- **Test thoroughly** — Use the provided test cases and add your own edge cases
- **Use memory debugging tools** — Tools like Valgrind or AddressSanitizer help catch memory leaks early
- **Read the documentation** — The GeeksforGeeks and Programiz links provide deeper explanations
- **Build incrementally** — Complete each module's assignment before moving to the next

---

## 📝 Notes

This course is designed as a personal learning journey. The structure emphasizes:
- **Hands-on implementation** over theoretical knowledge
- **Understanding fundamentals** before using standard library shortcuts
- **Practical application** through building a real project
- **Interview preparation** through curated LeetCode problems

Remember: The goal isn't just to complete the course, but to truly understand the concepts well enough to apply them in technical interviews and real-world scenarios.

---

## 🔗 Additional Resources

- [C++ Reference](https://en.cppreference.com/) — Comprehensive C++ documentation
- [LeetCode](https://leetcode.com/) — Practice problems
- [GeeksforGeeks](https://www.geeksforgeeks.org/) — Data structures and algorithms tutorials
- [Programiz](https://www.programiz.com/cpp-programming) — C++ tutorials and examples

---

**Happy coding! 🚀**