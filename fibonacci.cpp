//To find the fibonacci of a given number
#include<iostream>
using namespace std;
int fibo(int n) {
    //base case
    if(n < 2) {
        return 1;
    }
    //recursive relation
    return fibo(n - 1) + fibo(n - 2);
}
int main( ) {
    int n; 
    cout << "Enter the value of n:" << endl;
    cin >> n;
    cout << fibo(n) << endl;
    return 0;
}