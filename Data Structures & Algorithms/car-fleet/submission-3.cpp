class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int,int>>cars;
        for(int i = 0; i<n; i++){
            cars.push_back({position[i], speed[i]}); 
        }
        sort(cars.rbegin(), cars.rend());
        stack<float>fleet;
        for(int i = 0; i<n; i++){
            float time = (float)(target-cars[i].first)/cars[i].second;
            if(fleet.empty() || time > fleet.top()){
                fleet.push(time);
            }
        }
        return fleet.size();
    }
};
