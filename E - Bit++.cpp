#include<iostream>
using namespace std;

int main(){
	int n,count=0;
	string a;
	//Enter n
	cin>>n ;
	for(int i=1;i<=n;i++)
	{
	cin>>a;
    if(a=="X++"||a=="++X"){
    	count++;	
    }
    else if(a=="X--"||a=="--X"){
    	count--;
    }   	
    }
cout<<count;
    return 0 ;
	
}
