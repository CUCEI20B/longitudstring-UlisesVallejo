#include <iostream>

using namespace std;

int main() {
    string cadena;
    //cin >> cadena lee hasta el primer espacio o enter
    getline(cin, cadena);//lee hasta el primer enter
    cout << cadena.size() << endl;

    return 0;
}