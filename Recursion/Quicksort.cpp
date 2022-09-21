#include<iostream>
using namespace std;
int Parition(int *a,int s,int e){
	int i = s - 1;
	for( int j = s; j < e; j++){
		if(a[j] < a[e]){
			i++;
			swap(a[i],a[j]);
		}

	}
	swap(a[i+1],a[e]);
	return i + 1;


}

void Quicksort(int *a,int s,int e) {
	if(s>=e){
		return;
	}

	int index = Parition(a,s,e);
	Quicksort(a,s,index-1);
	Quicksort(a,index+1,e);
}




int main() {
    int n;
    cout << "Enter the value of n:"<<endl;
    cin >> n;
	int a[100];
    for(int i = 0; i < n; i++) {
		cin >> a[i];
	} 
    cout << "Before sorting:" << endl;

	for(int i = 0; i < n; i++) {
		cout << a[i] <<" ";   
	} 
    cout <<endl;
	

	Quicksort(a,0,n-1);
    cout << "After sorting:" << endl;

	for(int i = 0; i < n; i++) {
		cout << a[i] <<" ";   
	} 
	
	return 0;
}