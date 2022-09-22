//To print pattern using recursion
#include<iostream>
using namespace std;

void print(int j){
	
	//base case
	if(j == 0){
		return;
	}

	cout << "*" << "	";

	//recursive relation
	print(j-1);
}


void pattern(int N,int i) {

	//base case
	if(N == 0){
		return;
	}
	print(i);
	cout << endl;

	//recursive relation

	pattern(N-1,i+1);

}


int main() {
	int N;
	cin >> N;
	pattern(N,1);
	return 0;
}