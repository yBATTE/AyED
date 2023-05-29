#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double pi = 0.0;
    int sign = 1;
    int iteration = 0;

    do{ 
        pi += sign * (1.0 / (2 * iteration + 1));
        sign *= -1;
        iteration++;

        cout << "Iteracion: " << iteration << " - Valor de Pi: " << setprecision(6) << fixed << pi * 4 << endl;
    }while ((abs(pi * 4) - 3.141592) > 0.0000001);

    cout << "El valor aproximado de Pi es: " << setprecision(6) << fixed << pi * 4 << endl;

    return 0;
}
