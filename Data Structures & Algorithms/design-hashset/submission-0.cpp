class MyHashSet {
public:
    vector<int>result;
    MyHashSet() {
        
    }
    
    void add(int key) {
        if(!contains(key))result.push_back(key);
        
    }
    
    void remove(int key) {
        auto it = find(result.begin(), result.end(), key);
        if (it != result.end())
            result.erase(it);
        
    }
    
    bool contains(int key) {
        return find(result.begin(),result.end(),key)!=result.end();
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */