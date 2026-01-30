#include<iostream>
#include<climits>
using namespace std;

void trappingRainwater(int *height,int n){
    int waterTrap=0;
    int leftMax[20000];
    leftMax[0]=height[0];
    int rightMax[20000];
    rightMax[n-1]=height[n-1];
    for(int i=1;i<n;i++){
        leftMax[i]=max(height[i-1],leftMax[i-1]);
    }
    for(int i=n-2;i>=0;i--){
        rightMax[i]=max(height[i+1],rightMax[i+1]);
    }
    for(int i=0;i<n;i++){
        int currWater = min(leftMax[i],rightMax[i])-height[i];
        if(currWater>0){
            waterTrap+=currWater;
        }
    }    
    cout<<"Water Trapped = "<<waterTrap;
}

int main(){
    int height[7]={4,2,0,6,3,2,5};
    int n=sizeof(height)/sizeof(int);
    trappingRainwater(height,n);
    return 0;
}