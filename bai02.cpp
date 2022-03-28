#include<iostream>
using namespace std;

int arr[] = {10,1,2,5,6,7,4,3,8,9};
int copysearch(int find) {
    int l =0, r = 9;
    while (r > l)
   {
        int mid1 = l + (r - l)/3;
        int mid2 = mid1 + (r - l)/3;
 
        if (arr[mid1] > find) r = mid1;
        else if (arr[mid2] < find) l = mid2 +1;
        else {
            l = mid1;
            r = mid2;
        }
   }
   if (find == arr[r]) {
       return r;
   }
   return -1;
}
int main() {
    int find;
    cin>>find;
    cout << copysearch(find);
}