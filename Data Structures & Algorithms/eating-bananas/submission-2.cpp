class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int k = 1;
        int n = piles.size();
        while(k < 1000000000){
            long sum = 0;
            for(int i = 0; i<n; i++){
                sum+= (piles[i] + k - 1)/k;
            }
            if (sum<=h) return k;
            k++;
        }
        return k;
    }
};
