#include<bits/stdc++.h>
using namespace std;

 int fib(int arr[],int length,int n)
 {
   if (n < arr[0])
            return arr[0];
        if (n > arr[length - 1])
            return arr[length - 1];

        int start = 0, end = length - 1;
        while (start <= end) {
            int mid = (start + end) / 2;

            if (n == arr[mid]) {
                return arr[mid];
            } else if (n < arr[mid]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

      
        if ((arr[start] - n) < (n- arr[end]))
            return arr[start];
        return arr[end];
    }
 int main()
 {
     int n;
     cin>>n;
     int x;
     cin>>x;
      int a[n];
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
      }
    cout<<fib(a,n,x);
     
      return 0;
     
 }
