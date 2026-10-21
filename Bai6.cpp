#include <iostream>
using namespace std;
void xoa(int A[], int &n, int k){
    for (int i=k - 1; i<n - 1; i++){
        A[i] = A[i + 1];
    }
    n--;
}
////////Do phuc tap tot nhat la O(1)
////////Do phuc tap trung binh va te nhat la O(N)
////////Memory = O(1)

void chen(int A[], int &n, int y, int m){
    for (int i=n; i>=m; i--){
        A[i] = A[i - 1];
    }
    A[m - 1] = y;
    n++;
}
////////Do phuc tap tot nhat la O(1)
////////Do phuc tap trung binh va te nhat la O(N)
////////Memory = O(1)

int main(){
    int n;
    cout << "Nhap n:";
    cin >> n;
    int A[100];
    cout << "Nhap day:";
    for (int i=0; i<n; i++){
        cin >> A[i];
    }
    int k;
    cout << "Vi tri k:";
    cin >> k;
    xoa(A, n, k);
    cout << "Day sau khi xoa:";
    for (int i=0; i<n; i++){
        cout << A[i] << " ";
    }
    int y, m;
    cout << "\nNhap y:";
    cin >> y;
    cout << "Vi tri m:";
    cin >> m;
    chen(A, n, y, m);
    cout << "Day sau khi chen:";
    for (int i=0; i<n; i++){
        cout << A[i] << " ";
    }
    return 0;
}