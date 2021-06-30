#include <iostream>
using namespace std;
void test(int* imas, int size)
{
initMas(imas,size,1);
for(int i = 0; i < size; i++)
if(imas[i] != 1) cout « "error";

initMas(imas,size,-13);
for(int i = 0; i < size; i++)
if(imas[i] != -13) cout « "error";
}
