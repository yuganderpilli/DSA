#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,4,3};
    int sizes = sizeof(arr)/sizeof(arr[1]);
    int idx=-1;
    for(int i=sizes-2;i>=0;i--)
        {if(arr[i]<arr[i+1]){
            idx=i;
            break;
        }}

    for(int i=sizes-1;i>0;i--){
        if(arr[idx]<arr[i]){
            swap(arr[i],arr[idx]);
            break;
        }
    }
reverse(arr+idx+1,arr+sizes);

    for(int i=0;i<sizes;i++){
        cout<<arr[i];
    }


}


    

