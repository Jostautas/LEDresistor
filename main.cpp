#include <iostream>

using namespace std;

int main()
{
    float led_volt, led_amp, input_volt;
    cout << "Type in voltage of LED" << endl;
    cin >> led_volt;
    cout << "Type in LED current draw (for small LED it's typicaly around o.o2A)" << endl;
    cin >> led_amp;
    cout << "Type in the input voltage" << endl;
    cin >> input_volt;
    cout << endl << "The value of the resistor should be around " << (input_volt - led_volt) / led_amp << "ohm" << endl;
    return 0;
}
