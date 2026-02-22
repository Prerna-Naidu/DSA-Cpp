#include<iostream>
using namespace std;
bool StaircaseSearch(int mat[][4],int n, int m, int key){       //O(n+m)

    int i=0,j=m-1;
    
    while(i<n && j>=0){
    if(mat[i][j] == key){
    cout<<"Key Found at ("<<i<<","<<j<<")\n";
    return true;
    } else if(mat[i][j] > key){
        //left col--
        j--;
    } else{
        //down row++
        i++;
    }
    }

    cout<<"Key not found :(\n";
    return false;
}
int main(){
    int matrix[4][4]= { {10,20,30,40}, 
                       {15,25,35,45},
                       {27,29,37,48},
                       {32,33,39,50} };
    StaircaseSearch(matrix, 4, 4, 90);                  
    return 0;
}