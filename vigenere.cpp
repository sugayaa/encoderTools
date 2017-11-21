#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;
	
int main(){		
	string ent, key;
	int k = 0;

	cout << "Digite a string que deseja criptografar por VIGENERE: ";
	cin >> ent;
	cout << "Digite a chave: ";
	cin >> key;

	for(int i = 0; i < ent.length(); ++i){
		ent[i] -= 65;
		ent[i] += (key[k++%key.length()] - 65);
		ent[i] %= 26;
		ent[i] += 65;

		cout << ent[i];
	}
	cout << endl;
	return 0;
}
