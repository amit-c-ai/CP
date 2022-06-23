class Solution {
public:
	int longestConsecutive(vector<int>& nums) {
		int maxlen=0, len=0, curr=0;
		set<int> s;
		for(auto i: nums){
			s.insert(i);
		}
		for(int num: nums){
			if(!s.count(num-1)){
				curr = num;
				len = 1;
				while(s.count(curr+1)){
					curr++;
					len++;
				}
				maxlen = max(len, maxlen);
			}
		}
		return maxlen;
	}
}; 
