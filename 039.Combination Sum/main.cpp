class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> solution;
        vector<vector<int>> result;
        
        int sum = 0;
        sort(candidates.begin(),candidates.end());
        
        dfs(candidates,solution,result,0,target,sum);
        //result.erase(unique(result.begin(), result.end()), result.end());
        return result;
    }
    
    void dfs(vector<int>& candidates,vector<int>& solution,vector<vector<int>>& result,int level,int target,int &sum){
        if(sum > target){
            return;
        }
        if(sum == target){
           
            result.push_back(solution);
            return;
        }
        for(int i = level ; i < candidates.size() ;i++){
            sum += candidates[i];
            solution.push_back(candidates[i]);
            dfs(candidates,solution,result,i,target,sum);
            
            solution.pop_back();
            sum -= candidates[i]; 
        }
    }
};
