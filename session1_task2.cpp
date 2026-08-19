#include <iostream>
using namespace std;
char tasks[5][50];
void markTaskDone(int index){
    cout << "Task is DONE!" << endl;
}
int main(){
    for(int i = 0; i < 5; i++){
        cout << "Enter task " << i + 1 << ": ";
        cin >> tasks[i];
    }
    int n;
    cout << "Enter task number to complete: ";
    cin >> n;
    markTaskDone(n - 1);
    cout << "\nUpdated Tasks:\n";
    for(int i = 0; i < 5; i++){
        cout << i + 1 << ". " << tasks[i];
        if(i == n - 1)
            cout << " - DONE";
        cout << endl;
    }
    return 0;
}