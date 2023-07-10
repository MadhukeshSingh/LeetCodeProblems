class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxx=-1;
        for(int i=arr.size()-1;i>=0;i--)
        {
            
            int test= arr[i];
            arr[i]=maxx;
            if(test>maxx)
            maxx=test;
        }
        return arr;
    }
};