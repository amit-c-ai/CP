class Solution {
public:
    void merge(vector<int>& mrge, vector<int>& nums1, int s1, vector<int>& nums2, int s2){
        int i=0, j=0, k=0;

        while(i<s1 && j<s2){
            if(nums1[i]<nums2[j]){
                mrge.push_back(nums1[i]);
                i++;
            }
            else{
                mrge.push_back(nums2[j]);
                j++;
            }
            k++;
        }
        while(i<s1){
            mrge.push_back(nums1[i]);
            i++; k++;
        }
        while(j<s2){
            mrge.push_back(nums2[j]);
            j++; k++;
        }
    }
    
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int s1, s2, s3;
        s1 = nums1.size();
        s2 = nums2.size();
        s3 = s1+s2;
        vector<int> mrge;
        merge(mrge, nums1, s1, nums2, s2);
        
        if(s3%2==1){
            return (double)(mrge[s3/2]);
        }
        else{
            return ((double)(mrge[(s3/2)-1] + mrge[s3/2]))/2;
        }
    }
};