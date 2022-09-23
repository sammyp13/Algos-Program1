#include <vector>
#include <cmath>
#include "c1.h"

void ShellSort(vector<C1>& varray, int code)
{
    vector<int> hlist;
    int n = varray.size();

    switch(code){
        case 0: //code = 0
            hlist.push_back(1);
            break;

        case 1: { //code = 1
            int k = floor(log2(n));
            for(int i = k; i >= 0; i--){
                double j = pow(2, i);
                hlist.push_back(j);
            }
        }
            break;

        case 2: { //code = 2
            int k = floor(log2(n));
            for(int i = k; i >= 0; i--){
                double j = pow(2, i);
                double p = j - 1;
                hlist.push_back(p);
            }
            hlist.pop_back();
        }
            break;

        case 3: { //code = 3
            //k (k-1) < n
        }
            break;
    }

    for(int i = 0; i < hlist.size(); i ++) {
        int h = hlist[i];
        for (int j = 1; j < hlist.size(); j++) {
            C1 key;
            key == varray[j];
            int i = j - h;
            while ((i > 0) and (key < varray[i])){
                varray[i + h] = varray[i];
                i = i - h;
            }
        varray[i + h] == key;
        }
    }
    cout << "Shell Sort"<< endl;
}

