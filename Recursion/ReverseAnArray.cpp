#include<bits/stdc++.h>
using namespace std;
void sample(int (&array)[5],int l, int r){
    if(l<=r){
        swap(array[l],array[r]);
        sample(array,(l+1),(r-1));
    }
    else return;
}
int main(){
    int arr[5]={1,2,3,4,5};
    sample(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}