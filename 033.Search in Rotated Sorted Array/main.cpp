class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size() ; i++){
            if(target == nums[i]){
                return i;
            }
        }
        return -1;
    }
};

//双指针
//左右同时比较，直至找到目标值或是左右指针相遇

public int search(int[] nums, int target){ 
    int left = 0;
    int right = nums.length - 1;
    while(left<=right){
        if(nums[left]==target){
            return left;
        }
        if(nums[right] == target){
            return right;
        }
        left++;
        right--;
    }
    return -1;
}

//思路二：二分法查找
//思路一并没有充分利用条件，及这个数组是由两个有序的子数组合成的。这里我们可以使用二分法的一个变形的算法。先找到中间节点，这个中间节点如果不是在左顺序子数组，就一定在右顺序子数组，反之亦成立。这样我们就可以变相的使用二分法将区间范围逐渐缩小，直至找到目标值。
//这里相比于思路一，更适用于目标节点在中间的情况，而思路一在目标节点分布在数组两侧会效率更高。

    public int search(int[] nums, int target){ 
        int left = 0;
        int right = nums.length - 1;
        while(left<=right){
            int mid = (left + right)/2;
            int midNum = nums[mid];
            if(midNum==target){
                return mid;
            }
            if(nums[left]<=midNum){
                if(nums[left]<=target && midNum>target){
                    right = mid - 1;
                }else{
                    left = mid + 1;
                }
            }
            if (midNum <= nums[right]){
                if (target > midNum && target <= nums[right])
                    left = mid + 1;
                 else
                    right = mid - 1;
            }
        }
        return -1;
    }
