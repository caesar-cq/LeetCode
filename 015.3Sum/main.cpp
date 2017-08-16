class Solution {
public:
    vector<vector<int>> threeSum(vector<int> &nums) {
        vector<vector<int> > result;
        // 排序
        sort(nums.begin(), nums.end());
        int n = static_cast<int>(nums.size());
        for (int i = 0; i < n - 2; ++i) {
            // 去重复
             if (i>0 && nums[i-1] == nums[i]){
                 continue;
             }
            int j = i + 1;
            int k = n - 1;
            while (j < k) {
                if (nums[i] + nums[j] + nums[k] < 0){
                    // 去重复
                    while (j < k && nums[j] == nums[j+1]) {
                        j++;
                    }
                    j++;
                }
                else if (nums[i] + nums[j] + nums[k] > 0){
                     // 去重复
                    while (k > j && nums[k] == nums[k-1]) {
                        k--;
                    }
                    k--;
                }
                else{
                    result.push_back({nums[i], nums[j], nums[k]});
                    // 去重复
                    while (j < k && nums[j] == nums[j+1]) {
                        j++;
                    }
                    while (k > j && nums[k] == nums[k-1]) {
                        k--;
                    }
                    j++;
                    k--;
                }
            }
        }
        return result;
    }
};
