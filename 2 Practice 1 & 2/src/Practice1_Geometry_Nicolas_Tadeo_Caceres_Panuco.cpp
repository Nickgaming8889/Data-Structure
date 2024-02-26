#include "../headers/Geometry.hpp"

int op;

int validation(int);

int main(int argc, char const *argv[]) {
    Triangle* k = new Triangle();
    Square* j = new Square();
    Rectangle* l = new Rectangle();
    Polygon* m = new Polygon();
    double a, b, c;

    do {
        cout << "\nMenu" << endl;
        cout << "1. Triangle." << endl;
        cout << "2. Square." << endl;
        cout << "3. Rectangle." << endl;
        cout << "4. Polygon." << endl;
        cout << "5. Exit" << endl;
        
        cout << "Select option: ";
        cin >> op;
        validation(op);

        switch(op) {
            case 1:
                cout << "Base? ";
                cin >> a;
                validation(a);
                cout << "Height? ";
                cin >> b;
                validation(b);

                //Triangle...
                k->setBase(a);
                k->setHeight(b);
                cout << "Base & Height: " << k->getBase() << " " << k->getHeight() << endl;
                k->areaCaculator();
                cout << "The area of the triangle is: " << k->getArea() << endl;
            break;
            case 2:
                cout << "Side Large? ";
                cin >> b;
                validation(b);

                //Square...
                j->setSide(b);
                cout << "Sides: " << j->getSide() << endl;
                j->areaCalculator();
                cout << "The area of the square is: " << j->getArea() << endl;
            break;
            case 3:
                cout << "Base? ";
                cin >> a;
                validation(a);
                cout << "Height? ";
                cin >> b;
                validation(b);

                //Rectangle...
                l->setBase(a);
                l->setHeight(b);
                cout << "Base & Height: " << l->getBase() << " " << l->getHeight() << endl;
                l->areaCaculator();
                cout << "The area of the rectangle is: " << l->getArea() << endl;
            break;
            case 4:
                cout << "Num Sides? ";
                cin >> a;
                validation(a);
                cout << "Large of Side? ";
                cin >> c;
                validation(c);

                //Polygon...
                m->setSide(a);
                cout << "Sides: " << m->getSide() << endl;
                m->angleCalculator();
                cout << "The angle is: " << m->getAngle() << endl;
                m->setLarge_s(c);
                cout << "The large of every side is: " << m->getLarge_s() << endl;
                m->apCalculator();
                cout << "The apotem is: " << m->getAp() << endl;
                m->areaCalculator();
                cout << "The area of the polygon is: " << m->getArea() << endl;
            break;
            default:
                //cout << "Goodbye!" << endl;
            break;
        }
    } while (op != 5);

    return 0;
}

int validation(int op_) {
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