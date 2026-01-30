#include<iostream>
using namespace std;
void EvenOdd(int n){
    if(n%2==0){
        cout<<n<<" is an even number\n";
    }else{
        cout<<n<<" is a odd number\n";
    }
} 
int main(){
    EvenOdd(28);
    return 0;
}