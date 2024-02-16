if (ans_ != 0) {
                        cout << "Do you want to use ANS? 1[Y] 2[N] ";
                        do {
                            cin >> op;
                            if (cin.good()) {
                                valid = true;
                            }
                            else {
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                cout << "Invalid input. Try again... " << endl;;
                            }
                        }while(!valid);

                        switch(op) {
                            case 1:
                                    cout << "The Power result is: " << cos(ans) << "\n\n";
                                break;
                            case 2:
                                    clearAns(op);
                                break;
                        }
                    }
                    else {
                        cout << "Give the grade: ";
                        do {
                            cin >> c;
                            if (cin.good()) {
                                valid = true;
                                cout << "The result is: " << cos(c) << "\n\n";
                            }
                            else {
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                cout << "Invalid input. Try again... " << endl;
                            }
                        }while(!valid);
                    }