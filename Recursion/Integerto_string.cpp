//To covert the given integer to string
#include<iostream>
using namespace std;

string a[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

void integertostring( int n) {
    //base case
    if( n == 0){
        return;
    }


    //recursive relation
    int digit = n % 10;
    
    //to print to the reverse order
    cout << a[digit] << " ";
    
    integertostring(n/10);

    //to print in the given format
    cout << a[digit] << " ";

}

int main() {
    int n;
    cout << "Enter the value of n:" << endl;
    cin >> n;
    integertostring(n);
    return 0;
}