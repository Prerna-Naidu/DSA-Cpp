#include<iostream>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minIdx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIdx]){
                minIdx=j;
            }
        }    
        swap(arr[i],arr[minIdx]);
    }
    printArray(arr,n);
}
int main(){
    int arr[10]={5,4,1,3,2,8,9,3,7,5};
    int n=sizeof(arr)/sizeof(int);
    selectionSort(arr,n);
    return 0;
}