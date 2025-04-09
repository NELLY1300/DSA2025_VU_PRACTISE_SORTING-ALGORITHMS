#include<iostream>
using namespace std;
void countingsort(int a[], int n){
   int i, j;
   int output[15], c[100];
   for (i = 0; i < 100; i++)
      c[i] = 0;
   for (j = 0; j < n; j++)
      ++c[a[j]];
   for (i = 1; i <= 99; i++)
      c[i] += c[i-1];
   for (j = n-1; j >= 0; j--) {
      output[c[a[j]] - 1] = a[j];
      --c[a[j]];
   }
   cout << "\nAfter sorting array elements are: ";
   for (i = 0; i <n; i++)
      cout << output[i] << " ";
}
int main(){
   int n , i;
   int a[] = {12, 32, 44, 8, 16};
   n = sizeof(a) / sizeof(a[0]);
   cout<<"Before sorting array elements are: ";
   for(int i = 0; i<n; i++){
       cout<<a[i]<<" ";
   }
   countingsort(a, n);
   cout << "\n";
   return 0;
}
