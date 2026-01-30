#include<iostream>
using namespace std;
int digSum(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}int main(){
    cout<<"Digit Sum = "<<digSum(347556)<<"\n";
    return 0;
}