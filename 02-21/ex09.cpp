#include <iostream>
using namespace std;

int main() {
    int num; 
    
    cout << "Digite um numero: ";
    cin >> num;

    if (num % 3 == 0) {
        cout << "O numero " << num << " eh divisivel por 3." << endl;
    } else {
        cout << "O numero " << num << " nao eh divisivel por 3." << endl;
    }

    return 0;
}
