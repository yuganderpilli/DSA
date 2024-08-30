#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int m = sizeof(arr)/sizeof(arr[1]);
    int n = sizeof(arr[0])/sizeof(arr[1][1]);
    int top=0;
    int left=0;
    int right = n-1;
    int bottom = m-1;
    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
        cout<<arr[top][i]<<" ";
    }
    top++;
    for(int i=top;i<=bottom;i++){
        cout<<arr[i][right]<<" ";

    }
    right--;
while(top<=bottom){
        for(int i=right;i>=left;i--){
        cout<<arr[bottom][i]<<" ";
    }
    bottom--;
}
while(left<=right){
        for(int i=bottom;i>=top;i--){
        cout<<arr[i][left]<<" ";
    }
    left++;
}
    }
}