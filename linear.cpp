#include<iostream>
using namespace std;
int linearSearch(int *arr,int n,int key){
for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"Element "<<key<<" found at location "<<i<<"\n";
            return i;
        } 
    }
    cout<<"Element "<<key<<" does not exist in this array...\n";
    return -1;
}
int main(){
    int arr[8]={2,4,6,8,10,12,14,16};
    int n=sizeof(arr)/sizeof(int);
    linearSearch(arr,n,60);
    return 0;
}