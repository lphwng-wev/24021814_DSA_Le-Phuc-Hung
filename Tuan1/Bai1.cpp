#include <iostream>
using namespace std;
int main (){
    int n;
    cout << "Nhap vao n: ";
    cin >> n;
    int A[n];
    int tong =0;
    for (int i=0; i<n; i++){    ///////Do phuc tap O(n)
        cin >> A[i];
        tong += A[i];
    }
    cout << "Tong cua day so la: " << tong;
    return 0;
}
///////Memory và time: O(n)
