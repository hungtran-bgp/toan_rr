#include<iostream>
#include<math.h>
#include<string>
using namespace std;
int m(string s) {
    if(s == "") return 9;
    char c = s[s.length()-1];
    s.pop_back();
    return min(m(s), c-'0');
} 
int main() {
    string s;
    cin >> s;
    cout<<m(s);
}