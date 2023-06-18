class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int dist = 0;
        while(true){
            if(mainTank>=5){
                mainTank-=5;
                int multi = 5*10;
                dist = dist + multi;
                if(additionalTank>0){
                    mainTank++;
                    additionalTank--;
            }
            }
            else{
                break;
            }
        }
            int multi = mainTank*10;
        return dist+multi;
    }
};