/* Karolina Wrzalik
14.04.2025 */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Pracownik {
    string imie;
    string nazwisko;
    string pesel;
    string adres;
    string telefon;
};

int main() {

    vector<Pracownik> pracownicy;
    string odp;
    int count = 0;

    do {

        Pracownik p;

        cout << "Wprowadz dane pracownika:\n";

        cout << "Imie: ";
        getline(cin, p.imie);
        cout << "Nazwisko: ";
        getline(cin, p.nazwisko);
        cout << "PESEL: ";
        cin >> p.pesel;
        cin.ignore();
        cout << "Adres: ";
        getline(cin, p.adres);
        cout << "Nr. telefonu: ";
        cin >> p.telefon;
        cin.ignore();

        pracownicy.push_back(p);
        count++;
        cout << "\nLiczba pracownikow: " << count << "\n";

        cout << "Chcesz dodac kolejnego pracownika? (t/n): ";
        cin >> odp;
        cin.ignore();
        cout << "\n";

    } while (odp == "t" || odp == "T");

    cout << "Lista pracownikow:\n\n";
    for (int i = 0; i < pracownicy.size(); ++i) {
        Pracownik p = pracownicy[i];
        cout << i+1 << ". " 
            << p.imie << " " << p.nazwisko 
            << "\nPESEL: " << p.pesel 
            << "\nAdres: " << p.adres 
            << "\nNr telefonu: " << p.telefon 
            << "\n\n";
    }

    return 0;
}