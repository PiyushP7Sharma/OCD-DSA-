// Q1: COUNT DISTINCT NUMBERS ON BOARD
//APPROACH : for a num n for which n%(n-1)==1 is always true there it would be a series of numbers n,n-1,n-2.....so on . these are the number which are present on the board. for n = 1 there wont be any other numbers present on board 
//TIME COMPLEXITY : O(1)
//SPACE COMPLEXITY : O(1)
class Solution {
public:
    int distinctIntegers(int n) {
         if(n==1){
            return 1;
         }
         return n-1;
    }
};

//Q2 : CHOCOLATE DISTRIBUTION PROBLEM
//APPROACH : FIRST SORT THE ARRAY THEN CHECK THE DIFFRENCE OF M ELEMENTS AND FIND THE MINIMUM OF THEM 
// TC : O(nlogn)
// SC : O(1)
class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        sort(a.begin(), a.end());
        int diff= a[m-1] - a[0];
        for(int i = 0 ; i<a.size() - m +1 ; i++){
             if((a[i+m-1]-a[i])<diff) diff=(a[i+m-1]-a[i]);
        }
        return diff;
    }
};
