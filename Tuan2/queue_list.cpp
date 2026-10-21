
#include <iostream>
#include <list>
using namespace std;
class QueueList{
private:
    list<int> data;
public:
    bool isEmpty(){
        return data.empty();
    }
    void enqueue(int x){
        data.push_back(x);
    }
    void dequeue(){
        if (isEmpty()){
            cout << "Queue rong!\n";
            return;
        }
        data.pop_front();
    }
    int front(){
        if (isEmpty()){
            cout << "Queue rong!\n";
            return -1;
        }
        return data.front();
    }
    void display(){
        for (int x : data){
            cout << x << " ";
        }
        cout << endl;
    }
};
int main(){
    QueueList q;
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
///////Độ phức tạp O(n)////////