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

//˫ָ��
//����ͬʱ�Ƚϣ�ֱ���ҵ�Ŀ��ֵ��������ָ������

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

//˼·�������ַ�����
//˼·һ��û�г����������������������������������������ϳɵġ��������ǿ���ʹ�ö��ַ���һ�����ε��㷨�����ҵ��м�ڵ㣬����м�ڵ������������˳�������飬��һ������˳�������飬��֮��������������ǾͿ��Ա����ʹ�ö��ַ������䷶Χ����С��ֱ���ҵ�Ŀ��ֵ��
//���������˼·һ����������Ŀ��ڵ����м���������˼·һ��Ŀ��ڵ�ֲ������������Ч�ʸ��ߡ�

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
