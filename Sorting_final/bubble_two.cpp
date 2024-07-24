#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={7,5,3,45,6,23,42,45,46,75,23};
    int size = sizeof(arr)/sizeof(int);
    cout<<"selection sort problem"<<endl;
    for(int i=0;i<size;i++){
        
        for(int j=0;j<(size-i-1);j++){
            if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
        }
    }

for(int i=0;i<size;i++){ - 
    cout<<arr[i]<<" ";
}
}