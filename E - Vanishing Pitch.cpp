#include<iostream>
using namespace std;

#include<iostream>
using namespace std;

int main(){

int V,T,S,D;
int D1,D2;
//Enter V , T , S and D
cin>>V>>T>>S>>D;
D1=V*T;
D2=V*S;
if(D1>D||D>D2){
cout<<"Yes"<<endl;
}
else{
cout<<"No";
}
return 0;
}
