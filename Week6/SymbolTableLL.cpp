#include <iostream>
#include <string>
using namespace std;
struct Node{
    string name;
    string type;
    Node* next;
};
void insert(Node* &head, string name, string type){
    Node* p = new Node;
    p->name = name;
    p->type = type;
    p->next = head;
    head = p;
}
void search(Node* head, string name){
    Node* p = head;
    while (p != NULL){
        if (p->name == name){
            cout << "Tim thay: "
                 << p->name << " - "
                 << p->type << endl;
            return;
        }
        p = p->next;
    }
    cout << "Khong tim thay!\n";
}
void display(Node* head){
    Node* p = head;
    cout << "Name\tType\n";
    while (p != NULL) {
        cout << p->name << "\t"
             << p->type << endl;
        p = p->next;
    }
}
void remove(Node* &head, string name){
    Node* p = head;
    Node* prev = NULL;
    while (p != NULL){
        if (p->name == name){
            if (prev == NULL){
                head = p->next;
            } else{
                prev->next = p->next;
            }
            delete p;
            return;
        }
        prev = p;
        p = p->next;
    }
}
int main(){
    Node* head = NULL;
    insert(head, "age", "int");
    insert(head, "score", "float");
    insert(head, "grade", "char");
    cout << "Symbol Table:\n";
    display(head);
    cout << "\nTim kiem age:\n";
    search(head, "age");
    cout << "\nXoa score:\n";
    remove(head, "score");
    display(head);
    return 0;
}