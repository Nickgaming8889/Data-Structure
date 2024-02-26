#include "../headers/Convertions.hpp"

int op;

double validation(double);

int main(int argc, char const *argv[]) {
    celsiusKelvin* j = new celsiusKelvin();
    celsiusKelvin* k = new celsiusKelvin();
    celsiusFahrenheit* l = new celsiusFahrenheit();
    celsiusFahrenheit* m = new celsiusFahrenheit();
    int op;
    double c, k_, f;

    do {
        cout << "\nConvertions" << endl;
        cout << "1. Celsius-Kelvin." << endl;
        cout << "2. Kelvin-Celsius." << endl;
        cout << "3. Celsius-Fahrenheit." << endl;
        cout << "4. Fahrenheit-Celsius." << endl;
        cout << "5. Exit." << endl;

        cout << "Select a type convertion: ";
        cin >> op;
        validation(op);

        switch (op) {
        case 1:
            cout << "Enter the Celsius °: ";
            cin >> c;
            validation(c);

            j->setCelsius(c);
            j->celsiusK();
            cout << "Celsius to Kelvin is: " << j->getKelvin() << endl;
        break;
        case 2:
            cout << "Enter the Kelvin °: ";
            cin >> k_;
            validation(k_);

            k->setKelvin(k_);
            k->kelvinC();
            cout << "Kelvin to Celsius is: " << k->getCelsius() << endl;
        break;
        case 3:
            cout << "Enter the Celsius °: ";
            cin >> c;
            validation(c);

            l->setCelsius(c);
            l->celsiusF();
            cout << "The Fahrenheit result is: " << l->getFahr() << endl;
        break;
        case 4:
            cout << "Enter the Fahrenheit °: ";
            cin >> f;
            validation(f);

            m->setFahr(f);
            m->FahrC();
            cout << "The Celsius result is: " << m->getCelsius() << endl;
        break;
        default:
            //cout << "Goodbye!";
        break;
        }

    } while (op != 5);

    return 0;
}

double validation(double op_) {
    bool valid = false;
    
    do {
            if (cin.good())
                valid = true;
            else {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input. Try again... ";
            }
        }while(!valid);

    op = op_;

    return op_;
}