class SnapshotArray {
public:
      vector<vector<pair<int, int>>>updates;
    int curSnap;

public:
    SnapshotArray(int length) {
        updates.resize(length);
        curSnap = 0;
    }

    void set(int index, int val) {
        if (!updates[index].empty() && updates[index].back().first == curSnap)
            updates[index].back().second = val;
        else
            updates[index].push_back({curSnap, val});
    }

    int snap() {
        curSnap++;
        return curSnap - 1;
    }

    int get(int index, int snap_id) {
        int idx = upper_bound(updates[index].begin(), updates[index].end(), make_pair(snap_id,INT_MAX)) - updates[index].begin();
        if (idx == 0) return 0;
        return updates[index][idx - 1].second;
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */