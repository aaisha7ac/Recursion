//To find the first index of given key using recursion

#include<iostream>
using namespace std;
int firstindex(int *a,int N,int i,int key) {

	//base case
    if(i == N) {
        return -1;
    }
    
    if(a[i] == key){
        return i;
    }

    //recursive function
    return firstindex(a,N,i+1,key);
   
}
int main() {

	int N;
    cout << "Enter the value of N:" << endl;
	cin >> N;

	int a[100];

    cout << "Enter the elements of array:"<< endl;
	for(int i = 0; i < N; i++) {
		cin >> a[i];
	}

    for(int i = 0; i < N; i++) {
		cout << a[i] << " ";
	}
    cout << endl;

	int key;
    cout << "Enter the value of key:" << endl;
	cin >> key;

	cout << firstindex(a,N,0,key);
    return 0;
}