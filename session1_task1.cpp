#include <iostream>
using namespace std;
string tasks[5];
int main(){
    for (int i=0;i<5;i++){
        cout<<"enter task"<<i+1<<":";
        cin>>tasks[i];
    }
    cout<<"\nmytasks:\n";
    for (int i=0;i<5;i++){
        cout<<i+1<<"."<<tasks[i]<<endl;
    }
    return 0;
}