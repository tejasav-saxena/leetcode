class Solution {
public:
    bool isPalindrome(int x) {
        long long revNum=0;
        int dupli=x;
        while(x>0)
        {
            int lastDig=x%10;
            revNum=(revNum * 10)+lastDig;
            x=x/10;
        }
        if(dupli==revNum) return true;
        else return false;
    }
};