#include <iostream>


using namespace std;

string add(string a,string b)                   // Funkcja odpowiada za dodawanie pisemne, zamienia typ int na string
{
    int cyfra1, cyfra2, cyfra_pam, liczba, blad;
    int c1, c2;
    char pam, zn;
    string wynik, wyn, s;
    int da, db, dmax, k, j;
    da = a.length();
    db = b.length();
    if (da > db) dmax = da;
        else dmax = db;
    if (da != db)
    {
        s = "";
        if(da > db)
        {
            for(j = 0; j < da - db; j++) s = s + '0';
            for(j = 0; j < db; j++) s = s + b[j];
            b = s;
        }
        else
        {
            for(j = 0; j < db - da; j++) s = s + '0';
            for(j = 0; j < da; j++) s = s + a[j];
            a = s;
        }
    }
    wynik = ""; cyfra_pam = 0;
    for(k = dmax - 1; k >= 0; k--)
    {
        cyfra1 = a[k] - 48;
        cyfra2 = b[k] - 48;
        liczba = cyfra1 + cyfra2 + cyfra_pam;
        if(liczba < 10)
        {
            wynik = wynik + (char)(liczba + 48);
            cyfra_pam = 0;
        }
        else
        {
            c2 = liczba % 10; c1 = (liczba - c2) / 10;
            wynik = wynik + (char)(c2 + 48);
            cyfra_pam = 1;
        }
    }

    if(cyfra_pam == 1) wynik = wynik + '1';
    wyn = "";
    for(k = wynik.length() - 1; k >= 0; k--) wyn = wyn + wynik[k];
    return wyn;
    }

string liczby_fibonacciego(int n)
{
    int k, j;
    string f1, f2, f3;

    f1 = "1"; f2 = "1";
    if(n > 2)
        for (k = 3; k<= n; k++)
        {
            f3 = add(f1, f2);
            f1 = f2;
            f2 = f3;
        }
    if(n < 3) return "1";
    else return f3;
}

int main() {
    int n;

    cout << "\n";
    cout << "=================================\n";
    cout << "==      Ciag Fibonacciego      ==\n";
    cout << "=================================\n";
    cout << "\tAutor:ml. asp. Marcin Brzeziński\n";
    cout << "---------------------------------\n\n\n";



    cout << "Podaj wybrany element ciagu Fibonnaciego: " << endl;
    cin >> n;
    cout << "Liczba Fibonacciego dla elementu F" << n << " to:\n\n" << liczby_fibonacciego(n) << endl;

}