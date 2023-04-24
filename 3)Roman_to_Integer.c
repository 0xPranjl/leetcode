class Solution {
public:
    int romanToInt(string s) {
        map<char,int> lund;
        ld['I']=1;
        ld['V']=5;
        ld['X']=10;
        ld['L']=50;
        ld['C']=100;
        ld['D']=500;
        ld['M']=1000;

        int ans=0;
        for(int i=0;i<s.length();i++){
            if(ld[s[i]]<ld[s[i+1]]){
                ans=ans+(ld[s[i+1]]-ld[s[i]]);
                i++;
            }
            
            else{
                ans=ans+ld[s[i]];
            }

        }
       
   
        return ans;

    }
};
