#include<bits/stdc++.h>
using namespace std;
int binary(int num){
    int dec=0;
    int n=0;
    while(num>0){
        int k=num%10;
        dec +=k*pow(2,n);
        n++;
        num/=10;
    }
    return dec;
}
int main(){
    cout<<"Decimal is "<<binary(111101)<<endl;
    return 0;
}