class Solution {
public:
    bool check(vector<int> a, vector<int> b, int n=26){
        for(int i=0; i<n; i++){
            if(a[i] != b[i]){
                return false;
            }
        }
        return true;
    }
    
    bool checkInclusion(string s1, string s2) {
        int l1=s1.length(), i, l2=s2.length(), k=l1;
        if(l1>l2){
            return false;
        }
        vector<int> s2freq(26, 0), s1freq(26, 0);
        for(i=0; s1[i]!='\0'; i++){
            s1freq[s1[i]-'a']++;
        } i=0;
        while(k--){
            s2freq[s2[i++]-'a']++;
        }
        if(check(s1freq, s2freq)){
            return true;
        }
        int low=0, high=i;
        while(high<l2){
            s2freq[s2[low]-'a']--;
            s2freq[s2[high]-'a']++;
            high++; low++;
            if(check(s1freq, s2freq)){
                return true;
            }
        }
        return false;
    }
};
