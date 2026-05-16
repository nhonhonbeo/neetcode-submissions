class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if(stones.empty()) return 0;
        int n = stones.size();
        while(n>1){
            sort(stones.begin(), stones.end(), greater<int>());
            int y = stones[0];
            int x = stones[1];
            if(y>x){
                stones[0] = y-x;
                stones.erase(stones.begin()+1);
                n--;
            }
            else{
                stones.erase(stones.begin());
                stones.erase(stones.begin());
                n-=2;
            }
        }
        return stones.empty() ? 0 : stones[0];
    }
};