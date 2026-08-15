#ifndef HASHMAP_H
#define HASHMAP_H
#include <cstddef>
#include <functional>

template <typename K, typename V>
class HashMap {
    public:
    void insert(const K &key, const V &value);
    V* get(const K &key);
    bool remove(const K &key);
    std::size_t hashKey (const K &key, std::size_t capacity);
    HashMap();
    ~HashMap();

    HashMap(const HashMap &other);
    HashMap &operator=(const HashMap &other);

    private:
    struct Node {
        K key;
        V value;
        Node *next;
    };
    Node *buckets;
    std::size_t capacity;
    std::size_t size;
};

#endif