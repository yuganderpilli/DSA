#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={7,5,3,45,6,23,42,45,46,75,23};
    int size = sizeof(arr)/sizeof(int);
    cout<<"selection sort problem"<<endl;
    for(int i=0;i<size;i++){
        int min = i;
        for(int j=i;j<size;j++){
            if(arr[j]<arr[min]) min =j;
        }
        swap(arr[i],arr[min]);
    }

for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
}