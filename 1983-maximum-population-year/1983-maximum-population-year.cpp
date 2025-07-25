class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int> population(2051, 0); 
        for (auto& log : logs) {
            int birth = log[0], death = log[1];
            population[birth]++;
            population[death]--; 
        }
        int maxPop = 0, year = 1950, currPop = 0;
        for (int y = 1950; y <= 2050; ++y) {
            currPop += population[y];
            if (currPop > maxPop) {
                maxPop = currPop;
                year = y;
            }
        }
        return year;
    }
};