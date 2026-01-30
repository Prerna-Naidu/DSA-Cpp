#include<iostream>
#include<climits>
using namespace std;
int maxProductSubarray(int *arr,int n){
    int prefix=1, suffix=1;
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        if(prefix==0) prefix=1;
        if(suffix==0) suffix=1;
        prefix*=arr[i];
        suffix*=arr[n-i-1];
        ans=max(ans,max(prefix,suffix));        
    }
    return ans;
}
int main(){
    int arr[4]={-9,-3,0,-4};
    int n=sizeof(arr)/sizeof(int);
    cout<<maxProductSubarray(arr,n);
    return 0;
}