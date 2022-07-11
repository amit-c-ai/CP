class Solution {
public:
    bool isVowel(char ch){
        return (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
                ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
    }
    
    string reverseVowels(string s) {
        int low=0, high=s.length()-1;
        while(low<high){
            while(low<high && !isVowel(s[low])){
                low++;
            }
            while(low<high && !isVowel(s[high])){
                high--;
            }
            swap(s[low], s[high]);
            low++; high--;
        }
        return s;
    }
};
