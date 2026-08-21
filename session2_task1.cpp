#include<iostream>
using namespace std;
class playlist{
    public:
    string name;
    string createdon;
    bool ispublic;
    void display(){
        cout<<name<<"\n"<<createdon<<"\n"<<ispublic<<endl;
    }
};
int main(){
    playlist p;
    p.name="song";
    p.createdon="21 august 2026";
    p.ispublic= false;
    p.display();
}
