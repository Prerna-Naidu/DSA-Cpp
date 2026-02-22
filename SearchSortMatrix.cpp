#include<iostream>
using namespace std;
void SearchSortedMatrix(int matrix[][4], int m, int n, int key){
    for(int i=0; i<m; i++){
        int start=0, end=n-1;
        while(start<=end){
        int mid=(start+end)/2;
        if(matrix[i][mid] == key){
            cout<<"Row = "<<i<<" Column = "<<mid<<"\n";
            return;
        } else if(key > matrix[i][mid]){
            start=mid+1;
        } else{
            end=mid-1;
        }
        }
    }
    cout<<"Not Found\n";
}
int main(){
    int matrix[4][4]={ {10,20,30,40}, 
                       {15,25,35,45},
                       {27,29,37,48},
                       {32,33,39,50} };
    SearchSortedMatrix(matrix,4,4,33);
    return 0;
}