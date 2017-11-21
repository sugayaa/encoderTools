#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;
	
int main(){		
	string cifrada;
	
	getline(cin,cifrada);

	for(int i = 1;i < 26; ++i){
		string cifra = cifrada;
		for(int j = 0; j < cifra.length(); ++j){
			if(cifra[j] != 32){
				cifra[j] -= 65;
				cifra[j] += i;
				cifra[j] %= 26;
				cifra[j] += 65;
			}
			cout << cifra[j];
		}
		cout << endl;
	}	
	return 0;
}
