#include "HashMap.h"

template <typename K, typename V>
HashMap<K, V>::HashMap() : size(0), capacity(16)
{
    buckets = new Node *[capacity]();
}

template <typename K, typename V>
void HashMap<K,V>::insert(const K &key, const V &value)
{   
    size_t bucketIndex = hashKey(key, capacity);
    Node *bucket = buckets[bucketIndex];

    // if it's first element we just insert
    if (bucket == nullptr)
    {
        bucket = new Node;
        bucket->key = key;
        bucket->value = value;
        bucket->next = nullptr;
        buckets[bucketIndex] = bucket;
        size++;

        return;
    }

    Node prev = nullptr;
    // check if key exists
    while (bucket != nullptr)
    {
        if (bucket->key == key)
        {
            bucket->value = value;
            return;
        }
        prev = bucket;
        bucket = bucket->next;
    }
    lastNode = bucket;
    bucket = new Node;
    bucket->key = key;
    bucket-> value = value;
    bucket -> next = nullptr;
    buckets[bucketIndex] = prev;
    size++;

    return;
}

template <typename K, typename V>
std::size_t HashMap<K,V>::hashKey(const K&key, std::size_t capacity)
{
   return std::hash<K>{}(key) % capacity;
}