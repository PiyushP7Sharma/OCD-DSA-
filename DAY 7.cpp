// Q2: MINIMUM POSITIVE SUM SUBARRAY 
//APPROACH: sliding window approach
//TC: O(N*N)
//SC: O(1)
class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int min = INT_MAX;

    for (int j = l; j <= r; j++) {
        int sum = 0;
        for (int i = 0; i < j; i++)
            sum += nums[i];

        min = (sum > 0) ? (sum > min) ? min : sum : min;

        int temp = sum;
        for (int i = j; i < nums.size(); i++) {
            temp += nums[i] - nums[i - j];
            min = (temp > 0) ? (temp > min) ? min : temp : min;
        }
    }
    return (min != INT_MAX) ? min : -1;
    }
};
