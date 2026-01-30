#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key){
    int start=0,end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
        return mid;
    } else if(arr[mid]>key){
        end=mid-1;
    } else{
        start=mid+1;
    }
}
return -1;
}
int main(){
    int arr[8]={1,3,5,7,9,11,13,15};
    int n=sizeof(arr)/sizeof(int);
    cout<< binarySearch(arr,n,1)<<"\n";
    return 0;
}