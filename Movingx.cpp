//Move all x to the end of the string
#include<iostream>
using namespace std;

void moveatends(string str,int i,int length){
	if(i >= length){
		return;
	}


	char current = str[i];
	if (current != 'x'){
		cout << current;
	}

	moveatends(str,i+1,length);

	if (current == 'x') {
		cout << current;
	}
}
int main() {
	string str;
	cin >> str;
	int length = str.length();
	moveatends(str,0,length);
	return 0;
}