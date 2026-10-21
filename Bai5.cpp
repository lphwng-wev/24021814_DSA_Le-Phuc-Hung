#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Nhap n:" << endl;
    cin >> n;
    double A[n];
    double tong=0;
    cout << "Nhap day so:" << endl;
    for (int i=0; i<n; i++){
        cin >> A[i];
        tong = tong + A[i];
    }   /////////Do phuc tap O(n)
    double TBinh = tong/n;  //////Do phuc tap O(1)
    cout << "Cac gia tri lon hon hoac bang gia tri trung binh:" << endl;
    for (int i=0; i<n; i++){
        if (A[i]>=TBinh){
            cout << A[i] << " ";
        }   ////////Do phuc tap O(n)
    }
    return 0;
}
/////////memory va time: O(n)
