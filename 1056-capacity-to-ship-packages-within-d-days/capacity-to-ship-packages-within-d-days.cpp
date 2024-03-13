class Solution {
public:
    int getMaxCap (vector<int>& weights, int& low) {
        int sum = 0;
        for( int i = 0; i<weights.size(); i++){
            low = min(weights[i],low);
            sum+=weights[i];
        }
        return sum;
    }

    bool isPossible(int days, int minCap, vector<int>& weights) {
        int currCap = 0;
        int i = 0;
        int day = 1;
        while(i<weights.size()){
            currCap += weights[i];
            if( currCap > minCap ) {
                day++;
                currCap = 0;
            }else{
                i++;
            }
        }
        if( day<=days){
            return true;
        }
        return false;
        
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        while(low <= high) {

            int mid = (low+high)/2;

            if(isPossible(days,mid, weights)){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
            return low;

    }
};