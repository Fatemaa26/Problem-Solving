#include<iostream>
using namespace std;

int main(){
long long n;
long long i,a[1000];
a[0]=0;
a[1]=1;
//Enter n
cin>>n;
for(i=2;i<n;i++){
a[i]=a[i-1]+a[i-2];
}
for(i=0;i<n;i++){
cout<<a[i]<<" ";
}		
return 0;
}
