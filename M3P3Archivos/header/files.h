#pragma once

#include <iostream>
#include <fstream>
using namespace std;

class File {
    private:

    public:
        File();
        ~File();
        void writeFile();
        void readFile();
};