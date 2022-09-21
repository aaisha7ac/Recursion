//Given a wall of 4*N size where 4 is heigt and N is the length of the wall.Then tell the ways to arrange the brickd of size (1*4) or (4*1)
#include<iostream>
using namespace std;
int ways(int n) {
    
    //base case
    if(n <= 3) {
        return 1;
    }

    //recursion relation
    return ways(n-1) + ways(n-4);
}

int main ( ) {
    int n;
    cout << "Value of n is:" << endl;
    cin >> n;
    cout << ways(n) << endl;
    return 0;


}