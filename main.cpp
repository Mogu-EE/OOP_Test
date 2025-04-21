# include <iostream>
# include <math.h>
# include <cmath>
# include "Cylinder.h"

using namespace std;
int main(){
    Cylinder c;

    cin >> c;
    cout << "Circumference: " << fixed << setprecision(3) << c.Circumference() << endl;
    cout << "SurfaceArea: " << fixed << setprecision(3) << c.SurfaceArea() << endl;
    cout << "Volume: " << fixed << setprecision(3) << c.Volume() << endl;

    return 0;
}
