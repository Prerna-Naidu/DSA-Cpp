#include<iostream>
using namespace std;
void diagonalSum(int matrix[][4], int n){
    int diagSum=0;
    
    //0(N^2)
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         if(i==j){
    //             diagSum += matrix[i][j];
    //         } else if(j==n-i-1){
    //             diagSum += matrix[i][j];
    //         }
    //     }
    // }

    //0(N)
    for(int i=0;i<n;i++){
        diagSum += matrix[i][i]; //pd

        if(i != n-i-1){
            diagSum += matrix[i][n-i-1]; //sd
        }
    }
    cout<<"Diagonal Sum: "<<diagSum<<"\n";
}
int main(){
    int matrix[4][4]={ {1,2,3,4},
                       {5,6,7,8},
                       {9,10,11,12},
                       {13,14,15,16} };
    diagonalSum(matrix,4);
    return 0;                   
}