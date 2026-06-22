class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 1;
        int i=1;
        int n= nums.size();
        while(i<n){
            if(nums[i]!=nums[i-1]){
                nums[count]=nums[i];
                count ++;
            }
            i++;
        }
        return count;
    }
};