
#include <iostream>
using namespace std;
class QueueLinkedList{
private:
    struct Node{
        int data;
        Node* next;
        Node(int x){
            data = x;
            next = nullptr;
        }
    };
    Node* frontNode;
    Node* rearNode;
public:
    QueueLinkedList(){
        frontNode = nullptr;
        rearNode = nullptr;
    }
    bool isEmpty(){
        return frontNode == nullptr;
    }
    void enqueue(int x){
        Node* newNode = new Node(x);
        if (isEmpty()){
            frontNode = rearNode = newNode;
        } else{
            rearNode->next = newNode;
            rearNode = newNode;
        }
    }
    void dequeue(){
        if (isEmpty()){
            cout << "Queue rong!\n";
            return;
        }
        Node* temp = frontNode;
        frontNode = frontNode->next;
        delete temp;
        if (frontNode == nullptr){
            rearNode = nullptr;
        }
    }
    int front(){
        if (isEmpty()){
            cout << "Queue rong!\n";
            return -1;
        }
        return frontNode->data;
    }
    void display(){
        Node* current = frontNode;
        while (current != nullptr){
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
    ~QueueLinkedList(){
        while (!isEmpty()){
            dequeue();
        }
    }
};
int main(){
    QueueLinkedList q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout << "Queue: ";
    q.display();
    cout << "Front = " << q.front() << endl;
    q.dequeue();
    cout << "Sau khi dequeue: ";
    q.display();
    return 0;
}
/////Độ phức tạp O(n)///////////