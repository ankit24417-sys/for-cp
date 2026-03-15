#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    b-=2*a;
    if(b<0){
    cout<<"No"<<endl;
    continue;
    }
   if(b*3==c)cout<<"Yes"<<endl;
   else cout<<"No"<<endl;
    }
}