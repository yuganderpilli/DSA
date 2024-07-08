#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={0,0,1,1,0,0,1,1,1,1,0,0,0,};
    int size = sizeof(arr)/sizeof(arr[0]);
    int count=0;
    int k;
    for(int i=0;i<size;i++){
        if(arr[i]==1){
            count++;
            k=count;
        }else{
            
            count=0;
        }
    }
cout<<k;
}