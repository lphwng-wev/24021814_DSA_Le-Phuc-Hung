#include <iostream>
using namespace std;
void rutGon(int &a, int &b){
    int x = a;
    int y = b;
     while (y != 0){
        int t = x%y;
        x = y;
        y = t;
    }
    a = a/x;
    b = b/x;
}       ///////Do phuc tap O(log (min(a,b)))
int main(){
    int a, b;
    cout << "Nhap a:";
    cin >> a;
    cout << "Nhap b:";
    cin >> b;
    rutGon(a, b);
    cout << "Phan so rut gon:" << a << "/" << b;
    return 0;
}
