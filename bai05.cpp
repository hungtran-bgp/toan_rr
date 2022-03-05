#include <iostream>
using namespace std;
int arr[] = {1,2,3,5,6,7,8,9,10,5,6};
int findPosition(int l, int r, int x) {
    while (l <= r) {
        int m = (l+r)/2;
        if(x > arr[m]) l =m+1;
        else r = m-1;
    }
    return l;
}
void binayryInsertionSort() {
    for (int i = 1; i <11;i++) {
        int x = arr[i];
        int pos = findPosition(0,i-1,x);
        
        for (int k=0;k <= i-pos-1; k++ ) {
            arr[i-k] = arr[i-k-1];
        }
        arr[pos] = x;
    }
}

void print() {
    binayryInsertionSort();
    for (int i =0 ;i<11;i++) {
        cout<<arr[i] <<" ";
    }
}
int main() {
    print();
    return 0;
}