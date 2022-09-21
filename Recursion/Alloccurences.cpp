//To find the all index of given key using recursion

#include<iostream>
using namespace std;

int out[100];
int j = 0;

void alloccurences(int *a,int N,int i,int M) {
    
    //base case
    if(i == N) {
        return ;
	}

    if(a[i] == M){
        out[j] = i;
		j++;  
    }

    //recursive function
    alloccurences(a,N,i+1,M);
   
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

	alloccurences(a,N,0,M);

	for(int i = 0; i < j; i++) {
		cout << out[i] << " ";
	}

    return 0;
}