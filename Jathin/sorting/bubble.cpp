#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={21,30,37,22,26,2,120,57,69};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    for(int i=0;i<size;i++)cout<<arr[i]<<" ";
    cout<<endl;
    }

    cout<<"-----------------------"<<endl;
for(int i=0;i<size;i++)cout<<arr[i]<<" ";

}

