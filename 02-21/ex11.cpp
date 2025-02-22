#include <iostream>
using namespace std;

int main() {
    int salario; 
    int prestacao;
    cout << "\ninsira seu salario: ";
    cin >> salario; 
    cout << "\nqual o valor da prestaçao ? "; 
    cin >> prestacao; 
    
    if (prestacao<salario*0.3) {
        cout << "\npode conseder o emprestimo " <<endl;
    } else { 
    } 
    if (prestacao>salario*0.3) {
        cout << "\n n pode conseder o emprestimo " <<endl;
    } else { 
    }

    return 0;
}
