#include<iostream>
using namespace std;
int main(){
    int arr[5]={388,456,321,5566,879};
    int n=5;
    int maxans=INT16_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>maxans){
            maxans=arr[i];
        }
    }
    cout<<maxans<<endl;
    return 0;
    }