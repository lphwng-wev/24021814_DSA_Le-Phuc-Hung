#include <iostream>
#include <string>
using namespace std;
struct Symbol{
    string name;
    string type;
};
Symbol a[100];
int n = 0;
void insert(string name, string type){
    a[n].name = name;
    a[n].type = type;
    n++;
}
void search(string name){
    for (int i = 0; i < n; i++){
        if (a[i].name == name){
            cout << "Tim thay: "
                 << a[i].name << " - "
                 << a[i].type << endl;
            return;
        }
    }
    cout << "Khong tim thay!\n";
}
void display(){
    cout << "Name\tType\n";
    for (int i = 0; i < n; i++){
        cout << a[i].name << "\t"
             << a[i].type << endl;
    }
}
void remove(string name){
    for (int i = 0; i < n; i++){
        if (a[i].name == name) {
            for (int j = i; j < n - 1; j++){
                a[j] = a[j + 1];
            }
            n--;
            return;
        }
    }
}
int main() {
    insert("age", "int");
    insert("score", "float");
    insert("grade", "char");
    cout << "Symbol Table:\n";
    display();
    cout << "\nTim kiem age:\n";
    search("age");
    cout << "\nXoa score:\n";
    remove("score");
    display();
    return 0;
}