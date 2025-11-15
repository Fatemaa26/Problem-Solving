#include<iostream>
#include<deque>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	deque<int>dq;
	int i,n,num,num1;
	//Enter n
	cin>>n;
	for(i=0;i<n;i++){
	//Enter num
		cin>>num;
		if(num==1){
	//Enter num1
			cin>>num1;
			dq.push_front(num1);
		}
		else if (num==2){
			if (!dq.empty())
			dq.pop_front();
		}
        else {
			if (!dq.empty()){
			cout<<dq.front()<<"\n";
		}
		else {
			cout<<"Empty!"<<"\n";
		}
		}
	}
}
