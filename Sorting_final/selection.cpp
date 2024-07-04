#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={7,4,3,5,76,3,7,7,4,234,537,75,3,343,53,6,8,6,22,3,23,23};
    int size = sizeof(arr)/sizeof(int);
cout<<size<<endl;
for(int i=0;i<size;i++){
    int min =i;
    for(int j=i;j<size;j++){
        if(arr[i]>arr[j]) 
    {
        min =j;
    }
    }
swap(arr[i],arr[min]);
}
 for(int i=0;i<size;i++){
    cout<<arr[i]<<",";
}
}