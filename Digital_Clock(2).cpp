#include <iostream>
#include <unistd.h>
using namespace std;
int main ()
{

    //عندك تلات متغيرات متغير الساعة ومتغير الدقيقه  ومتغير الثانية 
    int hour, min, sec;
   
    cout <<"***************** time *****************\n";
   
    //  هنا رح يطلب من المستخدم يدخل الساعة والدقيقة والثانية 
    cout <<"enter hour: ";
    cin >> hour;
    cout <<"enter min: ";
    cin >> min;
    cout <<"enter sec: ";
    cin >> sec;
    
    // التحقق من ان المستخدم دخل الوقت الصح يعنى ميدخلش رقم اصغر من الصفر او اكبر من الوقت 
    if (hour < 0 || hour > 24) // لزمن يكون شرط  لاتنين متحقق  
    {
    cout << "Invalid hour\n";
    return 0;
    }
    
    if (min < 0 || min > 59) // لزمن يكون شرط  لاتنين متحقق  
    {
    cout << "Invalid min\n";
    return 0;
    }
    
    if (sec < 0 || sec > 59) // لزمن يكون شرط  لاتنين متحقق  
    {
    cout << "Invalid sec\n";
    return 0;
    }

    while(true) // هنا رح يلف للأبد طول ماالشرط متحقق
    {
        system ("clear"); // هنا عشان يحذف الكلام على طول بحيث ان الساعة تظهر حقيقية 
        sec++; // بيزيد على الثانية واحد فى كل لفة
        
        if (sec == 59)
        {
            sec = 0;
            min++;
        }
        if (min == 59)
        {
            min = 0;
            hour++;
        }
        if (hour == 23)
        {
            hour = 0;
        }
        
        cout <<"***************** time *****************\n";
        cout << hour << ":" << min << ":" << sec<< endl; // هنا عشان يطبع الوقت جنب بعضو 

        sleep (1); 
    }
    return 0;
}