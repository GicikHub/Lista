#include <iostream>

using namespace std;

struct Lista_element
{
    int nr;
    Lista_element* next;
};

class Lista
{
    Lista_element* glowa; // pierwszy element

public:
    // 1. Konstruktor - pusta lista
    Lista()
    {
        glowa = nullptr;
    }

    // 2. Dodaje element na koniec
    void dodaj(int liczba)
    {
        Lista_element* nowy = new Lista_element;

        nowy->nr = liczba;
        nowy->next = nullptr;

        // jeœli lista jest pusta
        if (glowa == nullptr)
        {
            glowa = nowy;
            return;
        }

        // idziemy na koniec listy
        Lista_element* p = glowa;

        while (p->next != nullptr)
            p = p->next;

        p->next = nowy;
    }

    // 3. Usuwa ostatni element i zwraca jego liczbê
    int usun_ostatniego()
    {
        // jeœli lista jest pusta
        if (glowa == nullptr)
            return -1;

        // jeœli jest tylko jeden element
        if (glowa->next == nullptr)
        {
            int liczba = glowa->nr;

            delete glowa;
            glowa = nullptr;

            return liczba;
        }

        // szukamy przedostatniego elementu
        Lista_element* p = glowa;

        while (p->next->next != nullptr)
            p = p->next;

        // zapamiêtujemy liczbê
        int liczba = p->next->nr;

        // usuwamy ostatni
        delete p->next;
        p->next = nullptr;

        return liczba;
    }

    // 4. Wypisuje ca³¹ listê
    void wypisz()
    {
        Lista_element* p = glowa;

        while (p != nullptr)
        {
            cout << p->nr << " ";
            p = p->next;
        }

        cout << endl;
    }
};

int main()
{
    Lista lista;

    // dodawanie elementów
    lista.dodaj(15);
    lista.dodaj(9);
    lista.dodaj(16);

    // wypisanie listy
    lista.wypisz();

    // usuniêcie ostatniego
    cout << "Usunieto: " << lista.usun_ostatniego() << endl;

    // ponowne wypisanie
    lista.wypisz();

    return 0;
}
