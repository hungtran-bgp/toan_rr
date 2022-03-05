#include <iostream>
using namespace std;
int arr[] = {7,4,3,8,1,5,4,2};
int findPosition(int l, int r, int x) {
    int count =1;
    while (l <= r) {
        int m = (l+r)/2;
        count++;
        if(x > arr[m]) l =m+1;
        else r = m-1;
    }
    cout<<count<<endl;
    return l;
}
void binayryInsertionSort() {
    for (int i = 1; i <8;i++) {
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
    for (int i =0 ;i<8;i++) {
        cout<<arr[i] <<" ";
    }
}
int main() {
    print();
    return 0;
}