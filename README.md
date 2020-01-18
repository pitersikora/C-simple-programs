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

    * [X] Wykonanie programu liczącego sumę zakresu liczb podniesionych do potęgi : program `power_sums.c`

    * [X] Prezentacja wyników w formie kolorowej tabeli

1. 16.11.2019

    **UWAGA**<br>Zmiany wprowadzono do programu `powersums_2019_11_09/power_sums.c`

    * [X] Napisać od nowa funkcję `powerll` tak aby liczyła poprawnie jak największą liczbę wierszy

    * [X] Napisać funkcję wypisującą liczbę w postaci podkreślnika co 3 cyfry

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

        dodatkowo - wykonać generyczne tworzenie wzoru według liczb gwiazdek

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

    1. [X] Poniższy – zawierający wiele błędów –   program dla podanej z klawiatury liczby M  ma obliczyć najmniejszą liczbę n, taką że<br>1 + 2 + 3 +...+ n >= M<br>Popraw wszystkie błędy w tym programie tak,aby poprawiony program prawidłowo obliczał liczbę n.

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

    2. [X] Zamiast komentarzy /* ... */ w programie poniżej wpisz kod tak, aby powstał program, który sprawdza czy podana liczba całkowita jest pierwsza.

    ```c
    #include <stdio.h>
    int main() {
      /* deklaracje zmiennych */
      printf("Podaj liczbe calkowita: ");
      /* wczytaj tę liczbę do zmiennej n */
      /* sprawdź czy n jest liczbą pierwszą */
      printf("Podana liczba '%d' jest %s\n",
        n, jest_pierwsza ? "pierwsza" : "złożona");
      return 0;
    }
    ```

    3. [X] Oblicz wartość π (pi) z nieskończonej sumy<br>π = 4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ...<br>Wypisz w postaci tabelki przybliżoną wartość π przez sumę 10, 100, 1000 i 1_000_000 wyrazów tego szeregu.<br>Ile wyrazów musisz wysumować, zanim po raz pierwszy otrzymasz kolejne przybliżenia π: 3.14, 3.141, 3.1415 ? Wyniki wypisz w postaci tabelki.

    4. [X] Zamiast komentarza /** ... */ i kropek ... poniżej wpisz kod, tak aby powstał program zliczający znaki odstępu, tabulacji i nowego wiersza tekstu wczytanego z stdin.

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

1. 14.12.2019

    1. [X] Napisz program który sprawdzi czy liczby w zakresie od 1 do 100 są zgodne z [problemem Collatza](https://pl.wikipedia.org/wiki/Problem_Collatza)
    przedstawi wynik w postaci tabeli gdzie:
    <br>N - liczba podana przez użytkownika
    <br>OK - czy liczba jest zgodna z problemem Collatza
    <br>#N - ile kroków wykonano w rozwiązaniu problemu
    <br>MAX - liczba o największej wartości w ciągu podczas rozwiązywania

    1. [X] Napisać rekurencyjną implementację funkcji obliczającej nk (n do potęgi k).

    1. [X] Napisać funkcję rekurencyjną C(n,k) obliczającą współczynnik Newtona n po k, czyli liczbę podzbiorów k-elementowych zbioru n-elementowego.

    1. [X] Napisać funkcję rekurencyjną odwracającą kolejność liter w napisie podanym na wejściu.

    1. [X] Korzystając z twierdzenia Euklidesa, napisać program obliczający rekurencyjnie największy wspólny dzielnik z liczb podanych na wejściu.

1. 11.01.2020

    1. [X] Uzupełnij podany kod, tak aby powstał działający program:

    ```c
    void podnies_do_kwadratu(int *n) {

    }

    void wczytaj_liczbe(int *n) {

    }

    int main() {
      int liczba;
      wczytaj_liczbe(&liczba);
      podnies_do_kwadratu(&liczba);
      printf("Kwadrat wczytanej liczby to %d\n", liczba);
      return 0;
    }
    ```

    2. [X] Napisz program, który będzie zawierał funkcję swap_integers, który będzie zamieniał miejscami liczby a i b.

    3. [X] Rozważmy następujący kod programu:

    ```c
    #include <stdio.h>

    int main () {
      int ref[] = {8, 4, 0, 2};
      int *wsk;
      int indeks;
      for (indeks = 0, wsk = ref; indeks < 4; indeks++, wsk++)
      printf("%d %d\n", ref[indeks], *wsk);
      return 0;
    }
    ```

    Wzorując się na powyższym przykładzie napisz program, który dla 10 elementowej  statycznej tablicy wczyta jej elementy i wypisze na ekranie.

    4. [X] Wzorując się na przykładzie napisz program, który pobierze liczbę naturalną n. Następnie stworzy dynamiczną tablicę nn-element-ową i wypełni ją liczbami od 1 do n. Następnie program ma wypisać tę tablicę na ekranie.

    5. [X] Napisz program, który będzie zawierał funkcję MinMax. Funkcja ta ma przyjmować tablicę liczb całkowitych (wraz z ich rozmiarem podanym na początku programu) oraz zwracać ma jednocześnie najmniejszy oraz największy element tej tablicy. Funkcja ta ma wywoływać zaimplementowane przez użytkownika funkcje min i max odpowiadające za wyszukiwanie najmniejszego oraz największego elementu tablicy.
    Skorzystaj z wersji wskaźnikowej i adresów funkcji.
