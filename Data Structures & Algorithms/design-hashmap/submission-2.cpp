class MyHashMap {
    static const int SIZE = 1000;
    vector<list<pair<int, int>>>table;
public:
    MyHashMap() : table(SIZE) {}
    
    void put(int key, int value) {
        int idx = key%SIZE;
        for(auto&[k,v] : table[idx]){
            if(k==key){
                v = value;
                return;
            }
        } 
        table[idx].push_back({key,value});
    }
    
    int get(int key) {
        int idx = key%SIZE;
        for(auto&[k,v] : table[idx]){
            if(k==key)return v;
        }
        return -1;   
    }
    
    void remove(int key) {
        int idx = key%SIZE;
        for (auto it = table[idx].begin(); it != table[idx].end(); ++it) { 
            if (it->first == key) {   
                table[idx].erase(it); 
                return;    
           }
        }
    }
};


/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */