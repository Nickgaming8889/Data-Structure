#include <iostream>

int main(int argc, char const *argv[]) {
    int op;

    do {
        std::cout << "Main Menu." << std::endl;
        std::cout << "1. Sum." << std::endl;
        std::cout << "2. Rest." << std::endl;
        std::cout << "3. Multiply." << std::endl;
        std::cout << "4. Divide." << std::endl;
        std::cout << "5. Exit." << std::endl;

        std::cout << "Select an option: ";
        std::cin >> op;

        switch (op) {
            case 1: 
                    std::cout << "This is Sum" << std::endl;
                break;
            case 2:
                    std::cout << "This is Rest" << std::endl;
                break;
            case 3:
                    std::cout << "This is Multiply" << std::endl;
                break;
            case 4:
                    std::cout << "This is Divide" << std::endl;
                break;
            default:
                    int op_;
                    std::cout << "Do you want to close? 1[YES] 2[NO] ";
                    std::cin >> op;

                    if (op != 1) {
                        continue;
                    }
                    else {
                        std::cout << "Good to see you!" << std::endl;
                        return 1;
                    }
                break;
        }

    } while (op != 5);
    

    return 0;
}