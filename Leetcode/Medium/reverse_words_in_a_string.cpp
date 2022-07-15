class Solution {
public:
    string reverseWords(string s) {
        int n=s.length(), i=0;
        string temp="", ans="";
        stack<string> stack;
        for(int i=0; i<n; i++){
            if(s[i] != ' '){
                temp += s[i];
            }
            else if(temp!=""){
                stack.push(temp);   
                temp = "";
            }
        }
        if(temp!=""){
            stack.push(temp);   
        }
        while(!stack.empty()){
            ans += stack.top();
            ans += " ";
            stack.pop();
        }
        ans.pop_back();
        return ans;
    }
};
