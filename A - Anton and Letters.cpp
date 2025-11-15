#include<iostream>
#include<set>
using namespace std;

int main() {
    set<char>s;
    char a;

    while(cin>>a&&a!='}'){
        if(a!='{'&&a!=','&&a!=' '){
            s.insert(a);
	    }
    }
    cout<<s.size();
}
