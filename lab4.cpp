#include <iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int pr1(void) {
    bool answer;
    int value;

    cout << "Enter a value: ";
    cin >> value;

    if ((value >= 0 && value < 10) || (value * 2 < 20 && value - 2 > -2) || (value - 1 > 1 && value / 2 < 10) || value == 111) {
        answer = true;
    }
    else {
        answer = false;
    }

    cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(") << endl;

    return 0;
}

void pr2() {
    double var1, var2, var3, var4, var5;

    cin >> var1 >> var2 >> var3 >> var4 >> var5;

    cout << fixed << setprecision(1) << var1 << endl;
    cout << fixed << setprecision(2) << var2 << endl;
    cout << fixed << setprecision(6) << var3 << endl;
    cout << fixed << setprecision(2) << var4 << endl;
    cout << fixed << setprecision(0) << var5 << endl;
}

void pr3() {
    int num1, num2;
    float epsilon = 0.000001f;

    cout << "Enter the first integer number: ";
    cin >> num1;

    cout << "Enter the second integer number: ";
    cin >> num2;


    if (num1 == 0 || num2 == 0) {
        cout << "Cannot divide by zero." << endl;
    }
    else {

        float result1 = 1.0f / num1;
        float result2 = 1.0f / num2;

        if (fabs(result1 - result2) < epsilon) {
            cout << "Results are equal (by " << epsilon << " epsilon)" << endl;
        }
        else {
            cout << "Results are not equal." << endl;
        }
    }
}

void pr4() {

    int num1, num2, num3, num4;

    cout << "Enter an IP: ";
    cin >> num1 >> num2 >> num3 >> num4;

    if (num1 >= 1 && num1 <= 255 &&
        num2 >= 1 && num3 <= 255 &&
        num3 >= 1 && num3 <= 255 &&
        num4 >= 1 && num4 <= 255) {
        cout << num1 << "." << num2 << "." << num3 << "." << num4 << endl;
    }
    else {
        cout << "The numbers are not in range for 1 to 255";
    }

}

int main(void) {

    pr1();
    pr2();
    pr3();
    pr4();
    return 0;
}