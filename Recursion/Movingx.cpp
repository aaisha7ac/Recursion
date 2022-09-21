//Move all x to the end of the string
#include<iostream>
using namespace std;

void moveatends(string str,int i,int length){

	//base case
	if(i >= length){
		return;
	}
	char current = str[i];

	//recursive case
	if (current != 'x'){
		cout << current;
	}

	//function call
	moveatends(str,i+1,length);

	//recursive case
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