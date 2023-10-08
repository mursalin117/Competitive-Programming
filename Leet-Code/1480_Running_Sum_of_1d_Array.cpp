class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        // vector<int>sum;
        // sum.push_back(nums[0]);
        // for (int i = 1; i < nums.size(); i++) {
        //     int temp = 0;
        //     for (int j = 0; j <=i; j++) {
        //         temp += nums[j];
        //     }
        //     sum.push_back(temp);
        // }
        // return sum;

        for (int i = 1; i < nums.size(); i++) {
            nums[i] += nums[i-1];
        }
        return nums;
    }
};