class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<int> tempIndex;
        for(int i = 0; i != nums.size(); i++)
        {
            for(int j = (i + 1); j != nums.size(); j++)
            {
                if(((nums[i] + nums[j]) == target) && i != j)
                {
                    tempIndex.push_back(i);
                    tempIndex.push_back(j);
                    
                    return tempIndex;
                }
            }
        }
        
        return tempIndex;
    }
};
