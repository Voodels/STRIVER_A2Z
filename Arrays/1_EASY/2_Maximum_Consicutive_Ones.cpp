class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0;
        int cnt2 = 0;
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i]==1){
                cnt++;
                cnt2 = max(cnt,cnt2);
            }if(nums[i]==0){
                cnt = 0;
                cnt2 = max(cnt,cnt2);
            }
        }
        return cnt2;
    }
};
