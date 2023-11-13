#include <iostream>
using namespace std;
class charac{
protected:
    int attackpow;
public:
    void setattackpow(int a){
    attackpow=a;
    }
};
class Ninja: public charac{
public:
    void attack()
    {
        cout << "Chop " << attackpow << endl;

    }};
class Mon: public charac{
public:
    void attack()
    {
        cout << "Ahhhh! " << attackpow << endl;

    }};
int main(){
    Ninja n;
    Mon m;
    charac *char1 = &n;
    charac *char2 = &m;
    char1->setattackpow(22);
    char2->setattackpow(8);
    n.attack();
    m.attack();

}

