#include<iostream>
using namespace std;
int main(){
int i=0;
int j=1;
cout<<i<<" "<<j<<" ";
for(int k=0;k<20;k++){
 int temp =j;
 j=j+i;
 i=temp;
 cout<<j<< " ";
}

}