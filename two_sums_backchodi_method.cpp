class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     map<int,int> table;
     vector<int> res;
       //2-1,7-2,11-3,15-4
        for(int i=1;i<nums.size();i++){
        table[nums[i-1]]=i; 
        };
        for(int i=0;i<nums.size();i++){
            //x=9-2=7
        int x=target-nums[i];
        int y=table[x];
        //y=table[7] not present 
        //y=0
        if(nums[i]==x&&i==y-1){
            continue;
        }
        //case 2 
        //3==3 && 0==0

        else{
        if(y!=0){
            res.push_back(i);
            res.push_back(y-1);
            break;
        }
        }
        }
            
            return res;
        };
};
