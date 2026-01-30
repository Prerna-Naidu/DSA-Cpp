#include<iostream>
using namespace std;
int factorial(int n){
    int fct=1;
    for(int i=1;i<=n;i++){
        fct*=i;
    }
    return fct;
}
void binomial(int n,int r){
    int v1 = factorial(n);
    int v2 = factorial(r);
    int v3 = factorial(n-r);
    cout<<(v1)/(v2*v3)<<endl;
}
int main(){
    binomial(4,2);
    binomial(8,2);
    binomial(7,3);
    return 0;
}