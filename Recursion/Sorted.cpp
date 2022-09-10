//To find is the given array sorted or not
#include<iostream>
using namespace std;
bool sorted(int arr[],int n) {
    if(n == 1){
        return true;
    }
    bool restarray = sorted(arr+1,n-1);
    return(arr[0]<arr[1] && restarray);

}
int main( ) {
    int arr[] = {1,5,8,9,10};
    int n = sizeof(arr)/sizeof(int);
    bool ans = sorted(arr,n);
    if(ans == true){
        cout << "Array is sorted" << endl;
        
    }
    else{
        cout<<"Array is not-sorted" <<endl;
    }
    return 0;
}