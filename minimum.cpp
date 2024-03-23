#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[5]={60,200,309,409,50};
    int minans=INT16_MAX;
    int n=5;
    for(int i=0;i<n;i++){
        if(arr[i]<minans){
            minans=arr[i];
           
        }
     
    }
      cout<<minans<<endl;

    return minans;
}