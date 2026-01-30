#include<iostream>
#include<climits>
using namespace std;
int maxSubarrayProduct(int *arr,int n){
    int maxNow=arr[0];
    int minNow=arr[0];
    int ans=maxNow;
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int tempMaxNow=max(curr,max(maxNow*curr,minNow*curr));
        minNow=min(curr,min(maxNow*curr,minNow*curr));
        maxNow=tempMaxNow;
        ans=max(maxNow,ans);
    }
    return ans;
}
int main(){
    int arr[4]={2,3,-2,4};
    int n=sizeof(arr)/sizeof(int);
    cout<<maxSubarrayProduct(arr,n);
    return 0;
}