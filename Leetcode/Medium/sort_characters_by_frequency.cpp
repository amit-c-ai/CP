class Solution {

public:
    static bool comp(pair<char, int>&a, pair<char, int>&b){
        return a.second > b.second;
    }
    string frequencySort(string s) {
        string ans = "";
        vector<pair<int,char>> v(75, {0, '0'});
        int n = s.size();
        for(int i=0; i<n; ++i){
            v[s[i]-'0'].second = s[i];
            v[s[i]-'0'].first+=1;
        }
        sort(v.rbegin(), v.rend());
        for(auto p:v){
            if(p.first!=0){
                while(p.first--)ans+=p.second;
            }else break;
        }
        return ans;
    }
};
