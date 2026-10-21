
#include <iostream>
using namespace std;
class StackLinkedList{
private:
    struct Node{
        int data;
        Node* next;
        Node(int x){
            data = x;
            next = nullptr;
        }
    };
    Node* topNode;
public:
    StackLinkedList(){
        topNode = nullptr;
    }
    bool isEmpty(){
        return topNode == nullptr;
    }
    void push(int x){
        Node* newNode = new Node(x);
        newNode->next = topNode;
        topNode = newNode;
    }
    void pop(){
        if (isEmpty()){
            cout << "Stack rong!\n";
            return;
        }
        Node* temp = topNode;
        topNode = topNode->next;
        delete temp;
    }
    int top(){
        if (isEmpty()){
            cout << "Stack rong!\n";
            return -1;
        }
        return topNode->data;
    }
    void display(){
        Node* current = topNode;
        while (current != nullptr){
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
    ~StackLinkedList(){
        while (!isEmpty()){
            pop();
        }
    }
};
int main(){
    StackLinkedList s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "Stack: ";
    s.display();
    cout << "Top = " << s.top() << endl;
    s.pop();
    cout << "Sau khi pop: ";
    s.display();
    return 0;
}
////Độ phức tạp O(n)//////