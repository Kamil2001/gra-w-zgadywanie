#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
    int liczba;
    int strzal;
    int proby=0;
    cout << "Witaj pomyslalem sobie liczbe z zakresu od 1 do 100";

    srand(time(NULL));//ustawienie pseudolosowosci

    liczba=rand ()%100+1;//ustawienie zakresu liczb w tym przypadku od 0 do 100


   while(strzal!=liczba)//ustawienie pentli
   {
       proby++;//okreslenie ilosci prob
        cout<<"\nSprobuj odgadnac liczbe" " (twoja liczba prob:"<<proby<< "): ";
        cin >> strzal;

        if (strzal==liczba)
        cout<< "\nUdalo ci sie odgadnac liczbe!(wygrywasz w probie:"<<proby<<")";
        if (strzal<liczba)
        cout<< "\nZa malo :-(";
        if (strzal>liczba)
        cout<< "\nZa duzo!";
   }


    return 0;
}
