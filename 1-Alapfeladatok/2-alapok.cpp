#include <iostream>
#include <string>

using namespace std;

int main(){
    
    //eg�sz, t�rt, karakter �s karakterl�nc adatt�pus� v�ltoz�k deklar�l�sa(l�trehoz�sa)
    int egesz=3;
    float tort=4.3;
    char karakter='s';
    string szoveg="asd";

    //v�ltoz�k ki�rat�sa enln="endline" , sor v�ge
    cout<<egesz<<endl<<tort<<endl<<karakter<<endl<<szoveg<<endl;

    //bek�r�sre haszn�lt v�ltoz�
    int x;
    //cin = console input
    cin>>x;
    cout<<"A bekert szam: "<<x<<endl;

    return 0;

}