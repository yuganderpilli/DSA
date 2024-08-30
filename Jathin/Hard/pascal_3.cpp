#include<bits/stdc++.h>
using namespace std;

int main(){
 int rows=10;

for(int j=0;j<rows;j++){
int value =1;
    for(int i=0;i<=j;i++){
    cout<<value<<" ";
    value = value * (j-i)/(i+1);
    
}

cout<<endl;
}
}