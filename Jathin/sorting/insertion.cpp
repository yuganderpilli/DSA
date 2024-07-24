#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={21,30,37,22,26,2,120,57,69};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<size;i++){
        int j = i-1;
        int key =arr[i];
        while(j>=0 && key < arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
        
        
            }

    cout<<"-----------------------"<<endl;
for(int i=0;i<size;i++)cout<<arr[i]<<" ";

}

