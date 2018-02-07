Jak zacząć projekt?
===================
  
Inicjowanie GITa w folderze lokalnym
-------------------------------------

### Instalacja GITa w systemie Linux

* Instalacji programu GIT dokonuje się poprzez polecenie w konsoli: `sudo apt install git` 

### Tworzenie folderu

* W terminalu przejdź do wybranej lokalizacji i wpisz polecenie `mkdir repo1` a następnie `cd repo1`

>Lista dostępnych komend dostępna jest pod poleceniem `git help`
  
### Pierwszy plik

* Aby utworzyć plik testowy w konsoli wpisz komendę `touch test.txt` lub `> test.txt`

### Inicjowanie GITa

1. Wykonaj polecenie `git init`
2. Przy użyciu polecenia `ls -la` dokonaj sprawdzenia czy został utworzony katalog `.git` 


Konfigurowanie GITa
-------------------

### Konfigurowanie połączenia z [github.com](https://github.com "GitHub")

#### Za pierwszym razem wymagane jest podanie danych do zdalnego repozytorium Git'a. 
1. W tym celu użyj komendy:`git config --global user.email "adres@email.com"` podając adres email do konta na *github.com*
2. Następnie podaj nazwę użytkownika z *github.com*: `git config --global user.name "nazwa_użytkownika"`

Praca z wykorzystaniem GITa
----------------------------

### Sprawdzanie zmodyfikowanych plików

Aby sprawdzić zmodyfikowane pliki użyj polecenia: `git status`

### Dodawanie plików do zdalnego repozytorium

1. Dodanie pliku do repozytorium odbywa się za pomocą polecenia: `git add "nazwa_pliku"` lub aby dodać wszystkie zmodyfikowanie pliki `git add .`
2. Następnie dodaj komentarz do wprowadzonych zmian: `git commit -m "Komentarz"`
3. Historię wprowadzonych zmian wyświetlisz dzięki poleceniu: `git log`

### Wysyłanie plików na serwer

Wysłanie pliku(ów) następuje po poleceniu: `git push -u origin master`. Należy zauważyć, że po wskazaniu gałęzi *origin-master* kolejne komendy mogą ograniczyć się do `git push` do czasu zmiany gałęzi na inną.

