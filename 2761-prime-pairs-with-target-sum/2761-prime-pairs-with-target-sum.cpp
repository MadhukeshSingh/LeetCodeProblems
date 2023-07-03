class Solution {
public:
    void SieveOfEratosthenes(int n)
{
   
  
}
    
    
    vector<vector<int>> findPrimePairs(int n) {
           
    int nn = 1e6+1;
    bool prime[nn];
        
         memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
        
        vector<vector<int>> result;
        
        vector<int> v;
        for (int p = 2; p <= n; p++)
        if (prime[p])
            v.push_back(p);
        
        int i = 0, j = v.size()-1;
        while(i<=j){
            if(v[i]+v[j] == n){
                result.push_back({v[i], v[j]});
                i++; j--;
            }else if(v[i] + v[j]>n) j--;
            else i++;
        }
        return result;
    }
};