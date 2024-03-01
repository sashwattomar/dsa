class Solution {
public:


    string maximumOddBinaryNumber(string s) {
        string newString = s;
        int n = newString.size();

        sort(newString.begin(), newString.end());
        reverse(newString.begin(), newString.end());
        if( newString[n-1]!='0')
        return newString;

        for (int i = n - 1; i >= 0; i--) {
            if (newString[i]=='1') {
                swap(newString[i],newString[n-1]);
                return newString;
            }
        }
         return newString;
    }
};