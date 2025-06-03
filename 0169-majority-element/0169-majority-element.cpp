class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int frequency=0, answer=0;
        for (int i=0;i<nums.size();i++)
        {
            if(frequency==0)
            {
                answer=nums[i];
            }
            if(answer==nums[i])
            {
                frequency++;
            }
            else
            {
                frequency--;
            }
        }
        return answer;
    }

};