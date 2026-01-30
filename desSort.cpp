#include<iostream>
#include<climits>
using namespace std;
void printArray(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
void bubbleSort(int *arr,int n){
    for(int i=0;i<n-1;i++){
        bool isSwap=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap=true;
            }
        }
        if(!isSwap){
            return;
        }
    }
    printArray(arr,n);
}
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int maxIdx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[maxIdx]){
                maxIdx=j;
            }
        }    
        swap(arr[i],arr[maxIdx]);
    }
    printArray(arr,n);
}
void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]<curr){
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev+1]=curr;
    }
    printArray(arr,n);
}
void countSort(int arr[], int n){
    int freq[100]={0};
    int minVal=INT_MAX, maxVal=INT_MIN; 
    for(int i=0;i<n;i++){
        minVal=min(minVal,arr[i]);
        maxVal=max(maxVal,arr[i]);
        freq[arr[i]] ++;
    }
    for(int i=maxVal, j=0; i>=minVal; i++){
        while(freq[i]>0){
            arr[j++]=i;
            freq[i]--;
        }
    }
    printArray(arr,n);
}
int main(){
    int arr[]={3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
    int n=sizeof(arr)/sizeof(int);
    bubbleSort(arr,n);
    selectionSort(arr,n);
    // insertionSort(arr,n);
    // countSort(arr,n);
    return 0;
}