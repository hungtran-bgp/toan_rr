#include <iostream>
#include<vector>
#include<string>
using namespace std;
void setBrac(int n, int level,  vector<string> B)
{
    if(n==0) return;
    vector <string> v;
    for(int i=0;i<B.size();i++)
    {
        if(B[i].length()==level*2) v.push_back(B[i]);
    }
    for(int i=0;i<v.size();i++)
    {   
        string kieu1 = '('+v[i]+')';
        string kieu2 = v[i]+"()";
        string kieu3 = "()"+v[i];
        B.push_back(kieu1);
        if(kieu1!=kieu2&&kieu2!=kieu3) B.push_back(kieu2);
        if(kieu3!=kieu1&&kieu2!=kieu3) B.push_back(kieu3);
        if(kieu2==kieu3&&kieu1!=kieu2) B.push_back(kieu2);
    }
    setBrac(n-2,level+1,B);
}
int main()
{
    vector <string> B;
    B.push_back("");
    int n;
    cin>>n;
    setBrac(n,0,B);
    for(int i=1;i<B.size();i++)
    cout<<B[i]<<endl;
}