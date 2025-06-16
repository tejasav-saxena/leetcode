class Solution {
public:
    int maxArea(vector<int>& height) {
        int max =0;
        int left =0;
        int right = height.size() -1;
        int maxWater =0;
        while (left < right)
        {

            int h = std::min(height[left], height[right]);
            int width = right - left;
            int currWater = h * width ;
            maxWater =std:: max(maxWater , currWater);
            if(height[left] < height[right])
            {
                left++;
            }
            else 
            {
                right--;
            }
        }
        return maxWater;
    }
};