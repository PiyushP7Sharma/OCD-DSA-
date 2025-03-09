//Q1 : Moves Zeroes 
//APPROACH : TAKE two points one to track the zeroes and other to track the positions where to place the non zero elements 
// TC : O()
// SC : O()
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

// Q2: 
