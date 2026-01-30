#include<iostream>
using namespace std;
int reverse(int n){
    int res=0;
    while(n>0){
        int lastDig=n%10;
        res=res*10+lastDig;
        n/=10;
    }
    return res;
}
void isPalindrome(int x){
   if(x == (reverse(x))){
    cout<<x<<" is Palindrome\n";
   }else{
    cout<<x<<" is not Palindrome\n";
   }
}
int main(){
    isPalindrome(12321);
    isPalindrome(543);
    return 0;
}