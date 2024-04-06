#include <iostream>

using namespace std;

int main()
{
    /*1*/
    /*float R1, R2, R3, R0 = 0;
    cout << "R1: ";
    cin >> R1;
    cout << "R2: ";
    cin >> R2;
    cout << "R3: ";
    cin >> R3;
    R0 = 1 / R1 + 1 / R2 + 1 / R3;
    R0 = R0 / (R0 * R0);
    cout << "R0: " << R0;*/


    /*2*/
    /*float L, pi = 3.14, R, S;
    cout << "L: ";
    cin >> L;
    R = L / (pi * 2);
    S = pi * R * R;
    cout << "S: " << S;*/


    /*3*/
    /*float v, t, a;
    cout << "v: ";
    cin >> v;
    cout << "t: ";
    cin >> t;
    cout << "a: ";
    cin >> a;
    float S = v * t + ((a * (t * t)) / 2);
    cout << "S: " << S << endl;*/


    /*4*/
    /*int time, minutes = 0, hours = 0, seconds = 0;
    cout << "input seconds: ";
    cin >> time;
    hours = time / 3600;
    minutes = time % 3600 / 60;
    seconds = time % 3600 % 60;
    cout << "hours: " << hours << "\nminutes: " << minutes << "\nseconds: " << seconds << endl;*/


    /*5*/
    /*float money;
    cout << "money: ";
    cin >> money;
    cout << (int)money << " UAH." << (money - (int)money) * 100<< " KOP.";*/


    /*6*/
    //int length;
    //float time;
    //cout << "calculating running speed" << endl;
    //cout << "input length (meters) = ";
    //cin >> length;
    //cout << "input time (minutes.seconds) = ";
    //cin >> time;

    //float sec = (time - (int)time) * 100;
    //int mins = (int)time;
    //int fullsecs = mins * 60 + sec;
    //float speed = (float)length / fullsecs;

    //cout << "distance: " << length << endl;
    //cout << "time : " << mins << " min. " << sec << " sec. = " << fullsecs << " sec." << endl;
    //cout << "your speed: " << speed * 3.6 << " km/hour"; /*множу на 3.6 щоб перевести метри на секунду в кілометри на годину*/


    /*7*/
    int days;
    cout << "Days: ";
    cin >> days;
    cout << days / 7 << " weeks and " << days % 7 << " days " << endl;
}