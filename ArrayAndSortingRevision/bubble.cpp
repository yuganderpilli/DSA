#include<bits/stdc++.h>
using namespace std;
int main(){
        int arr[]={1,3,45,76,7864,323,43,46,75,8,455,42,53,53};
        int size = sizeof(arr)/sizeof(arr[0]);
        for(int i=0;i<size;i++){
            for(int j=0;j<(size-i-1);j++){
                if(arr[j+1]>arr[j]){
                    swap(arr[j+1],arr[j]);
                }
            }
        }

for(int i=0;i<size;i++) cout<<arr[i]<<" ";

}