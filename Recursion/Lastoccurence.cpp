//To find the last index of given key using recursion

#include<iostream>
using namespace std;

int firstindex(int *a,int N,int i,int M) {

	//base case
    if(i == 0) {
        return -1;
    }
    
    if(a[i] == M){
        return i;
    }

    //recursive function
    return firstindex(a,N,i-1,M);
   
}

int main() {

	int N;
	cin >> N;

	int a[100];

	for(int i = 0; i < N; i++) {
		cin >> a[i];
	}

	int M;
	cin >> M;

	cout << firstindex(a,N,N-1,M);
    return 0;
}