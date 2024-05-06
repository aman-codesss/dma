#include<iostream>
using namespace std;

int getSum(int *arr, int n) {

    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += arr[i];
    } 
    return sum;
}

int main() {

    int n;
    cin >> n;
    
    //variable size array
    int* arr = new int[n];

    //takign inputn in aray
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int ans = getSum(arr, n);

    cout << "answer is "<< ans << endl;

//case 1
    // while(true) {
    //     int i = 5;
    // }
    
//case 2
    // while(true) {
    //     int* ptr = new int;
    //     delete ptr; must use delete keyword to manually release the heap memory
    // }


//use delete []arr; for releasing array from the heap

    return 0;
}