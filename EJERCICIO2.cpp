#include <iostream>

using namespace std;

int main(){

    int ingreso;

    cout << "coloque su ingreso anual: " << endl;
    cin >> ingreso;

    if(ingreso <= 10000){
        cout << "porcentaje de impuetso 0%" << endl;    
    } else if(ingreso == 10001 && 20000){
        cout << "porcentaje de impuesto 10%" << endl;
    } else if(ingreso >= 20000){
        cout << "porcentaje de impuesto 20%" << endl;
    }else{
        cout << "porcentaje de impuesto no valida" << endl;
    }
    return 0;
}
