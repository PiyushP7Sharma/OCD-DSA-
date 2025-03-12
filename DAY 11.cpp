//Q1 pascals triangle 
//approach : added previous 2 elements in new vector full of 1 and then push_back it
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        for(int i=0;i<numRows;i++){
            vector<int> row(i+1,1);
            for(int j=1;j<i;j++){
                row[j]=result[i-1][j-1]+result[i-1][j];
            }
            result.push_back(row);
        }
        return result;
    }
};

//Q2 :  rotate image 
//approach : first transpose and swap columns 
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        for(int i=0;i<row; i++){
            for(int j=0; j<=i;j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int i=0;i<row;i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};

