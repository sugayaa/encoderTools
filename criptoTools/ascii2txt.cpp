#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;
	
int main(){		
	string ent;
	int c = 0, number = 0;

	cin >> ent;

	while(c < ent.length()){
		if(ent[c] == '1'){ 
			/*for(int i = 0; i < 3; ++i)
				number += (ent[c+i] - '0') * (100 >> 10*i);*/
			number+= (ent[c++] - '0') * 100;
			number+= (ent[c++] - '0') * 10;
			number+= (ent[c++] - '0');
			cout << (char) number;
			//c+=3;
		}else{
			/*for(int i = 0; i < 2; ++i)	
				number += (ent[c+i] - '0') * (10 >> 10*i);*/
			number+= (ent[c++] - '0') * 10;
			number+= (ent[c++] - '0');
			cout << (char) number;
			//c+=2;
		}
		number = 0;
	}
	cout << endl;
	return 0;
}
