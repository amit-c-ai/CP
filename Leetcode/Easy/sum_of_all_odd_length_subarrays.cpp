class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size(), odd=1, i, tempsum, k, sum=0, low;
        while(odd <= n){
            k = odd;
            tempsum=0;
            i=0;
            while(k--){
                tempsum += arr[i++];
            }
            sum += tempsum;
            for(low=0; i<n; ++i){
                tempsum -= arr[low++];
                tempsum += arr[i];
                sum += tempsum;
            }
            odd+=2;
        }
        return sum;
    }
};
