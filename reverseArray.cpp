#include<iostream>
using namespace std;
void printArray(int arr2[],int n){
    cout<<"Reversed Array : ";
    for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }
}

int main(){
    int arr1[5]={11,22,33,44,55};
    int n=sizeof(arr1)/sizeof(int);
    int arr2[n];
    for(int i=0;i<n;i++){
        arr2[i]=arr1[n-1-i];
    }
    printArray(arr2,n);
    return 0;
}