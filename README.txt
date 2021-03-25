
Omogucavanje C/C++ funkcija u python kodu.

Cilj - poziv C/C++ f-je iz python koda.

Wrapper sluzi da parametre C/C++ f-je koju python poziva prihvati, njihov tip konvertuje u C/C+ 'bezbedan'
tip (npr. float u python-u konvertuje u double u C/C++ itd), pozove C/C++ f-ju za dohvacene parametre, dohvati rezultat f-je, zapakuje ga u python bezbedan tip (npr. ako je tip povratne vrednosti double, konvertuje u float) i takav prosledi python kodu koji moze da ga koristi.

Prilikom prevodjenja bitno je naglasiti kompajleru gde da trazi Python.h zaglavlje u kome se nalaze sve f-je za bezbedno importovanje modula itd. (u linux path je uglavnom /usr/include/pythonX.Y)


Pisanje wrapper-a i drugih f-ja za uspeno izvrsavanje se moze automatizovati pomocu SWIG-a (sudo apt-get install swig) i komande 'swig -python example.i' gde se u example.i nalazi SWIG module..

Napomena .so file u SWIG treba da ima oblik _imeModula.so






