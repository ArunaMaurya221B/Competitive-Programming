#https://leetcode.com/problems/two-sum/description/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>::iterator it;
        vector<int>::iterator itt;
        it=nums.begin();
        itt=nums.begin();
        int x=0, y=0, flag=0;
        for(it=nums.begin(); it!=nums.end();it++){
            int temp = *it;
            int t = target-temp;
            y=x+1;
            for(itt = it+1;itt != nums.end();itt++){
                if(*itt == t){
                    flag=1;
                }
                ++y;
                if(flag==1)
                break;
            }
            if(flag==1)
                break;
            ++x;
        }
        --y;
        vector<int>v;
        v.push_back(x);
        v.push_back(y);
        return v;
    }
};
