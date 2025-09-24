// Online C++ compiler to run C++ program online
/*Interface- Class that consists of unimplemented methods and forces the subclass
 to actually implement*/
#include <iostream>
#include <cstring>
using namespace std;

//Interface
class Printable{
public:
    virtual string GetClassName() = 0;
};

class Entity : public Printable {
public:
    virtual string GetName() {
        return "Entity";
    }
    string GetClassName() override {return "Entity";}
};

class Player : public Entity {
private:
    string m_name;
public:
    Player(const string& name) : m_name(name) {}
    
    string GetName() override{
        return m_name;
    }
    string GetClassName() override {return "Player";}
};
void PrintName(Entity *entity) {
   cout<< entity->GetName()<<endl;
}

void Print(Printable *pp) {
    cout<<pp-> GetClassName()<<endl;
}
int main() {
    
     Entity *e = new Entity();
    // cout<<e->GetName()<<endl;
    
     Player *p = new Player("Rajath");
    // cout<<p->GetName()<<endl;
    
    // PrintName(p);

    Print(e);
    Print(p);
    
    return 0;
}