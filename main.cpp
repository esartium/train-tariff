#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    setlocale (LC_ALL, "rus");
    void exit(int const status);
    int A, B, C, D;
    try {
        cout <<"введите стоимость тарифа в месяц"<< "\n";
        cin >> A;
        cout <<"введите количество трафика, получаемое за А денег(то есть стандартный размер тарифа Кости)"<< "\n";
        cin >> B;
        cout <<"введите стоимость тарифа в случае превышения трафика"<< "\n";
        cin >> C;
        cout <<"введите количество трафика, который собирается потратить Костя"<< "\n";
        cin >> D;
        
        if ((A > 100)||(A < 1)||(B > 100)||(B < 1)||(C > 100)||(C < 1)||(D > 100)||(D < 1))
        throw 1;
    }
    catch (int i) 
    {
        if (i==1) {
            cout <<"неверный формат входных данных"<< "\n";
            exit(EXIT_FAILURE);
        }
    }
    
    if (D <= B) {
        cout << "За" << D << "МБ он заплатит " << A << " денег в месяц" << "\n";
    }
    else {
        if (D > B) {
            cout << "За " << B << " МБ он заплатит " << C*(D-B) + A << " денег в месяц" << "\n";
        }
    }
    
    cin.get();
}