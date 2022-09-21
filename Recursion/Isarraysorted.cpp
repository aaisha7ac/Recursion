//To check the given array is sorted or not
#include<iostream>
using namespace std;
bool sorted(int arr[],int n) {

    //base case
    if(n == 1){
        return true;
    }

    //recursive relation
    bool restarray = sorted(arr+1,n-1);
    return(arr[0]<arr[1] && restarray);

}
int main( ) {
    int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i <= n; i++){
		cin >> arr[i];
	}

    bool ans = sorted(arr,n);
    if(ans == true){
        cout << "true" << endl;
        
    }
    else{
        cout<<"false" <<endl;
    }
    return 0;
}