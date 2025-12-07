#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    bool isprime=true;
    for(int i=2;i<=n;i++) if(n%i==0) isprime=false;
    if(isprime) cout<<"Prime"<<endl;
    else cout<<"Not Prime"<<endl;
}