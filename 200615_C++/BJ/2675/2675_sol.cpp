#include<iostream>
#include<string>
using namespace std;

int main() {

	int total;
	cin >> total;
	string word;

	int num;
	for (int i = 0; i < total; i++) {
		cin >> num;
		cin >> word;

		for (int i = 0; i < word.length(); i++) {
			for (int j = 0; j < num; j++) {
				cout << word[i];
			}
		}
		cout << '\n';
	}

}