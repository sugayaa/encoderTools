#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;
	
int main(){		
	string ent;
	cin >> ent;
	for(int j = 0 ; j < 26; ++j){
		for(int i = 0; i < ent.length(); ++i)
			ent[i] = ent[i] - 1;
		cout <<"i = "<< j+1 <<" : "<< ent << endl;
	}
	return 0;
}