#include<iostream>
using namespace std;
int main(){
    int arr[5]={10,20,30,40,50};
    int n=5;
    int right=0;
    int left=n-1;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    while(right<=left){
        swap(arr[right],arr[left]);
        right++;
        left--;

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 1;
}