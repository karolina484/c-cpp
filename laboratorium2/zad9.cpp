/* 17.03.2025
Karolina Wrzalik */

#include <iostream>

using namespace std;

int main() {

    const int GODZINY_STANDARDOWE = 40;
    const int STAWKA_STANDARDOWA = 40;
    const int STAWKA_NADLICZBOWA = 1.5 * STAWKA_STANDARDOWA;

    double godzinyStandardowe;
    double godzinyNadliczbowe;

    double zarobkiPodstawowe;
    double zarobkiNadliczbowe;

    double wynagrodzenieTygodniowe;

    double procent;

    cout << "Podaj ilość godzin standardowych: ";
    cin >> godzinyStandardowe;

    if (godzinyStandardowe <= 0) {
        cout << "Ilość godzin musi być dodatnia.\n";
    } else if (godzinyStandardowe < GODZINY_STANDARDOWE) {
        zarobkiPodstawowe = godzinyStandardowe * STAWKA_STANDARDOWA;
        cout << "W godzinach standardowych pracownik zarobił " << zarobkiPodstawowe << " zł. \n";
        cout << "Liczba godzin pracownika nie przekroczyła maksymalnej liczby godzin standardowych. \n"; 
        cout << "W związku z tym nie miał on nadgodzin. \n";
        cout << "Dlatego jego całkowite tygodniowe wynagrodzenie wynosi " << zarobkiPodstawowe << " zł.\n";
    } else if (godzinyStandardowe == GODZINY_STANDARDOWE) {
        zarobkiPodstawowe = GODZINY_STANDARDOWE * STAWKA_STANDARDOWA;
        cout << "Podaj ilość godzin nadliczbowych: ";
        cin >> godzinyNadliczbowe;
        cout << "W godzinach standardowych pracownik zarobił " << zarobkiPodstawowe << " zł. \n";
        if (godzinyNadliczbowe < 0) {
            cout << "Ilość godzin nie może być mniejsza od 0\n";
        } else if (godzinyNadliczbowe == 0) {
            cout << "Pracownik nie miał nadgodzin. \n";
            cout << "Jego całkowite tygodniowe wynagrodzenie wynosi więc " << zarobkiPodstawowe << " zł.\n";
        } else {
            zarobkiNadliczbowe = godzinyNadliczbowe * STAWKA_NADLICZBOWA;
            cout << "W godzinach nadliczbowych pracownik zarobił " << zarobkiNadliczbowe << " zł. \n";
            wynagrodzenieTygodniowe = zarobkiPodstawowe + zarobkiNadliczbowe;
            cout << "Całkowite tygodniowe wynagrodzenie wynosi " << wynagrodzenieTygodniowe << " zł. \n";
            procent = (godzinyNadliczbowe / GODZINY_STANDARDOWE) * 100;
            cout << "Godziny nadliczbowe stanowią " << procent << " % godzin standardowych.\n";
        }
    } else {
        cout << "Błąd. Maksymalna wartość godzin standardowych to 40.\n";
    }

    return 0;
}
