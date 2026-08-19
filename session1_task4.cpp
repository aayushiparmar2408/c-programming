#include <iostream>
using namespace std;
class Task{
public:
    string title;
    bool done;
    void markDone()
    {
        done = true;
    }
};
class TaskList{
public:
    Task t[3];
    int count = 0;
    void addTask(string name){
        t[count].title = name;
        t[count].done = false;
        count++;
    }
    void markTaskDone(int index){
        t[index].markDone();
    }
    void showTasks(){
        for(int i = 0; i < count; i++){
            cout << i + 1 << ". " << t[i].title;
            if(t[i].done)
                cout << " - DONE";
            else
                cout << " - Pending";
            cout << endl;
        }
    }
};
int main(){
    TaskList list;
    list.addTask("Study");
    list.addTask("Coding");
    list.addTask("Gym");
    list.markTaskDone(1);
    list.showTasks();
    return 0;
}