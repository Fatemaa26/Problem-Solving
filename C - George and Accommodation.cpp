#include<iostream>
using namespace std;

int main(){
	int n,Pi,Qi,numoffreerooms=0;
	//Enter n
	cin>>n;
	for(int i=1;i<=n;i++ )
	{//Enter Pi and Qi
	cin>>Pi>>Qi;
    if(Qi-Pi>=2){
    	numoffreerooms++;	
    }
    else{
    	continue;
    	cout<<"\n"; 
    }
} cout<<numoffreerooms;
    return 0;
}
