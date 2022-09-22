//To print the nth triangle recursion
#include<iostream>
using namespace std;

int nthtriangle(int N) {

	//base case
	if(N == 0) {
		return 0;
	}


	//recursive relation
	return N + nthtriangle(N-1);
}

int main() {
	int N;
	cin >> N;
	cout << nthtriangle(N) << endl;
	return 0;
}