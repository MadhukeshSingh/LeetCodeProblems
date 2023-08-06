class Solution {   
    public String finalString(String s) {
        
        
        String ans="";
        
        for(int i=0;i<s.length();i++){
            
            char op=s.charAt(i);
            if(op!='i'){
                ans=ans+op+"";
            }else{
                ans=Solve(ans);
            }
        }
        
        return ans;
    }
    public String Solve(String st){
        
        String  res="";
        char chr;
      for (int i=0; i<st.length(); i++)
      {
        chr= st.charAt(i); 
        res= chr+res; 
      }
        return res;
    }
    
}