#include <iostream>

using namespace std;

struct Data {
    int dia, mes, ano;

    void mostrar() {
        cout <<dia<<"/"<<mes<<"/"<<ano<<"\n"<<endl;;
    }
};

int main() {
    Data data1;
    cin >> data1.dia >> data1.mes >> data1.ano;

    data1.mostrar();

    cout << endl;
    return 0;
}
