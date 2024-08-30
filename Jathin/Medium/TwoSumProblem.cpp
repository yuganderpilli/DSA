#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={2,6,5,8,11};
    int k=14;
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==k){
                cout<<arr[i]<<" "<<arr[j];
                break;
            }
        }
    }

}