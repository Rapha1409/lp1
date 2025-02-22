#include <iostream> 
using namespace std; 

int main() {  
    int num = 0; 
    int num2 = 0; 
    int soma;  
cout<<"digite um numero  "; 
cin >> num;  
cout<<"digite outro numero ";
cin >> num2; 
    soma = num + num2; 
    

    if (soma > 20 ) { 
    cout<<"eh maior q 20\n"; 
    
        cout << soma + 8; 
    } else if (soma <= 20) {
        cout << soma - 5;  
    }

    return 0; 
}
