// you will get an element N and an array with N-1 element find the missing one  

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4};
    int missing =-1;
    int find =3;
    for(int i=1;i<=5;i++){
        if(arr[i-1]!=i){
            missing =i;
            break;
        }

    }
cout<<missing;
}