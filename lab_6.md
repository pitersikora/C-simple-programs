## Laboratorium 6

1. [X] W pliku `plik.txt` znajdź wiersze zawierające co najmniej jeden znak.

    ```sh
    egrep plik.txt -e '.'
    # szukaj linii w plik.txt zawierających dowolny znak
    ```

1. [X] Znajdź w plikach pl* wiersze rozpoczynające się od cyfry.

    ```sh
    egrep pl* -e '^[0-9]'
    # szukaj w plikach rozpoczynających się od "pl" linii zawierających na początku cyfrę
    ```

1. [X] Znajdź pliki, zawierające wiersz w którym na 9 pozycji występuje litera r.

    ```sh
    egrep -r -e '^.{8}r'
    # szukaj rekurencyjnie linii zawierających dowolne 8 znaków oraz "r" jako 9-ty znak
    ```

1. [X] Policz, ilu użytkowników systemu używa powłoki bash (zgodnie z zapisami w pliku `/etc/passwd`).

    ```sh
    egrep /etc/passwd -c -e '/bin/bash'
    # szukaj w pliku /etc/passwd, licząc ile jest takich wierszy, frazy /bin/bash (uruchomiony bash)
    ```

1. [X] Znajdź wiersze zawierające liczby rzymskie w pliku `plik.txt`.

    ```sh
    egrep plik.txt -e '(I|V|X|L|C|D|M)+'
    # szukaj w pliku plik.txt znaków wskazujących na cyfry rzymskie (conajmniej 1 litera z systemu cyfr rzymskich)
    ```