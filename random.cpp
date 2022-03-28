#include<iostream>
#include<math.h>
using namespace std;
int main() {
    long long unsigned x=4,x0 = 45;
    int a = 10, b=5;
    long long unsigned m = pow(2,32) -2;
    long long count=0;
    while (x0 != x) {
        x0 = (10*x0 + 5) % m;
        count++;
    }
    cout<<count;
    
}