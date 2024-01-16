// Problem Link: https://leetcode.com/problems/insert-delete-getrandom-o1
// My Solution:
class RandomizedSet {
private:
    vector<int>v;
    unordered_map<int,int>mp;
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mp.find(val)!=mp.end()) return false;
        v.push_back(val);
        mp[val] = v.size()-1;
        return true;
    }
    
    bool remove(int val) {
        if(mp.find(val) == mp.end()) return false;
        int index = mp[val];
        int last = v.back();
        v[index] = last;
        v.pop_back();
        mp[last] = index;
        mp.erase(val);
        return true;
    }
    
    int getRandom() {
        int index = rand()%v.size();
        return v[index];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */