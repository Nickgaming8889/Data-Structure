#include <iostream>
#include <vector>
using namespace std;

//Mediante esta funcion capturaremos las calificaciones...
void captureGrades(vector<double>& grade_) {
    int numGrades;

    cout << "Numero de calificaciones a guardar: ";
    cin >> numGrades;

    grade_.resize(numGrades);
    
    for (int i = 0; i <= numGrades; i++) {
        cout << "Add the grade " << i + 1 << ": ";
        cin >> grade_[i];
    }
    
}

//Promediamos...
double average(vector<double>& grade_) {
    double myaverage;
    for (double grade : grade_) {
        myaverage += grade;
    }

    return myaverage / grade_.size();
}

double bestGrade(vector<double>& grade_) {
    double best = grade_[0];
    for (int i = 1; i < grade_.size(); i++) {
        if (grade_[i] > best)
            best = grade_[i];
    }

    return best;
}

int reproved(vector<double>& grade_) {
    int rep = 0;
    for (double grade : grade_) {
        if (grade < 60)
            rep++;
    }

    return rep;
}

int main(int argc, char const *argv[]) {
    vector<double> grades;
    double average_;
    double bestScore;
    int reprovedNum;

    captureGrades(grades);
    average_ = average(grades);
    bestScore = bestGrade(grades);
    reprovedNum = reproved(grades);

    cout << "Promedio: " << average_ << endl;
    cout << "Mejor calificacion: " << bestScore << endl;
    cout << "Reprobados: " << reprovedNum << endl;

    return 0;
}