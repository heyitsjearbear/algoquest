#ifndef HASHMAP_H
#define HASMAP_H

template <typename K, typename V>
class Hashmap {
    public:
    void insert(const K& key, const V& value);
    V* get(const K& key);
    bool remove(const K& key);
    std::size_t hashKey (const K& key, std::size_t capacity);
    
    Hashmap();
    ~HashMap();

    private:
    Node <K, V>* buckets;
    std::size_t capacity;
    std::size_t size_;
    
    struct Node {
        K key;
        V value;
        Node * next;
    }
};

#endif