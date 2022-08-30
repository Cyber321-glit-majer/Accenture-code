#include <bits/stdc++.h> 
using namespace std; 


void rearrangeArray(int arr[], int n) 
{ 
  
sort(arr, arr + n); 

int tempArr[n];  

  
int ArrIndex = 0; 

  
for (int i = 0, j = n - 1; i <= n / 2 || j > n / 2; 
  i++, j--) { 
  tempArr[ArrIndex] = arr[i]; 
  ArrIndex++; 
  tempArr[ArrIndex] = arr[j]; 
  ArrIndex++; 
} 

for (int i = 0; i < n; i++) 
  arr[i] = tempArr[i]; 
} 

int main() 
{ 
int arr[] = { 5,2,3,4,6,5,-2 }; 
int n = sizeof(arr) / sizeof(arr[0]); 
rearrangeArray(arr, n); 

for (int i = 0; i < n; i++) 
  cout << arr[i] << " "; 

return 0; 
}
