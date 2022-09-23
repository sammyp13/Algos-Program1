#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "ShellSort.cpp"
#include <fstream>


int main()
{
    vector<C1> varray;

    std::ofstream case0("../case0.csv", std::ofstream::out);
    std::ofstream case1("../case1.csv", std::ofstream::out);
    std::ofstream case2("../case2.csv", std::ofstream::out);
    std::ofstream case3("../case3.csv", std::ofstream::out);


    //srand for generating C1 objects
    srand(time(NULL));

    for(int i = 0; i <= 24; i++) {
        varray.push_back(C1(int (rand() %500), int (rand() %500), int (rand() %500)));
    }

        ShellSort(varray, 3);


        //clear compare count::: C1().compareCount = 0;

    }
