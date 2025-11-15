#include<iostream>
#include<deque>
using namespace std;

int main(){
	deque<int>dq1;
    deque<int>dq2;
	deque<int>dq3;
	int n,i,num,y,x,a=0,b=0,c=0;;
	//enter n
	cin>>n;
	for(i=1;i<=n;i++){
		//enter num bet. 1 , 2 and 3
     	cin>>num;
		if(num==1){
		dq1.push_front(i);
	
		a++;
		}
		else if(num==2){
		dq2.push_front(i);
		
		b++;
		}
		else if(num==3){
		dq3.push_front(i);
		
		c++;
		}
	}
y=min(b,c);
	x=min(a,y);
	cout<<x<<"\n";
	for(i=0;i<x;i++){
		cout<<dq1[i]<<" "<<dq2[i]<<" "<<dq3[i]<<"\n";
	}
}
