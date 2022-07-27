class Solution {
public:
    int count(string message){
        int words=0;
        for(int i=0; message[i]!='\0'; i++){
            if(message[i]==' '){
                words++;
            }
        }
        return words+1;
    }
    
    static bool cmp(pair<string, int>&a, pair<string, int>&b){
        if(a.second == b.second){
            return a.first > b.first;
        }
        return a.second > b.second;
    }
    
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        map<string, int> mp;
        vector<pair<string, int>> v;
        int n=senders.size();
        for(int i=0; i<n; i++){
            mp[senders[i]] += count(messages[i]);
        }
        for(auto i: mp){
            v.push_back({i.first, i.second});
        }
        sort(v.begin(), v.end(), cmp);
        return v[0].first;
    }
};
