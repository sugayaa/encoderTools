#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;
	
int main(){		
	string line;
	char octal[3];
	int number = 0;

	cin >> line;

	for(int i = 0; i < line.length(); i+=3){
		octal[i % 3] = line[i];
		octal[(i+1) % 3] = line[i+1];
		octal[(i+2) % 3] = line[i+2];

		for(int j = 0; j < 3; ++j){
			number+= (octal[2-j] - '0') * (1 << 3*j);
		}
		cout << (char) number ;
		number = 0;
	}		
	return 0;
}
