#include <iostream>

 using namespace std;



int
main ()
{

int percorso;

float kill;

float morti;

float kd;

while (percorso != 2)

    {

cout << "HOW MANY KILLS YOU DONE?\n";

cin >> kill;

cout << "HOW MANY DEATHS YOU HAVE DONE?\n";

cin >> morti;

kd = kill / morti;

cout << "-------------------------------------\n";

cout << "YOU HAVE TOTALED: " << kd << " K.D\n";

cout << "-------------------------------------\n";

cout <<
	"PRESS 1 TO CALCULATE ANOTHER K.D OR PRESS 2 TO EXIT THE PROGRAM: ";

cin >> percorso;

if (percorso > 2)

	{

break;

}

}

return 0;

}





