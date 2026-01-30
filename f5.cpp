#include<iostream>
using namespace std;
int largeDig(int a,int b,int c){
    if(a>=b && a>=c){
        return a;
    }
    else if(b>=c){
        return b;
    }
    else{
        return c;
    }
}
int main(){
    cout<<largeDig(5,6,7)<<" is the largest number.\n";
    return 0;
}