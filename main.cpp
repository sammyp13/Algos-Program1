#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "ShellSort.cpp"


int main()
{
    vector<C1> varray;

    std::ofstream case0("../case0.csv", ios::app);
    std::ofstream case1("../case1.csv", ios::app);
    std::ofstream case2("../case2.csv", ios::app);
    std::ofstream case3("../case3.csv", ios::app);


    //srand for generating C1 objects
    srand(time(NULL));
    int n = 100000;
    for(int j = 500; j <= 5000; j+= 500) {
        for (int i = 0; i <= 23; i++) {
            for (int p = 0; p < j; p++) {
                varray.push_back(C1(int(rand() %n), int(rand() %n), int(rand() % n)));
            }

            C1::compareCount = 0;
            ShellSort(varray, 0);
            case0 << j << ',' << C1::compareCount << endl;

            C1::compareCount = 0;
            ShellSort(varray, 1);
            case1 << j << ',' << C1::compareCount << endl;

            C1::compareCount = 0;
            ShellSort(varray, 2);
            case2 << j << ',' << C1::compareCount << endl;

            C1::compareCount = 0;
            ShellSort(varray, 3);
            case3 << j << ',' << C1::compareCount << endl;

            varray.clear();
        }
    }
}
