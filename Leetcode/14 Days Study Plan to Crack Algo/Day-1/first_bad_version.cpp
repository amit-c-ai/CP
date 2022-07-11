class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1, high = n;
        int target=0;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(isBadVersion(mid)==true){
                if(isBadVersion(mid-1)==false){
                    target = mid;
                    break;
                }
                else{
                    high=mid-1;
                    continue;
                }
            }
            else{
                if(isBadVersion(mid+1)==true){
                    target = mid+1;
                    break;
                }
                else{
                    low=mid+1;
                    continue;
                }
            }
        }
        return target;
    }
};