class Solution {
public:
    string addBinary(string a, string b) {
        int carry=0, i=a.length()-1, j=b.length()-1, sum;
        string ans="";
        while(i>=0 || j>=0 || carry>0){
            sum=carry;
            if(i>=0){
                sum += a[i]-'0';
                i--;
            }
            if(j>=0){
                sum += b[j]-'0';
                j--;
            }

            carry = (sum>1)?1:0;
            sum = sum%2;
            ans += to_string(sum);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
