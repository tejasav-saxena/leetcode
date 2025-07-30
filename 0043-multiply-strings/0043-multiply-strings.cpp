class Solution {
public:
    string multiply(string num1, string num2) {
         int n = num1.size(), m = num2.size();
        vector<int> result(n + m, 0);
        for (int i = n - 1; i >= 0; --i) {
            for (int j = m - 1; j >= 0; --j) {
                int mul = (num1[i] - '0') * (num2[j] - '0');
                int sum = mul + result[i + j + 1];

                result[i + j + 1] = sum % 10;
                result[i + j] += sum / 10;
            }
        }
        string product;
        for (int digit : result) {
            if (!(product.empty() && digit == 0)) {  
                product += digit + '0';
            }
        }
        return product.empty() ? "0" : product;
    }
};