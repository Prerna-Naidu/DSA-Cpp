#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=2;i<=n;i++){
        bool isPrime=true;
        for(int x=2;x*x<=i;x++){
            if(i%x==0){
                isPrime=false;
                break;
            }  
        }
        if(isPrime){
            cout<<i<<endl;
        }
    }
    return 0;
}