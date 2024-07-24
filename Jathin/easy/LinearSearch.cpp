#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={6,7,3,4,56,6,145,23,2,23,5,435};
    int size= sizeof(arr)/sizeof(arr[1]);
    int found=-1;
    int k = 233;
    for(int i=0;i<size;i++){
        if(arr[i]==k) found=i;
    }
    cout<<found;
}
