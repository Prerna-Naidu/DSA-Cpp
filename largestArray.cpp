#include<iostream>
using namespace std;
int main(){
    int arr[8]={5,3,9,10,17,15,58,99};
    int max=arr[0];
    for(int i=1;i<8;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Largest value in the array is "<<max<<"\n";
    return 0;
}