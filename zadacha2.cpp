#include <iostream>
using namespace std;
void initMas(int* imas, int size, int val)
{
    for (int i = 0; i < size; i++)
        imas[i] = val;
}


void test(int* imas, int size)
{
    initMas(imas, size, 1);
    for (int i = 0; i < size; i++)
        if (imas[i] != 1)  cout << "error";

    initMas(imas, size, -13);
    for (int i = 0; i < size; i++)
        if (imas[i] != -13) cout << "error";
}
int main()
{
    int imas[10];
    int size = 6;
    int val = 5;
    initMas(imas, size, val);
}
