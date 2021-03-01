#include <iostream>
using namespace std;
int main()
{
	int x,y;
	int wynik = 1;
	    cout << "podaj liczbe x : ";
	    cin >> x;
	    cout << "podaj potege y : ";
	    cin >> y;
		    for (int i = 0; i<y; i++)
		    {
		        wynik*=x;
		    }
		    cout << "Wynik to " << wynik << endl;
		    system("PAUSE >NUL");
		    return 0;

    
    system("pause");
}

dodana linijka
