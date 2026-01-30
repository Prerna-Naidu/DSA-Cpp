#include<iostream>
using namespace std;
char NextChar(char x){
    if(x=='z'){
        return 'a';
    } else {
        return x+1;
    }
}
int main(){
    cout<<"Next Character is "<<NextChar('c')<<"\n";
    return 0;
}