#include<bits/stdc++.h>
using namespace std;
int main(){
 int arr[] = {2,3,5,6};
 int brr[] = {2,2,4,4,8};
int sizea=sizeof(arr)/sizeof(arr[0]);
int sizeb=sizeof(brr)/sizeof(brr[0]);
 int i=0;
 int j=0;
int  count=0;
while(i<sizea && j <sizeb){
    if(arr[i]>brr[j]){
            count+=sizeb-j-1;
            j++;    
    }else if(arr[i]<=brr[j]) {i++;}
}
cout<<count;
}