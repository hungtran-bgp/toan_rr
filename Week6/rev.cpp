#include<iostream>
#include<string.h>
#include<string>
using namespace std;
string rev(string s) {
    if (s == "") return s;
    char c = s[s.length()-1];
    s.pop_back();
    return c+rev(s);
}
int main() {
    string s;
    cin>>s;
    cout<<rev(s);
}