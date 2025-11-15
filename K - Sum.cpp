#include<iostream>
using namespace std;
int main(){
int t,i,a,b,c;
//Enter t
cin>>t;
for(i=1;i<=t;i++)
{
//Enter a , b and c
cin>>a>>b>>c;
if(a==b+c||b==a+c||c==a+b){
cout<<"YES";
cout<<"\n";
}
else{
cout<<"NO";
cout<<"\n";
}
}
return 0;
}
