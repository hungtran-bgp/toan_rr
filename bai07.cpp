#include <iostream>
using namespace std;
int count_Binary=0;
int count_NonBinary=0;
int arr[]={7, 4, 3, 8, 1, 5, 4, 2};
void Binary_InsertionSort()
{
    for (int j = 1; j < 8; j++)
    {
        int l = 0;
        int r = j - 1;   
        while ( l <= r)
        {
            count_Binary ++;
            int m =  (l + r) / 2;
            if (arr[j] < arr[m]) {r = m - 1;}
            else {l = m + 1;}
            count_Binary++;
                
        } 
        count_Binary ++;
        int x = arr[j];
        for (int k = 0; k < j - l; k++)
            arr[j - k] = arr[j - k - 1];
        arr [l] = x;
    }
}
void insertionSort(int n, int arr[])
{
    for (int j = 1; j < n; j++)
    {
      int i=0;
      while (arr[j]>arr[i])
      {
        i++;
        count_NonBinary ++;
      }
      count_NonBinary ++;
        int m = arr[j];
        for (int k = 0; k < j - i; k++)
            arr[j - k] = arr[j - k - 1];
        arr[i] = m;
    }
}
void print() {
    for (int i = 0; i<8;i++) 
    cout<<arr[i]<<" ";
}
int main()
{
    // Vì phần dịch vị trí của 2 cách và chạy vòng for j là giống nhau nên sẽ không tính những phép so sánh trong 2 vòng for này
    // 2 cách làm chỉ khác nhau phần tìm vị trí cần chèn
   /*  int test3[]={1,2,3,4,5,6,7,8};
    int test4[]={1,2,3,4,5,6,7,8};
     */
    Binary_InsertionSort();
    print();
    cout<<endl;
    cout<<count_Binary;
}