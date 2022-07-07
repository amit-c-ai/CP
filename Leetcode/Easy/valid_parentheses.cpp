class Solution {
public:
    bool isValid(string s) {
        map<char, char> mp;
	    mp.insert(pair<char, char>(')', '('));
	    mp.insert(pair<char, char>('}', '{'));
	    mp.insert(pair<char, char>(']', '['));
    	
        stack<char> stack;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                stack.push(s[i]);
            else if(stack.empty() || stack.top()!=mp[s[i]]){
                return false;
            }
            else{
                stack.pop();
            }
        }
        if(stack.empty())
            return true;
        return false;
    }
};
