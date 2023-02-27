#include <iostream>
#include <cmath>

using namespace std;

int main()
  {
    int x,n ;
    double y =0;

    cout << "Input n>1, n=";
    cin >> n;
    cout << "Input x = ";
    cin >> x;

    float result;

    if (x <= 0) {
        float prod = 1;
        for (double i = 0; i < n-1 ; i++) {
            prod *= (pow(i, 2) + i);
        }
        result = prod;
    }
    else {
        float sum = 0;
        for (double i = 0; i < n-1 ; i++) {
            for (double j = 0; j < n-1; j++) {
                sum += (x / (i + j));
            }
        }
        result = sum;
    }

    cout <<"x= "<< x << "; "<< "y= "<< y << "Result: " << result << endl;

    return 0;
}
