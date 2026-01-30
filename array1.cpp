#include<iostream>
#include<algorithm>
using namespace std;
bool occurrence(int *nums,int n){
    sort(nums,nums+n);
    for(int i=1;i<n;i++){
        if(nums[i-1]==nums[i]){
            return true;
        }
    }
    return false;
}
int main(){
    int nums[5]={1,2,3,4,4};
    int n=sizeof(nums)/sizeof(int);
    cout<<occurrence(nums,n)<<"\n";
    return 0;
}