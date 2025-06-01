class Solution {
public:
    void rotate(vector<int>& a, int d) {
         vector<int> temp(a.size());
       for(int i=0;i<a.size();i++)
       {
           temp[(i+d)%a.size()]=a[i];
       }
       a=temp;
    }
};