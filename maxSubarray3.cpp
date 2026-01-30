#include<iostream>
#include<climits>
using namespace std;
void kadanesAlgo(int *arr,int n){
    int maxSum=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        maxSum=max(maxSum,sum);
        if(sum<0){
            sum=0;
        }
    }
    cout<<"Maximum subarray sum = "<<maxSum<<"\n";
}
int main(){
    int arr[6]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    kadanesAlgo(arr,n);
    return 0;
}