#include<bits/stdc++.h>
using namespace std;
int main(){
        int arr[]={5,5,3,4,2,1};
int size=sizeof(arr)/sizeof(int);
int j=0;
        for(int i=1;i<size;i++){
            if(arr[j]!=arr[i]){
                j++;
                arr[j]=arr[i];
            }
    for(int i=0;i<size;i++) cout<<arr[i]<<" ";
    cout<<endl;
        }
for(int i=0;i<size;i++) cout<<arr[i]<<" ";
}