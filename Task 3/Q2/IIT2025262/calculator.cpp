#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int sum=a+b;
    int diff=a-b;
    int prod=a*b;
    float div=a/b;
    cout<<"Enter s-sum, d-diff,p-prod,d-div";
    string s;
    cin>>s;
    if(s=="s")
        cout<<sum;
    if(s=="d")
        cout<<diff;
    if(s=="p")
        cout<<prod;
    if(s=="d")
        cout<<div;
}