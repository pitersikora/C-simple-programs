## Laboratorium 2

1. [X] Wyświetl na ekran 2 pierwsze wiersze pliku `program.c`. (head)

```sh
head -2 program.c # konsola, terminal
head -n 2 program.c
head --lines 2 program.c # skrypt w Bash-u
```

2. [ ] Wyświetl na ekran 4 ostatnie wiersze pliku program.c. (head, tail)

```sh
tail -4 program.c
tail -n 4 program.c
tail --lines 4 program.c
```

3. [X] W pliku program.c znajdź wszystkie wiersze z wystąpieniem słowa „main”. (grep)

```sh
grep main program.c
```

4. [X] Plikowi program.c nadaj następujące uprawnienia: właściciel – czytanie, pisanie, grupa – czytanie, pozostali użytkownicy: brak uprawnień. (chmod)

```sh
chmod -rw-r----- program.c
chmod 640 program.c
```

5. [X] Będąc w katalogu temp przenieś katalog wazne-sprawy do katalogu praca.

```sh
cd temp # wejście do folderu temp
mv ../wazne-sprawy/ ../praca/
```

6. [ ] Zarchiwizuj cały katalog temp. (zip i tar)

7. [ ] Usuń katalog temp.

8. [ ] Odtwórz z archiwum katalog temp. (unzip i tar)

9. [ ] Posprzątaj na swoim koncie.