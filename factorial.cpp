#include<iostream>
using namespace std;
void factorial(int n){
  int fact=1;
  for(int i=1;i<=n;i++){
    fact*=i;
  }
  cout<<"Factorial of "<<n<<" = "<<fact<<endl;
}
int main(){
    factorial(2);
    factorial(3);
    factorial(4);
    factorial(5);
    return 0;
}