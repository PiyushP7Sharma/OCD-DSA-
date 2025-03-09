//Q1 : Moves Zeroes 
//APPROACH : TAKE two points one to track the zeroes and other to track the positions where to place the non zero elements 
// TC : O(N)
// SC : O(1)
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        for(int j=0; j<nums.size(); j++){
            if(nums[j]!=0){
                nums[i++]=nums[j];
            }
        }
        while (i<nums.size()){
            nums[i++]=0;
        }
    }
};

// Q2: Rotate Array
// APPROACH : rotating array using reverse of array 
//TC : O(N)
//SC : O(1)
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
        }
    
};
