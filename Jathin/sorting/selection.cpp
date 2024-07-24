#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={21,30,37,22,26,2,120,57,69};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        int min = i;
        for(int j=i;j<size;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        swap(arr[i],arr[min]);
for(int i=0;i<size;i++)cout<<arr[i]<<" ";
    cout<<endl;
    }
for(int i=0;i<size;i++)cout<<arr[i]<<" ";

}

