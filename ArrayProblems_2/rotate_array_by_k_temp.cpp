#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int size = 6;
    int k = 3;
    int temp[k]={0};
    for(int i=0;i<k;i++){
        temp[i]=arr[i];
    }
for(int i=k;i<size;i++){
    arr[i-k]=arr[i];
}
for(int i=k;i<size;i++){
    arr[i]=temp[i-k];
}

for(int i=0;i<size;i++){
    cout<<arr[i];
}

}