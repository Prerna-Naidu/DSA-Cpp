#include<iostream>
using namespace std;
void prime(int n){
for(int i=2;i<=n;i++){
    bool isPrime=true;

    for(int j=2;j*j<=i;j++){
        if(i%j==0){
            isPrime=false;
            break;
        }
    }

    if(isPrime==true){
        cout<<i<<" ";
    }
}
cout<<endl;
}
int main(){
    prime(3);
    prime(2);
    prime(8);
    prime(6);
    prime(1);
    return 0;
}