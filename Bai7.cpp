#include <iostream>
using namespace std;
int tinhTong(int A[][100], int n, int m){
    int tong=0;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            tong += A[i][j];
        }
    }
    return tong;
}
///////Memory O(1)    Time O(n*m)

void xoaDong(int A[][100], int &n, int m, int i){
    for (int k=i-1; k<n-1; k++){
        for (int j=0; j<m; j++){
            A[k][j] = A[k + 1][j];
        }
    }
    n--;
}
///////Memory O(1)    Time O(n*m)

int main(){
    int n, m;
    cout << "Nhap n:";
    cin >> n;
    cout << "Nhap m:";
    cin >> m;
    int A[100][100];
    cout << "Nhap mang:\n";
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> A[i][j];
        }
    }
    cout << "Tong cac phan tu:" << tinhTong(A, n, m);
    int i;
    cout << "\nDong can xoa:";
    cin >> i;
    xoaDong(A, n, m, i);
    cout << "Mang sau khi xoa:\n";
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
////////Memory O(n*m)     Time O(n*m)