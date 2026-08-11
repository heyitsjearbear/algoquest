#include "HashMap.h"

template <typename K, typename V>
HashMap<K, V>::HashMap() : size(0), capacity(16)
{
    buckets = new Node *[capacity]();
}