#include <iostream>
using namespace std;
string tasks[5];
int count = 0;
int main(){

    cout << "Enter 5 tasks:\n";
    for(int i = 0; i < 5; i++){
        cout << "Task " << i + 1 << ": ";
        getline(cin, tasks[i]);
    }
    cout << "\nAll Tasks:\n";
    for(int i = 0; i < 5; i++){
        cout << i + 1 << ". " << tasks[i] << endl;
    }
    return 0;
}