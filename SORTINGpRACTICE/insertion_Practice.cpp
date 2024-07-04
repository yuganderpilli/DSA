#include<bits/stdc++.h>
using namespace std;
int main(){
int n=5;
int arr[]={5,5,3,2,1};
for(int i=1;i<n;i++){
    int key = arr[i];
    int j=i-1;
    while(j>=0 && arr[j]> key){
        arr[j+1]=arr[j];
        j=j-1;
    }
    arr[j+1]=key;
}

for(int i=0;i<n;i++){
    cout<<arr[i];
}
}