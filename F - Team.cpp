#include<iostream>
using namespace std;

int main(){
	int n,a,b,c,result=0;
	//Enter n
	cin>>n;
	for(int i=1;i<=n;i++ )
	{//Enter a , b and c
	cin>>a>>b>>c;
    if(a+b+c>=2){
    	result++;	
    }
    else{
    	continue;
    	cout<<"\n"; 
    }
} cout<<result;
    return 0;
}
