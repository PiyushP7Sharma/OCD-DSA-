DAY 13
Q2: FIND MIN IN ROTATED SORTED ARRAY
class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] <= nums[right]) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }

        return nums[left];        
    }
};
Q3: SEARCH IN ROTATED SORTED ARRAY
    class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int high= nums.size()-1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if (nums[mid]==target) return mid;
            if(nums[low]<=nums[mid]){
                if(nums[low]<=target && target<=nums[mid]){high=mid-1;}
                else low= mid+1;
            }
            
            else {
                if(nums[mid]<=target && target<=nums[high]){low = mid+1;}
                else high=mid-1;
            }
        }
        return -1;
    }
};

