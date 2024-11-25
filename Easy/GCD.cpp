#include <iostream>
using namespace std;

int gcd(int a, int b){
    while(a>0 && b>0){
        if(a>b)
            a=a%b;
        else
            b=b%a;
    }
    if(a==0) return b;
    return a;
}

int gcdRec(int a, int b){
    if(b==0) return a;
    return gcdRec(b, a%b);
}

int main() {
    cout<<"Using optimised Euclid's algorithm, without Recursion "<<gcd(20,28)<<"\n";
    cout<<"Using Recursion "<<gcdRec(20,28)<<"\n";
    return 0;
}
