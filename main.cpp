#include <iostream>

 using namespace std;


int
main ()
{

int percorso;

float kill;

float morti;

float kd;

  do

    {

cout << "Quante kill hai fatto?\n";
cin >> kill;

}

while (kill <= 0);

  do

    {

cout << "Quante morti hai fatto?\n";
cin >> morti;

}

while (morti <= 0);

kd = kill / morti;

cout << "-------------------------------------\n";
cout << "Hai totalizzato: " << kd << " K.D\n";
cout << "-------------------------------------\n";

  do

    {

cout << "PREMI 1 PER USCIRE DAL PROGRAMMA: ";
cin >> percorso;

}

while (percorso > 1 or percorso< 1);

return 0;

}


