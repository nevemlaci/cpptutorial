#include <iostream>
#include <string>

using namespace std;

int main(){
    
    //egész, tört, karakter és karakterlánc adattípusú véltozók deklarálása(létrehozása)
    int egesz=3;
    float tort=4.3;
    char karakter='s';
    string szoveg="asd";

    //változók kiíratása enln="endline" , sor vége
    cout<<egesz<<endl<<tort<<endl<<karakter<<endl<<szoveg<<endl;

    //bekérésre használt változó
    int x;
    //cin = console input
    cin>>x;
    cout<<"A bekert szam: "<<x<<endl;

    return 0;

}