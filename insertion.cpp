#include<iostream>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>curr){
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev+1]=curr;
    }
    printArray(arr,n);
}
int main(){
    int arr[10]={5,4,1,6,7,8,9,10,3,2};
    int n=sizeof(arr)/sizeof(int);
    insertionSort(arr,n);
    return 0;
}