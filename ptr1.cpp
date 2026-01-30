#include<iostream>
using namespace std;
int main(){
    int x=4, y=8;
    int *ptr1=&x;
    int *ptr2=&y;
    ptr2=ptr1;
    cout<<ptr2<<" = "<<ptr1<<"\n";
    return 0;
}