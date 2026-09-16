C++ Singly Linked List (Lista)
Prosta implementacja jednokierunkowej listy powiązanej (singly linked list) w języku C++. Projekt demonstruje podstawowe operacje na strukturach dynamicznych w programowaniu obiektowym.

📋 Co robi ten program?
Program tworzy strukturę dynamiczną składającą się z węzłów (Lista_element), z których każdy przechowuje liczbę całkowitą (nr) oraz wskaźnik na kolejny element (next). Następnie zarządza nimi za pomocą klasy Lista, wykonując następujące operacje:

Inicjalizacja: Tworzy pustą listę ze wskaźnikiem głowy ustawionym na nullptr.

Dodawanie elementów: Dopisuje nowe elementy na sam koniec listy (dodaj).

Usuwanie elementów: Usuwa ostatni element z listy i zwraca jego wartość (usun_ostatniego).

Wyświetlanie: Wypisuje wszystkie elementy po kolei na standardowe wyjście (wypisz).

🛠️ Dostępne metody klasy Lista
Lista() – Konstruktor inicjalizujący pustą listę.

void dodaj(int liczba) – Dodaje nowy element z podaną wartością na koniec listy.

int usun_ostatniego() – Usuwa ostatni element listy, zwalnia pamięć (delete) i zwraca jego wartość (w przypadku pustej listy zwraca -1).

void wypisz() – Wyświetla zawartość całej listy w jednej linii.

🚀 Przykładowe użycie (main)
W pliku main.cpp program wykonuje następujące kroki demonstracyjne:

Tworzy listę i dodaje do niej trzy liczby: 15, 9, 16.

Wypisuje zawartość listy: 15 9 16.

Usuwa ostatni element i wyświetla komunikat o usuniętej wartości (16).

Wypisuje zaktualizowaną listę: 15 9.
