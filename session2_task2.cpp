#include<iostream>
using namespace std;
class playlist{
    public:
    string name;
    string createdon;
    bool ispublie;
    void display(){
        if(ispublic=true)
        ispublic=false;
        else{
            ispublic=true;
        }
        voiddisplay(){
        cout<<name<<"\n"<<createdon<<"\n"<<ispublic<<endl;

        }

    }
};
int main(){
    playlist p;
    p.name="songs";
    p.createdon="21 august 2026";
    p.ispublic=true;
    p.display();
}