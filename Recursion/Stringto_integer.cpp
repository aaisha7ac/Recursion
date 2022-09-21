//To convert string to integer
#include<iostream>
#include<cstring>
using namespace std;

int stringtointeger(string s, int n) {

    //base case
    if( n == 0){
        return 0;
    }

    //recursive relation
    int digit = s[n-1]-'0';
    return stringtointeger(s,n-1)*10 + digit;
}
int main( ){
    string s;
    cin >> s;
    cout<<s<<endl;

    //to calculate the size of string
    int n = s.size();
    cout << "Size of string is:" << n << endl;
    
    int ans = stringtointeger(s,n);
    cout << ans << endl;
    return 0;
}