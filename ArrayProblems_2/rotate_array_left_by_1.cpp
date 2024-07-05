#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={5,4,3,2,1};
    int j=4;
    int temp = arr[0];
    for(int i=1;i<=4;i++){
        arr[i-1]=arr[i];
    }
    arr[j]=temp;
    for(int i=0;i<=4;i++){
        cout<<arr[i];
    }
}