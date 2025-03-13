//Q1: Binary search
//Approach: split the array and find the target 
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n= nums.size();
        int low=0;
        int high= n-1;
        while (low<=high){
            int mid= (low + high)/2;
            if(nums[mid]==target) return mid;
            else if (target > nums[mid])low=mid+1;
            else high = mid-1;
        }
        return -1;
    }
};

//Q3:  search insert position 
// Approach : Calculating the lower bound index 
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n= nums.size();
        int low= 0;
        int high = n-1;
        int ans=n;
        while (low<= high){
            int mid =(low + high)/2;
            if(nums[mid]>=target){
                ans= mid;
                high= mid-1;
            }
            else {
                low= mid+1;
            }
        }
        return ans;
    }
};
