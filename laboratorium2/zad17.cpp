/* 17.03.2025
Karolina Wrzalik */

#include <iostream>

using namespace std;

int main() {

    double dlugoscTrasy;
    double iloscSpalonegoPaliwa;

    cout << "Podaj długość trasy w km: ";
    cin >> dlugoscTrasy;

    cout << "Podaj ilość spalonego paliwa w litrach: ";
    cin >> iloscSpalonegoPaliwa;

    if (dlugoscTrasy > 0 && iloscSpalonegoPaliwa > 0) {
        double srednieZuzycie = (iloscSpalonegoPaliwa / dlugoscTrasy) * 100;
        cout << "Średnie zużycie paliwa na 100 km to " << srednieZuzycie << " litrów.\n";
    } else {
        cout << "Długość trasy i ilość spalonego paliwa muszą być większe od 0\n";
    }

    return 0;

}
