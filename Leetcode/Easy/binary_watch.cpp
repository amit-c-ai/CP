class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);        
        vector<string> ans;
        int hr, min;
        for (int hr = 0; hr < 12; hr++) {
            for (int min = 0; min < 60; min++) {
                bitset<4> hour(hr);
                bitset<6> minute(min);
                if(hour.count()+minute.count() == turnedOn) {
                    string time = to_string(hr);
                    if(min < 10) time += (":0"+to_string(min));
                    else time += (":"+to_string(min));
                    ans.push_back(time);
                }
            }
        }
        return ans;
    }
};
