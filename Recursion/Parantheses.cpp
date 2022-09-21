#include<iostream>
using namespace std;
void generateparanteses (char *a, int i,int open,int close,int n) {

    //base case
    if ( i == 2*n) {
        a[i] = '\0';
        cout << a << endl;

    }

    //recursive relation
    if ( open < n) {
        a[i] = '(';
        generateparanteses(a,i+1,open+1,close,n);
    }
    if ( open > close) {
        a[i] = ')';
        generateparanteses(a,i+1,open,close+1,n);
    }

}
int main( ) {
    int n;
    cin >> n;
    char a[100];
    generateparanteses(a,0,0,0,n);
    return 0;

}