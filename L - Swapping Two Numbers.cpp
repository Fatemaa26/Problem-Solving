#include<iostream>
using namespace std;

int main(){
int a,b;

while(cin>>a>>b)
{
if(a==0&&b==0){
 break;
 }
 	
 else{
 	 if(a>b){
 cout<<b<<" "<<a;
 cout<<"\n";
}
 else if(a<b){
 	cout<<a<<" "<<b;
 	cout<<"\n";
 }
 else if(a==b){
 	cout<<a<<" "<<b;
 	cout<<"\n";
 }
 }
}
