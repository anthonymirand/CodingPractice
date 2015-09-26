#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

const double PI = acos(-1.0);
const double RADIUS = 6875.0 / 2;

double distance_on_sphere(double x1, double y1, double x2, double y2)
{
    return RADIUS * acos(sin(x1) * sin(x2) + cos(x1) * cos(x2) * cos(fabs(y1 - y2)));
}

double readCoord()
{
    int degrees, minutes, seconds;
    double number;
    char character;
    string message;
    
    cin >> degrees >> character >> minutes >> character >> seconds >> character >> message;
    number = (degrees + minutes / 60.0 + seconds / 3600.0) / 180.0 * PI;
    if (message == "WL." || message == "SL")
        number = -number;
    
    return number;
}

int main()
{
    double X1, X2, Y1, Y2, distance;
    string message;
    
    getline(cin, message);
    getline(cin, message);
    getline(cin, message);
    
    X1 = readCoord();
    cin >> message;
    Y1 = readCoord();
    getline(cin, message);
    getline(cin, message);
    X2 = readCoord();
    cin >> message;
    Y2 = readCoord();
    
    distance = distance_on_sphere(X1, Y1, X2, Y2);
    cout << "The distance to the iceberg: " << fixed << setprecision(2) << floor(distance * 100 + 0.5) / 100.0 << " miles." << endl;
    if (distance < 99.995)
        cout << "DANGER!" << endl;
    
    return 0;
}