#include <iostream>
#include<windows.h>
 
using namespace std;
int main()
{
    int minutos;
    int segundos;
    
    system("color 3");
    
    cout << "Introduce los minutos: ";
    cin >> minutos;
    
    system("cls");
    
    segundos = 0;
    
    while(minutos>=0)
	{
        Sleep(1000);
        system("cls");
        if (segundos<1)
		{
            segundos=60;
            minutos=minutos-1;
        }
        segundos=segundos -1;
        if(segundos<10)
		{
            if(minutos<10)
			{
                cout << "0" << minutos << ":0" << segundos;
            }
            else
			{
                cout << "0" << minutos << ":0" << segundos;
            }
        }
		else
		{
            if(minutos<10)
			{
                cout << "0" << minutos << ":" << segundos;
            }
            else
			{
                cout << "0" << minutos << ":" << segundos;
            }
        }
        cout << "\n";
    }
    system("cls");
    system("PAUSE");
    return 0;
}