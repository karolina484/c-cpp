/* 17.03.2025
Karolina Wrzalik */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double brutto;
    double podatek;

    cout << "Podaj kwotę brutto: ";
    cin >> brutto;

    cout << "Podaj podatek w %: ";
    cin >> podatek;

    if (brutto > 0 && podatek > 0) {
        double netto = (brutto / (1+(podatek / 100)));
        double wartosc_podatku = netto * (podatek / 100);
        //double wartosc_podatku = brutto - netto;
        cout << fixed << setprecision(2);
        cout << "Przy podatku " << int(podatek) << "% z kwoty brutto " << brutto << " PLN otrzymujemy kwotę netto równą " << netto << " PLN. Wartość podatku to " << wartosc_podatku << " PLN.\n";
    } else {
        cout << "Podawane wartości muszą być dodatnie!\n";
        return 1;
    }

    return 0;
}
