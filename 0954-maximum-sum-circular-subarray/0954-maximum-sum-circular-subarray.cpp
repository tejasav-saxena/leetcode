class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int totalSum =nums[0];
        int maxSum= nums[0] ,currMax= nums[0];
        int miniSum =nums[0] , currMin=nums[0];

        for(int i=1;i<nums.size();++i)
        {
            int num = nums[i];
            currMax =max(currMax + num, num);
            maxSum = max(maxSum,currMax);
            currMin=min(currMin+num,num);
            miniSum=min(miniSum,currMin);

            totalSum += num;
        }
        if(maxSum < 0)
         return maxSum;
        return max(maxSum,totalSum - miniSum);
    }
};