#include<iostream>
#include<queue>
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	queue<int>q;
	int i,n,num,num1;
	//Enter n
	cin>>n;
	for(i=0;i<n;i++){
	//Enter num
		cin>>num;
		if(num==1){
	//Enter num1
			cin>>num1;
			q.push(num1);
		}
		else if (num==2){
			if (!q.empty())
			q.pop();
		}
        else {
			if (!q.empty()){
			cout<<q.front()<<"\n";
		}
		else {
			cout<<"Empty!"<<"\n";
		}
		}
	}
}
