/*#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n,m,i;
	vector<int>v;
	//enter n and m
	cin>>n>>m; //5 4
	for(i=0;i<n;i++){
		cin>>v[i]; 
	}
		// 1 2 3 4 5
	for(i=0;i<m;i++){ // 4 rotations
	 v.push_back(v.front());
	 v.erase(v.begin())	;//2 3 4 5 1 ..3 4 5 1 2 ..4 5 1 2 3 ..5 1 2 3 4 
	}
}
for(i=0;i<n;i++){
	cout<<v[i]<<" ";
}
} 
*/
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,m,i,num;
    vector<int>v;
    // enter n and m
    cin >>n>>m; // 5 4
    for(i=0;i<n;i++){
        cin>>num; // 1 2 3 4 5
        v.push_back(num);
    }
    for(i=0;i<m;i++){ 
        v.push_back(v.front());// 1 2 3 4 5 .. 2 3 4 5 1 ..3 4 5 1 2 ..
        v.erase(v.begin()); 
    }
    for(i=0;i<n;i++) {
        cout<<v[i]<<" ";
    }
}
