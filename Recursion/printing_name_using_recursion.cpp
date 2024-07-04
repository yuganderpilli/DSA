#include<bits/stdc++.h>
using namespace std;

void printName(int k,int n){
    int count =k;
    if(count < n)
    {
        count++;
        cout<<count<<" "<<"Name"<<endl;
        printName(count,n);
    }
}


void altername(int n){
    
}

int main(){
    printName(0,3125);
}
