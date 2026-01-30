#include<iostream>
using namespace std;
int Polynomial(int a,int b){
    return a*a+b*b+2*a*b;
}
int main(){
    cout<<"a^2+b^2+2*ab= "<<Polynomial(2,3)<<endl;
    return 0;
}