// Diagonal Sum in a 2D Array
#include <iostream>
using namespace std;

//O(n^2)
int diagonalSum1(int mat[][3], int n){
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)
                sum+=mat[i][j];
            else if(j==n-i-1)
                sum+=mat[i][j];
        }
    }
    return sum;
}

//O(n)
int diagonalSum2(int mat[][3], int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=mat[i][i];
        if(i!=n-i-1)
            sum+=mat[i][n-i-1];
    }
    return sum;
}


int main() {
    int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int n=3;
    cout<<"O(n^2)"<<" : "<<diagonalSum1(mat,n)<<"\n";
    cout<<"O(n)"<<" : "<<diagonalSum2(mat,n);
    return 0;
}
