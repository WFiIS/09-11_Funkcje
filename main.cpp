#include <iostream>

using namespace std;

float P_k(float a);
float Ob_k(float a);
float O_k(float a);
float P_p(float a, float b);
float O_p(float a, float b, float c);

int main()
{
    char proces;
    int menu;

    do {
        float a, b, c;
        cout << "Co chcesz policzyc?" << endl;
        cout << "1 - Pole kola." << endl;
        cout << "2 - Obwod okregu." << endl;
        cout << "3 - Obietosc kuli." << endl;
        cout << "4 - Pole prostokata." << endl;
        cout << "5 - Obietosc prostopadloscianu." << endl;
        cin >> menu;

        switch (menu){
        case 1:
            cout << "Wprowadz dane: " << endl;
            cin >> a;
            cout << "Pole kola wynosi: " << P_k(a) << "j." << endl;
            break;
        case 2:
            cout << "Wprowadz dane: " << endl;
            cin >> a;
            cout << "Obwod kola wynosi: " << Ob_k(a) << "j^2." << endl;
            break;
        case 3:
            cout << "Wprowadz dane: " << endl;
            cin >> a;
            cout << "Obietosc kuli wynosi: " << O_k(a) << "j^3." << endl;
            break;
        case 4:
            cout << "Wprowadz dane: " << endl;
            cin >> a;
            cin >> b;
            cout << "Pole prostokata wynosi: " << P_p(a, b) << "j^2." << endl;
            break;
        case 5:
            cout << "Wprowadz dane: " << endl;
            cin >> a;
            cin >> b;
            cin >> c;
            cout << "Obietosc prostopadloscianu wynosi: " << O_p(a, b, c) << "j^3." << endl;
            break;
        default:
            break;
        }

        cout << "Czy Czy chcesz jeszcze cos policzyc? (T/t) " << endl;
        cin >> proces;
    } while (proces == 't' || proces == 'T');
    return 0;
}

float P_k(float a) {
    return a * a * 3.141;
}

float Ob_k(float a) {
    return a * 3.141 * 3.141;
}

float O_k(float a) {
    return a * a * a * 3.141;
}

float P_p(float a, float b) {
    return a * b;
}

float O_p(float a, float b, float c) {
    return a * b * c;
}
