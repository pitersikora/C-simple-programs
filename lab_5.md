## Laboratorium 5

1. [X] Znajdź w swoim katalogu domowym (bez podkatalogów) wszystkie pliki, które zostały zmodyfikowane w ciągu ostatnich dziesięciu dni i wyświetl ich nazwy.

    ```sh
    find $HOME -maxdepth 1 -mtime -10
    # szukaj w katalogu domowym z głębokością drzewa 1 (czyli dany folder) pliki zmodyfikowane 10 dni temu lub mniej
    ```

1. [X] Znajdź wszystkie pliki zwykłe w systemie, które mają w nazwie ciąg znaków „conf” i wyświetl ich nazwy na ekranie.

    ```sh
    find / -type f -name '*conf*' -not -name '.*'
    # szukaj w katalogu root pliki mające w swojej nazwie "conf" nie będące plikami ukrytymi
    ```

1. [X] Znajdź w swoim katalogu domowym wszystkie pliki, które nie były używane w ciągu ostatnich 20 dni

    ```sh
    find $HOME -atime +20
    # szukaj w katalogu domowym pliki używane 20 dni temu lub więcej
    ```

1. [X] Znajdź w katalogu `/etc` wszystkie niepuste podkatalogi i pliki o nazwach zaczynających się na literę „a”.

    ```sh
    find /etc -type f,d -name 'a*' -not -empty
    # szukaj w folderze /etc pliki i ścieżki zaczynające się na literę 'a' nie będące puste
    ```