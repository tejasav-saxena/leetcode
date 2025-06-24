class Solution
{
public:
    int robLinear(vector<int>& nums, int start, int end)
    {
    int prev1 = 0, prev2 = 0;
    for (int i = start; i <= end; ++i) {
    int temp = max(prev1, prev2 + nums[i]);
    prev2 = prev1;
    prev1 = temp;
    }
    return prev1;
    }

    int rob(vector<int>& nums)
     {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];

        int max1 = robLinear(nums, 0, n - 2);  
        int max2 = robLinear(nums, 1, n - 1);  
        return max(max1, max2);
    }
};
