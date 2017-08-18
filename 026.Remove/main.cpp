class Solution {  
public:  
    int threeSumClosest(vector<int> &num, int target) {  
        int result = 0;  
        int remainder = INT_MAX ;
          
        sort(num.begin(), num.end());  
          
        for(int i = 0; i < num.size(); i++)  
            twoSum(num, i, result, remainder, target);     
        return result;  
    }  
    void twoSum(vector<int> num, int targetIndex, int& result, int &remainder, int target){  
        int i = targetIndex + 1;   
        int j = num.size() - 1;   
          
        while(i < j){  
            int thisRemainder = num[targetIndex] + num[i] + num[j] - target;  
            if(abs(thisRemainder) <= remainder) {  
                remainder = abs(thisRemainder);  
                result = num[targetIndex] + num[i] + num[j];  
            }  
            if(thisRemainder > 0) j--;   
            else i++;  
              
        }  
          
    }  
};  