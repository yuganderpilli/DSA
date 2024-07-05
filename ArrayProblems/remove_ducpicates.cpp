#include<bits/stdc++.h>
using namespace std;
int main(){
    // int arr[]={9,9,7,7,5,5,5,5,3,2,2,1};
    int arr[]={5,5,4,3,3,2,1};

    int sorted = 1;
    int size=sizeof(arr)/sizeof(int);
    int j=0;
    for(int i=1;i<=size;i++){
        if(arr[j]!=arr[i]){
            j++;
            arr[j]=arr[i];
        }
    }
for(int i=0;i<j;i++){
    cout<<arr[i];
}

}