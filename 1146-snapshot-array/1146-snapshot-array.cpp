class SnapshotArray {
public:
    map<int,map<int,int>>mp;
    int id ;
    SnapshotArray(int n) {
        id = 0;
        for(int i = 0;i<n;i++){
            map<int,int>m;
            m[0] = 0;
            mp[i] = m;
        }
    }
    
    void set(int index, int val) {
        mp[index][id] = val;
    }
    int snap() {
        return id++;
    }
    int get(int index, int snap_id) {
        if(mp[index].count(snap_id)){
            return mp[index][snap_id];
        }        
            auto it =  mp[index].lower_bound(snap_id);
        it--;
        return it->second;
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */