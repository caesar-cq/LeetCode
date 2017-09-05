class Solution {
public:
     vector<int> searchRange(vector<int>& nums, int target) {  
        int n = nums.size(), L = 0, R = n - 1;  
        if(n == 0) return {-1, -1};  
        while(L < R){  
            int mid = (L + R) / 2;
            if(nums[mid] < target) L = mid + 1;  
            else R = mid;  
        }  
        if(nums[L] != target) return {-1, -1};  
        int left = L, right = L;  
        while(nums[left] == nums[left - 1] && left > 0) left--;  
        while(nums[right] == nums[right + 1] && right < n -1) right++;  
        return {left, right};  
    }
};