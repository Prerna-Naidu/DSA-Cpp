#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int d1=0;
    int d2=1;
    cout<<d1<<" "<<d2<<" "; 
    for(int i=2;i<n;i++){
        int d3=d1+d2;
        cout<<d3<<" ";
        d1=d2;
        d2=d3;
    }  
    return 0;
}