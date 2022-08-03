class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> mR, mM;
        int i;
        for(i=0; ransomNote[i]!='\0'; ++i){ mR[ransomNote[i]]++; }
        for(i=0; magazine[i]!='\0'; ++i){ mM[magazine[i]]++; }
        
        for(auto i: mR){
            if(mM[i.first] < i.second){
                return false;
            }
        }      
        return true;
    }
};
