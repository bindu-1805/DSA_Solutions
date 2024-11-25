#include <iostream>
using namespace std;

bool isArmstrong(int n){
    int temp=n;
    int sumOfDig=0;
    while(n!=0){
        int dig=n%10;
        sumOfDig+=(dig*dig*dig);
        n=n/10;
    }
    return sumOfDig==temp;
}

int main() {
    int n=153;
    if(isArmstrong(n))
        cout<< "Yes" <<"\n";
    else
        cout<< "No" <<"\n";
    return 0;
}
