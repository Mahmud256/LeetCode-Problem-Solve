class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int sn = 0, sum = 0, missing = 0;
        
        int n = nums.size();
        
        for(int i=0; i<n; i++)
        {
            sum = sum+nums[i];
        }
        
        sn = n*(n+1)/2;
        
        missing = sn-sum;
        
      return missing;  
    }
};