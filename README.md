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

    Zmiany wprowadzono do programu `09_11_2019_powersums/power_sums/power_sums.c`

    * [X] Napisać od nowa funkcję `powerll` tak aby liczyła poprawnie jak największą liczbę wierszy

    * [X] Napisać funkcję wypisującą liczbę w postaci podkreślnika co 3 cyfry (ustawienie locale na amerykański, zamiana liczby na string i wstawienie _ co 3 cyfrę)

    * [X] Skasować zbędne spacje po znaku '=' w tabelce

1. 30.11.2019

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
    - [X] dodatkowo - wykonać generyczne tworzenie wzoru według liczb gwiazdek

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

1. 07.12.2019

    1. [ ] Poniższy – zawierający wiele błędów –   program dla podanej z klawiatury liczby M  ma obliczyć najmniejszą liczbę n, taką że<br>1 + 2 + 3 +...+ n >= M<br>Popraw wszystkie błędy w tym programie tak,aby poprawiony program prawidłowo obliczał liczbę n.

    ```c
    #include <stdio.h>
    int main() {
      int M;
      suma = 0;
      i = 1;
      print("Podaj liczbe M: ");
      scanf("%f\n", %M)
      while (suma < M) {
         suma=suma+i;
         i=i+1;
      }
      n=i+1;
      printf("Szukane n to: ", n);
      return 0;
    }
    ```

    Na konsoli, działanie programu, może wyglądać tak:
    ```sh
    Podaj liczbę M: 11
    Szukane n to: 5
    Szukane n to 5, ponieważ:

    1 + 2 + 3 + 4 < 10
    1 + 2 + 3 + 4 + 5 >= 10
    ```

    2. [ ] Oblicz wartość π (pi) z nieskończonej sumy<br>π = 4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ...<br>Wypisz w postaci tabelki przybliżoną wartość π przez sumę 10, 100, 1000 i 1_000_000 wyrazów tego szeregu.<br>Ile wyrazów musisz wysumować, zanim po raz pierwszy otrzymasz kolejne przybliżenia π: 3.14, 3.141, 3.1415 ? Wyniki wypisz w postaci tabelki.

    3. [ ] Zamiast komentarza /** ... */ i kropek ... poniżej wpisz kod, tak aby powstał program zliczający znaki odstępu, tabulacji i nowego wiersza tekstu wczytanego z stdin.
    ```c
    #include <stdio.h>
    int main()
    {
       /** deklaracje zmiennych lokalnych */
       nb = 0;  /* liczba znaków odstępu */
       nt = 0;  /* liczba znaków tabulacji */
       nl = 0;  /* liczba znaków nowego wiersza */
       while ((c=getchar()) != EOF) {
          /** zliczaj białe znaki */
       }
       printf("liczba znaków odstępu = %d, \
          tabulacji = %d, nowego wiersza = %d\n", ... );
       return 0;
    }
    ```
