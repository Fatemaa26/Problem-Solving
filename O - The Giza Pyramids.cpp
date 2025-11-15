#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
for(int i=1;i<=n;i++){

     for(int c=1;c <= n-i ; c++){
     	cout<<" ";
     }
for(int j=1;j<=i*2-1;j++){

cout<<"*";
//cout<<"\n";
}
cout<<endl;
}

    return 0;
}
