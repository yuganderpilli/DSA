#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={5,9,3,2,1};
    int sorted = 1;

    for(int i=0;i<4;i++){
        if(arr[i]<arr[i+1]) {sorted=0; break;}
    }

if(sorted){
    cout<<"Array is sorted";
}else{
    cout<<"Array is not sorted";
}
}