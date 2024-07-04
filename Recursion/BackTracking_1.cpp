#include<iostream>
using namespace std;
void print(int k){
    if(k<1) return;
    else{
        print(k-1);
        cout<<k<<" ";
    }
}

int main(){
print(100);

}