//Printing increasing(1 to n) and decreasing(n to 1) number using recursion

#include <iostream>
using namespace std;
//increasing number without back track
void printing1_to_N(int n,int i){
    if(i == n + 1){
        return;
    }
    cout << i << " ";
    
    printing1_to_N(n,i + 1);
    
}

//increasing number using back track
void print_1_to_N_backtrack(int n) {
    if( n == 0){
        return;
    }
    
    print_1_to_N_backtrack( n-1);
    cout << n << " ";
}


//decreasing number without back track
void printN_to_1(int n){
    if( n == 0){
        return;
    }
    cout << n << " ";
    printN_to_1(n-1);
}

//decreasing number using back track
void printing_N_to_1_backtrack(int n, int i){
    if(i == n + 1){
        return;
    }
    printing_N_to_1_backtrack(n,i + 1); 
    cout << i << " ";
}



int main() {
	int n;
	cin >> n;
	int i = 1; 
	//printing1_to_N(n,i);
	//printing_N_to_1_backtrack(n,i);
	//print_1_to_N_backtrack(n);
	printN_to_1(n);
	
	return 0;
}