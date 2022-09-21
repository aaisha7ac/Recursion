//To calculate power of a number
#include<iostream>
using namespace std;
int power(int a, int n) {

    //base case
    if (n == 0) {
        return 1;

    }

    //recursive function
    return a*power(a,n-1);
}

int main( ) {
    int a, n;
    cout << "Enter the value of a and n:" << endl;
    cout << power(a,n);
    return 0;
}