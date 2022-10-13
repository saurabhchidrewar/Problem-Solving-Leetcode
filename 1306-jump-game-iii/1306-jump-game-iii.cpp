class Solution {
    int n;
    bool traverse(vector<int> &arr, vector<int> &vis, int i) {
        if (i < 0 || i >= n || vis[i])
            return false;
        
        if (arr[i] == 0)
            return true;
        
        vis[i] = 1;
        
        bool a = traverse(arr, vis, i + arr[i]);
        if (a) return true;
        bool b = traverse(arr, vis, i - arr[i]);
        return b;
    }
public:
    bool canReach(vector<int>& arr, int start) {
        n = arr.size();
        vector <int> vis(n, 0);
        
        return traverse(arr, vis, start);
    }
};