#include <iostream>
using namespace std;
void bubbleSort(int a[], int n){
    for(int i=0; i<n-1; i++){
        for (int j=0; j<n-1-i; j++){
            if (a[j] > a[j + 1]){
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
int main(){
    int a[] = {5, 3, 8, 2, 4};
    int n = 5;
    bubbleSort(a, n);
    for (int i=0; i<n; i++)
        cout << a[i] << " ";
    return 0;
}
