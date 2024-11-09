#include <iostream>

using namespace std;

void voidFunc()
{
    cout << "from void function" << endl;
};

int main() {
    int i; // variable definition or default initialization
    int iVar = 0; // copy initialization
    int oVar(100); // direct initialisation
    int jVar{100}; // uniform intialization - TODO: learn more about it
    int uVar{}; // value initialisation

    bool aVar{true};
    char bVar{'c'};
    float cVar{3.14};
    int dVar{10};
    voidFunc();

    cout << "int i => " << i << endl;
    cout << "int iVar => " << iVar << endl;
    cout << "oVar(100) => " << oVar << endl;
    cout << "jVar{100} => " << jVar << endl;
    cout << "uVar{} => " << uVar << endl;

    cout << "bool aVar{true} => " << aVar << endl;
    cout << "bool bVar{'c'} => " << bVar << endl;
    cout << "bool cVar{3.14} => " << cVar << endl;
    cout << "bool dVar{10} => " << dVar << endl;
    voidFunc();
    cout << "bool voidFunc() => " << endl;

    return 0;
}