#include<iostream>
using namespace std;

int main(){
	int i,n,num[4],temp;
	string res;

	for(i=0;i<4;i++){
	//Enter num
		cin>>num[i];
	}
for(i=0;i<4;i++){
for(int j=i+1;j<4;j++){
if(num[i]>num[j]){
			temp=num[i];
			num[i]=num[j];
			num[j]=temp;
		}		
}
}
for(i=0;i<4;i++){
	if(num[0]+num[1]==num[2]+num[3]){
	res="Yes";
	}
	else if(num[0]+num[2]==num[1]+num[3]){
	res="Yes";	
	}
	else if(num[0]+num[3]==num[2]+num[1]){
		res="Yes";
	}
	else if(num[0]+num[1]+num[2]==num[3])
{
	res="Yes";
}
	else{
		res="No";
	}
}
cout<<res;
	}
