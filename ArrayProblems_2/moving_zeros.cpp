#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={5,5,0,0,1,3,0};
    int size = sizeof(arr)/sizeof(int);
    int i=0;
    for(int j=0;j<size;j++){
        if(arr[j]!=0){
            swap(arr[i],arr[j]);
            i++;
        }
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;        


    }

for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}

}