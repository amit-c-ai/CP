class Solution {
public:
    string removeDuplicates(string s) {
        int n = s.size();
        stack<char> stack;
        for(int i=n-1; i>=0; i--){
            if(stack.empty()){
                stack.push(s[i]);
            }
            else{
                if(stack.top() == s[i]){
                    stack.pop();
                }
                else{
                    stack.push(s[i]);
                }
            }
        }
        string ans="";
        while(!stack.empty()){
            ans += stack.top();
            stack.pop();
        }
        return ans;
    }
};
