class RandomizedSet {
public:
    set<int>s;
    RandomizedSet() 
    {

    }
    bool insert(int val) 
    {
        if(s.find(val)==s.end())
        {
            s.insert(val);
            return 1;
        }
        return 0;
    }
    
    bool remove(int val) 
    {
        if(s.find(val)!=s.end())
        {
            s.erase(val);
            return 1;
        }
        return 0;
    }
    
    int getRandom() 
    {
        int b=rand()%(s.size());
        return *next(s.begin(),b);
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */