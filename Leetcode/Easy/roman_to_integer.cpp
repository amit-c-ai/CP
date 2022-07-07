class Solution {
public:
    bool isDifferent(char left, char right){
        if((left=='I' && (right=='V' || right=='X')) ||
           (left=='X' && (right=='L' || right=='C')) ||
           (left=='C' && (right=='D' || right=='M')) ){
            return true;
        }
        return false;
    }
    
    int romanToInt(string s) {
        map<char, int> mp;
        mp['I']=1; mp['V']=5; mp['X']=10; mp['L']=50; 
        mp['C']=100; mp['D']=500; mp['M']=1000;
        int n=s.length(), ans=0;
        for(int i=0; i<n; i++){
            if(isDifferent(s[i], s[i+1])){
                ans += (mp[s[i+1]] - mp[s[i]]);
                i++;
            }
            else{
                ans += mp[s[i]];   
            }
        }
        return ans;
    }
};
