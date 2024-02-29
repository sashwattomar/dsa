class Solution {
public:
    long long calculateTime(vector<int>& piles, int speed) {
         long long time = 0;
        for (int i = 0; i < piles.size(); i++) {
            time += ceil((double)(piles[i]) / (double)(speed));
        }
        return time;
    }

    int maxPile(vector<int>& piles) {
        int maxValue = INT_MIN;
        for (int i = 0; i < piles.size(); i++) {
            maxValue = max(maxValue, piles[i]);
        }
        return maxValue;
    }

    int minEatingSpeed(vector<int>& piles, int h) {

        int low = 1;
        int high = maxPile(piles);

        while (low <= high) {
            int mid = (low + high) / 2;
            long long time = calculateTime(piles, mid);

            if (time <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};