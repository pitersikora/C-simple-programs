## Zajęcia języki programowania
1. 12.10.2019

    * [X] Zawartość katalogu /. Katalog domowy użytkownika: pwd, ~.

    * [X] Ścieżka, ścieżka względna, katalog bieżący, rodzicielski.

    * [X] Pliki: tworzenie, usuwanie, przenoszenie, zmiana nazwy. Polecenia: `ls`, `tree`, `cp`, `mv`, `cd`, `rm`, `rmdir`.

    * [X] Skonfigurować VSCode. Dodać rozszerzenia. Czym jest linters + instalacja.


1. 26.10.2019

    * [X] Wykonanie zadań `lab_2.md`

    * [X] Wykonanie zadań `lab_5.md` pkt 1-4

    * [X] Wykonanie zadań `lab_6.md`

1. 09.11.2019

    * [X] Wykonanie programu liczącego sumę dowolnego zakresu liczb podniesionych do dowolnej potęgi : program `power_sums.c`

    * [X] Prezentacja wyników w formie kolorowej tabeli

1. 16.11.2019

    Zmiany wprowadzono do programu `09_11_2019/power_sums/power_sums.o`

    * [X] Napisać od nowa funkcję `powerll` tak aby liczyła poprawnie jak największą liczbę wierszy

    * [X] Napisać funkcję wypisującą liczbę w postaci podkreślnika co 3 cyfry (ustawienie locale na amerykański, zamiana liczby na string i wstawienie _ co 3 cyfrę)

    * [X] Skasować zbędne spacje po znaku '=' w tabelce

1. 30.11.2019

    * [ ] Wykonać zadania z wydzieleniem na pliki nagłówkowe

    0. [X] Jakie wartości wyświetli poniższy program:

    ```c
    #include <stdio.h>
    int main() {
    int y, x=1, wynik = 0;
    while (x<=10) {
        y = x*x;
        printf("%d\n", y);
        wynik += y;
        ++x;
    }
    printf("wynik = %d\n", wynik);
    return 0;
    }
    ```
    1. [X] Napisz program, który wypisuje kolejne potęgi liczby 2 nie przekraczające 2010.

    2. [X] Napisz program wyświetlający poniższą szachownicę:

    ```bash
    * * * * * * * *
     * * * * * * * *
    * * * * * * * *
     * * * * * * * *
    * * * * * * * *
     * * * * * * * *
    * * * * * * * *
    ```
    - [ ] dodatkowo - wykonać generyczne tworzenie wzoru według liczb gwiazdek

    3. [X] Napisz program, który wczyta dwie liczby całkowite a i b (a<b) a następnie wypisze wszystkie liczby całkowite pomiędzy a i b

    4. [X] Napisz program, który wyliczy sumę liczb naturalnych od 1 do liczby n podanej przez użytkownika. Kiedy użytkownik poda liczbę mniejszą niż 1, to program powinien wypisać stosowny komunikat o błędzie.

    5. [X] Napisz program, który wczyta ze stdin 6 liczb całkowitych do tablicy, a następnie wypisze zawartość tej tablicy od początku i od końca.

    6. [X] Napisz program, który wczyta ze stdin 6 liczb rzeczywistych do tablicy, a następnie wyszuka i wypisze największą i najmniejszą liczbę umieszczoną w tej tablicy.

    7. [X] Napisz program, który ze stdin wczyta 6 liczb rzeczywistych do tablicy, a następnie wypisze liczbę liczb dodatnich w niej zawartych.

    8. [X] Napisz program rozmieszczający poniższe wzory oddzielnie jeden pod drugim. Użyj pętli for do generowania wzorów. Do wypisywania gwiazdek należy użyć instrukcji putchar('*') (powodującej wyświetlanie ich obok siebie). Uwaga: dwa ostatnie wzory wymagają, by każdy wiersz zaczynał się od odpowiedniej liczby spacji.

    ```bash
    *       ****    ****       *
    **      ***      ***      **
    ***     **        **     ***
    ****    *          *    ****
    ```
    9. [X] Napisz program monożący liczby tak jak to pokazano w tym filmiku [A Night Of Numbers – Go Forth And Multiply](https://www.youtube.com/watch?v=Nc4yrFXw20Q).
