#include <iostream>
#include "pila.h"

using namespace std;

int main(){

	Pila<int> pila;

    pila.push(10);
    pila.push(8);

    cout << pila.size() << endl;

    while (!pila.empty())
    {
        int *e = pila.top();
        if (e != nullptr) {
            cout << *e << endl;
        }

        pila.pop();
    }

    cout << pila.size() << endl;

    return 0;
}
