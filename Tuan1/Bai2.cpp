#include <iostream>
using namespace std;
void sapXep(int a[], int n){
        for (int i=0; i<n-1; i++){
            for (int j = i + 1; j < n; j++){
                if(a[i] > a[j]){
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
                }
            }
        }
    }   /////Do phuc tap O(n^2)
int main(){
    int n;
    cout << "Nhap n:" << endl;
    cin >> n;
    int A[n];
    cout << "Nhap day so:";
    for (int i=0; i<n; i++){
        cin >> A[i];
    }   //////Do phuc tap O(n)
    sapXep(A, n);
    cout << "Day da sap xep tang dan:";
    for (int i=0; i<n; i++){
        cout << A[i] << " ";
    }
    return 0;
}
////////Memory O(n)   Time O(n^2)
