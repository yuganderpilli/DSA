#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,3,5,7,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int q = 18746;
    int r=q;
     if(size<q){
          r = q%size;
     }
    cout<<r<<endl;
    
    
    while(r>0){
        int temp = arr[0];
        for(int i=1;i<5;i++){
                arr[i-1]=arr[i];
        }
    arr[4]=temp;
    r--;
    cout<<r<<"     ";
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
    }

}