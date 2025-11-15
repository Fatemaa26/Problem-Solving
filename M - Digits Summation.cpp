#include<iostream>
using namespace std;

int main(){
long long N,M;
long long X,Y,sum;
//Enter N,M 
cin>>N>>M;
X=N%10;
Y=M%10;
//calculate sum
sum=X+Y;
cout<<sum<<endl;
return 0;
}
