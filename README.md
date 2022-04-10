# Mikrokontrolery-L-
Zadania z labolatorów z mikrokontrolerów (Multifunctionshield Arduino)

# Lab 1 GPIO
1. [Wbudowana dioda LED gaśnie po sekundzie od włączenia.](https://github.com/MagnusBuzard/Mikrokontrolery-L-/blob/main/Programy%20z%20lab%C3%B3w/Lab1/1.1/1.1.ino)
2. [Migający LED co 500 ms.](https://github.com/MagnusBuzard/Mikrokontrolery-L-/blob/main/Programy%20z%20lab%C3%B3w/Lab1/1.2/1.2.ino)
3. [Zapalanie LED, jeżeli przycisk jest naciśnięty.](https://github.com/MagnusBuzard/Mikrokontrolery-L-/blob/main/Programy%20z%20lab%C3%B3w/Lab1/1.3/1.3.ino)
4. [Zmiana stanu LED na przeciwny za każdym razem gdy przycisk zostanie naciśnięty. Drugi LED miga co 2 s.](https://github.com/MagnusBuzard/Mikrokontrolery-L-/blob/main/Programy%20z%20lab%C3%B3w/Lab1/1.4/1.4.ino)
5. [Mruganie 4 LEDami, częstotliwość ich mrugania ustawiana za pomocą przycisku. 4 widoczne częstotliwości.](https://github.com/MagnusBuzard/Mikrokontrolery-L-/blob/main/Programy%20z%20lab%C3%B3w/Lab1/1.5/1.5.ino)
6. [Liczanie naciśnięć przycisku na 4 LEDach.](https://github.com/MagnusBuzard/Mikrokontrolery-L-/blob/main/Programy%20z%20lab%C3%B3w/Lab1/1.6/1.6.ino)

# Lab 2 TimerOne i EXTI
1. [Migający LED co 500 ms, z wykorzystaniem timera.](https://github.com/MagnusBuzard/Mikrokontrolery-L-/blob/main/Programy%20z%20lab%C3%B3w/Lab2/2.1/2.1.ino)
2. [Zpalające się 4 LEDy co 1000 ms na 200 ms, z wykorzystaniem timera.](https://github.com/MagnusBuzard/Mikrokontrolery-L-/blob/main/Programy%20z%20lab%C3%B3w/Lab2/2.2/2.2.ino)
3. [Zapalanie kolejnych LEDów co 200 ms, jeżeli przycisk jest naciśnięty, z wykorzystaniem EXTI i timera.](https://github.com/MagnusBuzard/Mikrokontrolery-L-/blob/main/Programy%20z%20lab%C3%B3w/Lab2/2.3/2.3.ino)
4. [Zmiana stanu LED na przeciwny za każdym razem gdy przycisk zostanie puszczony. Drugi LED miga co 2 s. Wykorzystanie EXTI i timera](https://github.com/MagnusBuzard/Mikrokontrolery-L-/tree/main/Programy%20z%20lab%C3%B3w/Lab2/2.4)
5. [Zapalanie LED, jeżeli przycisk jest naciśnięty, z wykorzystaniem EXTI.](https://github.com/MagnusBuzard/Mikrokontrolery-L-/tree/main/Programy%20z%20lab%C3%B3w/Lab2/2.5)

# Lab 3 ADC i UART (1)
1. [Wysyłanie czasu od uruchomienia na port szeregowy w sposób nieblokujący.](https://github.com/MagnusBuzard/Mikrokontrolery-L-/blob/main/Programy%20z%20lab%C3%B3w/Lab3/3.1/3.1.ino)
2. [Wysyłanie stanu trzech przycisków na port szeregowy tylko wtedy gdy zmieni się stan przycisku.](https://github.com/MagnusBuzard/Mikrokontrolery-L-/blob/main/Programy%20z%20lab%C3%B3w/Lab3/3.2/3.2.ino)
3. [Rysowanie przy użyciu Serial Plottera funkcji: sin(x)+(sin(2x)/2)+(sin(3x)/3)+(sin(4x)/4)+(sin(5x)/5)](https://github.com/MagnusBuzard/Mikrokontrolery-L-/blob/main/Programy%20z%20lab%C3%B3w/Lab3/3.3/3.3.ino)
4. [Odczytywanie napięcia z potencjometru znajdującego się na płytce MFS i wysyłanie tej informacji na port szeregowy z częstotliwością 1Hz.](https://github.com/MagnusBuzard/Mikrokontrolery-L-/tree/main/Programy%20z%20lab%C3%B3w/Lab3/3.4)

# Lab 4 PWM i UART (2)
1. [Płynne rozjaśnianie i ściemnianie LED, cykl trwa ok. 2 s.](https://github.com/MagnusBuzard/Mikrokontrolery-L-/blob/main/Programy%20z%20lab%C3%B3w/Lab4/4.1/4.1.ino)
2. [Odbieranie z portu szeregowego pojedynczych znaków (pierwsza dioda: q - zapala, a - gasi; druga dioda: w - zapala, s - gasi; trzecia dioda: e - zapala, d - gasi;).](https://github.com/MagnusBuzard/Mikrokontrolery-L-/blob/main/Programy%20z%20lab%C3%B3w/Lab4/4.2/4.2.ino)
3. [Płynne rozjaśnianie i ściemnianie LED za pomocą przycisków S1 oraz S3.](https://github.com/MagnusBuzard/Mikrokontrolery-L-/blob/main/Programy%20z%20lab%C3%B3w/Lab4/4.3/4.3.ino)
4. [Zmiana stanu dwóch LEDów (0 lub 1), wypełnienie dwóch kolejnych diód (3cia w zakresie 0-100, czwarta w zakresie 0-255), zmiana stanu buzzera (0 lub 1) (sterowanie dołączonym na zajęciach programem .exe).](https://github.com/MagnusBuzard/Mikrokontrolery-L-/blob/main/Programy%20z%20lab%C3%B3w/Lab4/4.4/4.4.ino)

# Lab 5 DISPLAY (wbudowany na płytkę wyświetlacz)
1. [Wyświetlanie na wyświetlaczu napięcie odczytywane z potencjometru.](https://github.com/MagnusBuzard/Mikrokontrolery-L-/blob/main/Programy%20z%20lab%C3%B3w/Lab5/5.1/5.1.ino)
2. [Wyświetlanie upływającego czasu (od 10 s do 0 s).](https://github.com/MagnusBuzard/Mikrokontrolery-L-/blob/main/Programy%20z%20lab%C3%B3w/Lab5/5.2/5.2.ino)
3. [Dodanie do zadania drugiego miganie wszystkich LEDów.](https://github.com/MagnusBuzard/Mikrokontrolery-L-/blob/main/Programy%20z%20lab%C3%B3w/Lab5/5.3/5.3.ino)
4. [Dodanie do zadania drugiego, po upłynięciu czasu, włączenie buzzera na 150 ms.](https://github.com/MagnusBuzard/Mikrokontrolery-L-/blob/main/Programy%20z%20lab%C3%B3w/Lab5/5.4/5.4.ino)
5. [Czas jaki będzie odliczany ustawiany za pomocą przycisków S1 oraz S3, S2 uruchamia timer, czas wyświetlany jest na wyświetlaczu. Po upływie zadanego czasu miganie LEDów oraz włączenie buzzera na 150 ms. Włączone odliczanie można zatrzymać przyciskiem S2. Dłuższe przytrzymanie przycisku S2 ustawia czas 0 minut i 0 sekund. Minuty i sekundy oddzielone na wyświetlaczu kropką.](https://github.com/MagnusBuzard/Mikrokontrolery-L-/tree/main/Programy%20z%20lab%C3%B3w/Lab5/5.5)
