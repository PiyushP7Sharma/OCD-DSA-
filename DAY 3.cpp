  //DAY 3 
//Q2 NUMBER OF EQUIV DOMINO PAIRS
//APPROACH : CHECK EVERY PAIR OF DOMINO IF THEY ARE EQUIV OR NOT 
//TIME COMPLEXITY : O(N²)
//SPACE COMPLEXITY :  O(1) 
class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
       int count=0;
       for (int i = 0 ; i<dominoes.size();i++){
        for(int j=i+1; j<dominoes.size();j++){
            int a = dominoes[i][0];
            int b = dominoes[i][1];
            int c = dominoes[j][0];
            int d = dominoes[j][1];

            if ((a==c && b==d) || a==d && b==c){
                count++;
            }
        }
       }
       return count;
     }
};


//Q1: FLIPPING AN IMAGE
//APPROACH : first reverse the rows then chage the 1 to 0 and 0 to 1 
//TIME COMPLEXITY : O(N)
//SPACE COMPLEXITY: O(1)
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
      for(int i=0; i<image.size(); i++){
        reverse(image[i].begin(), image[i].end());
        for(int j=0 ; j< image.size(); j++){
            if (image[i][j]==0){
                image[i][j]=1;
            }
            else {
                image[i][j]=0;
            }
        }
      }
      return image;                              
    }
};
