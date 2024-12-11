// Maximum Row Sum and Maximum Col Sum in a 2D array
#include <iostream>
#include <climits>
using namespace std;

int getMaxRowSum(int mat[][3], int rows, int cols){
    int maxRowSum=INT_MIN;
    for(int i=0;i<rows;i++){
         int rowSumI = 0;
        for(int j=0;j<cols;j++){
            rowSumI+=mat[i][j];
        }
        maxRowSum = max(maxRowSum, rowSumI);
    }
    
    return maxRowSum;
}

int getMaxColSum(int mat[][3], int rows, int cols){
    int maxColSum=INT_MIN;
    for(int j=0;j<cols;j++){
         int colSumJ = 0;
        for(int i=0;i<rows;i++){
            colSumJ+=mat[i][j];
        }
        maxColSum = max(maxColSum, colSumJ);
    }
    
    return maxColSum;
}

int main() {
    // Write C++ code here
    int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int rows=3;
    int cols=3;
    cout<<getMaxRowSum(mat,rows,cols)<<"\n";
    cout<<getMaxColSum(mat,rows,cols);
    return 0;
}
