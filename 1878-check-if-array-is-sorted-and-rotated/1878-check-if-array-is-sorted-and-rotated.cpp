class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();

        for (int k =0; k<n; k++){
            vector<int> rotated(n);
            for(int i =0; i<n; i++){
                rotated[i] = nums[(i + k) % n];
            }
            bool sorted = true;
            for (int i = 0; i<n-1;i++){
                if(rotated[i]>rotated[i+1]){
                    sorted = false;
                    break;
                }

            }
            if (sorted) return true;
        }
        return false;
    }
};