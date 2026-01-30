#include<iostream>
#include<climits>
using namespace std;
void buySellStock(int *arr,int n){
    int bestBuy[100000];
    bestBuy[0]=INT_MAX;
    for(int i=1;i<n;i++){
        bestBuy[i]=min(arr[i-1],bestBuy[i-1]);
    }
    int maxProfit=0;
    for(int i=0;i<n;i++){
        maxProfit=max((arr[i]-bestBuy[i]),maxProfit);
    } 
    cout<<"Max Profit = "<<maxProfit<<"\n";   
}
int main(){
    int arr[6]={7,1,5,3,6,4};
    int n=sizeof(arr)/sizeof(int);
    buySellStock(arr,n);
    return 0;
}