class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char, string> mp;
        int ptr1=0, ptr2=0;
        string temp;
        set<string> st;
        while(pattern[ptr1]!='\0' && s[ptr2]!='\0'){
            temp = "";
            while((s[ptr2] != ' ') && (s[ptr2] != '\0')){
                temp += s[ptr2++];
            }
            if(mp.find(pattern[ptr1]) != mp.end()){
                if(mp[pattern[ptr1]] != temp){
                    cout<<"not equal";
                    return false;
                }
            }
            else{
                if(st.find(temp)!=st.end()){
                    return false;
                }
                mp[pattern[ptr1]] = temp;
                st.insert(temp);
            }
            if(s[ptr2]=='\0'){ptr1++;break;}
            ptr1++; ptr2++;
        }
        if(pattern[ptr1]!='\0' || s[ptr2]!='\0'){
            return false;
        }
        return true;
    }
};
