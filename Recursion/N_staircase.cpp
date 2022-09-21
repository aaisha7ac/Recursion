//To calculate the number of ways to reach the certain stair
#include<iostream>
using namespace std;

int ways(int n) {

    //base case
    if (n == 0){
        return 1;
    }
    if (n<0) {
        return 0;
    }

    //recursive relation
    return ways(n-1) + ways(n-2) + ways(n-3);
}
int main( ) {
    int n;
    cin >> n;
    cout << ways(n) << endl;
    return 0;
}