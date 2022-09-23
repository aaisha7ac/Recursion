//First diving single array into two array, sort them and again merging the two sorted array into one array

#include<iostream>
using namespace std;

//function to sort the array and merge the sorted array
void merge(int a[],int b[],int c[],int s,int e) {
    int mid = (s+e)/2;
    int i = s;
    int j = mid +1;
    int k = s;

    while(i <= mid and j <= e) {
        if(b[i] <= c[j]) {
            a[k] = b[i];
            i++;
            k++;
        }
        else{
            a[k] = c[j];
            j++;
            k++;
        }

    }

    while(i <= mid) {
        a[k] = b[i];
        i++;
        k++;
    }

     while(j <= e) {
        a[k] = c[j];
        j++;
        k++;
    }
}

void mergesort(int a[],int s,int e) {

    //base case
    if(s>=e) {
        return;
    }
    int mid = (s+e)/2;

    int b[100];
    int c[100];

    //diving array
    for(int i = s; i <= mid; i++) {
        b[i] = a[i];
    }

    for(int i = mid+1; i <= e; i++) {
        c[i] = a[i];
    }

    //recursive relation
    mergesort(b,s,mid);
    mergesort(c,mid+1,e);

    //calling merge function
    merge(a,b,c,s,e);
        
}

int main( ) {
    int n;
    cout << "Enter the value of N:" << endl;
    cin >> n;

    int a[100];
    for(int i = 0; i < n ; i++) {
        cin >> a[i];
    }
    
    mergesort(a,0,n-1);

    cout << "Sorted array:" << endl;
    for(int i = 0; i < n ; i++) {
        cout << a[i] << " ";
    }
    return 0;

}