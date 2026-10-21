#include <iostream>
using namespace std;
int giaiThua(int n){
    if(n==0 || n==1){
        return 1;
    }
    else return n*(n-1);
}   //////Do phuc tap O(1)
int main(){
     int n;
    cout << "Nhap n:";
    cin >> n;
    cout << n << "! = " << giaiThua(n);
    return 0;
}
//////Memory va time: O(1)