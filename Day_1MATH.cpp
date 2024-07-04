#include <bits/stdc++.h>
using namespace std;

int amstrong(int k) {
    int m = k;
    int value = 0;
    while (k > 0) {
        int digit = k % 10;
        value += (digit*digit*digit);
        k /= 10;
    }
    return value;
}


int printAllDivisiors(int k){
    cout<<endl<<endl;
    
    for(int i =1; i<=(sqrt(k)); i++){
        if(k%i==0){
            cout<<i<<" ";
            if((k/i)!=i){
                    cout<<(k/i);
            }
            cout<<endl;
        }

    }
}

int checkGCD(int m,int n){
    int gcd=0;
    for(int i=1;i<=min(m,n);i++)
    {
        if(m%i==0 && n%i==0)
        gcd=i;
    }
    cout<<gcd;
}


int checkPrime(int n)
{
    for(int i=2;i*i <=n ; i++){
        if(n%i==0){
            cout<<"not prime";
            break;
        }
    }
    cout<<"prime"<<endl;
}
int main() {
    checkPrime(11);
    cout<<endl;
    int a = 1211;
    int b = a;
    cout << a << endl;

    int count = (int)(log10(a) + 1);
    cout << count << endl;

    int reverse = 0;
    while (a > 0) {
        cout << a % 10 << " ";
        reverse = reverse * 10 + (a % 10);
        a /= 10;
    }

    cout << endl << reverse;

    if (b == reverse) {
        cout << endl << "palindrome";
    } else {
        cout << endl << "Not a palindrome";
    }

    cout << endl << amstrong(153 );
    cout<<endl;
    printAllDivisiors(36);
        cout<<endl<<endl;
        checkGCD(22,33);
    return 0;

}