#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[5]={5,9,3,2,1};
int max = arr[0];
for(int i=1;i<5;i++){
    if(arr[i]>max) max=arr[i];
}
cout<<max;


}