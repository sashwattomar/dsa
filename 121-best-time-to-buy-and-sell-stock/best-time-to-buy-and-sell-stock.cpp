class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cp = prices[0];
        int mp = 0; 

        for( auto ele : prices ) {
            
            if( ele < cp ) {
                cp = ele ;
            }
            else
            if( ele > cp && (ele-cp) > mp) {
                mp = ele - cp;
            }

        }
        return mp;
    }
};