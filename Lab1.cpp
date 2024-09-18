#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main(){
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    float a;
    cout << "temperatura ";
    cin >> a;
    if(a < 0) {
        cout << "holodno";
    } else if (a >= 30) {
        cout << "jarko";
    }
    else {
        cout << "pomirno";
    }
}
