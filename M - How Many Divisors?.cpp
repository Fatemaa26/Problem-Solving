#include<iostream>
using namespace std;

int main(){
	long long i,a,b,c,sum=0;
	//Enter a , b and c
	cin>>a>>b>>c;
	for(i=a;i<=b;i++)
	{
	   if(c%i==0)
	{
		sum++;
	}
	}
	cout<<sum<<endl;
return 0;	
}
