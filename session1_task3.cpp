#include <iostream>
using namespace std;
class Task{
public:
    string title;
    bool isDone = false;
    void markDone(){
        isDone = true;
    }
    void display(){
        cout << title << " - ";
        if(isDone)
            cout << "DONE";
        else
            cout << "Pending";
        cout << endl;
    }
};
int main(){
    Task t;
    t.title = "Study";
    t.display();
    t.markDone();
    t.display();
    return 0;
}