#include<iostream>
#include<string>
#include<string.h>
using namespace std;

int ones(string s)
{
    if (s == "")
        return 0;
    char c = s[s.length() - 1];
    s.pop_back();
    return c == '1' ? ones(s)+1 : ones(s);
}
int main()
{
    string s;
    cin >> s;
    cout << ones(s);
}