#include<iostream>
using namespace std;
void sor(int arr[],int n){
int zerocount=0;
int onecount=0;
for(int i=0;i<n;i++){
    if(arr[i]==0){
        zerocount++;
    }
      if(arr[i]==1){
        onecount++;
    }
}
    for(int i=0;i<zerocount;i++){
        arr[i]=0;
    }
     for(int i=zerocount;i<n;i++){
        arr[i]=1;
    }

}
int main(){
    int arr[]={0,1,0,1,0,1,1,0,1,0,0,1};
    int n=12;
    sor(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}