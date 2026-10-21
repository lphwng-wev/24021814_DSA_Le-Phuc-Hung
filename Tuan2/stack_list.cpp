
#include <iostream>
#include <list>
using namespace std;
class StackList{
private:
    list<int> data;
public:
    bool isEmpty(){
        return data.empty();
    }
    void push(int x){
        data.push_front(x);
    }
    void pop(){
        if (isEmpty()){
            cout << "Stack rong!\n";
            return;
        }
        data.pop_front();
    }
    int top(){
        if (isEmpty()){
            cout << "Stack rong!\n";
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
    StackList s;
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
/////Độ phức tạp O(n)///////////