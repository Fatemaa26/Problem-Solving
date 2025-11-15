#include<iostream>
using namespace std;

int main(){
	int n,a,b,c;
	//Enter n
	cin>>n;
	for(int i=1;i<=n;i++ )
	{//Enter a , b and c
	cin>>a>>b>>c;
    if(a+b>=10||b+c>=10||a+c>=10){
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
