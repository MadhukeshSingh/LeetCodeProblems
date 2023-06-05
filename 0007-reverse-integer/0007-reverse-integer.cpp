class Solution {
public:
    int reverse(int x) {
        int r=0;
        while(x!=0){
            int rem=x%10;
            if((r > INT_MAX/10) ||( r < INT_MIN/10 )){
                return 0;
            }
            r =(r*10)+rem;            
            x=x/10;
        }
        return r;        
    }
};