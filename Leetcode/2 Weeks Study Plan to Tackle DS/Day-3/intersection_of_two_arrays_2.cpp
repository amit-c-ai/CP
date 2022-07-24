class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int len1=nums1.size(), len2=nums2.size();
        vector<int> ans;
        map<int, int> mp;
        for(int i=0; i<len1; i++){
            mp[nums1[i]]++;
        }
        for(int i=0; i<len2; i++){
            if(mp[nums2[i]]>0){
                ans.push_back(nums2[i]);
                mp[nums2[i]]--;
            }
        }
        return ans;
    }
};
