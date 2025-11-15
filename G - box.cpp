#include<iostream>
using namespace std;

int main() {
int N,A,B;
int Answer;
//Enter N , A and B
cin>>N>>A>>B;
//Calculate number of balls the box contains now
Answer= (N-A)+B;
cout<<Answer;
return 0;
}
