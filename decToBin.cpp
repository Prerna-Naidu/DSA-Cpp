#include<iostream>
using namespace std;
void decimal(int num){
int n=1;
int bin=0;
while(num>0){
    int k=num%2;
    bin+=k*n;
    n*=10;
    num/=2;
}
cout<<"Binary number is "<<bin<<endl;
}
int main(){
    decimal(18);
    return 0;
}