#include <iostream>
#include <unistd.h>
using namespace std;
int main ()
{
    int hour, min, sec;
    cout <<"***************** time *****************\n";
    cout <<"enter hour: ";
    cin >> hour;
    cout <<"enter min: ";
    cin >> min;
    cout <<"enter sec: ";
    cin >> sec;

    while(true)
    {
        system ("clear");
        sec++;
        
        if (sec == 60)
        {
            sec = 0;
            min++;
        }
        if (min == 60)
        {
            min = 0;
            hour++;
        }
        if (hour == 24)
        {
            hour = 0;
        }
        
        cout <<"***************** time *****************\n";
        cout << hour << ":" << min << ":" << sec<< endl;

        sleep (1);
    }
    return 0;
}