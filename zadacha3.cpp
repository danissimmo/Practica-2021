#include <iostream>
#include <forward_list>
#include <cstdlib>      

 
using namespace std;
 
void printStack(stack<char>);
 
int main()
{
    setlocale(LC_ALL, "rus"); 
 
    forward_list<char> fList;  
    stack<char> stInt;  
    stack<char> stChar;  
    
    char findSymbol;
    size_t index = 0;
 
    while (true)
    {
        char symbol;
        char ch;
        system("cls");  
        cout << "Добавить элемент в список? (1 - да, другой сивол - нет)" << endl;
        cin >> ch;
        
        if (ch == '1')      
        {
            cout << "\nВведите символ для вставки в список: ";
            cin >> symbol;
            fList.push_front(symbol);  // 
        }
        else
            break;
        
        cout << endl;       
    }
 
    for (auto el : fList)
    {
        cout << el << ' ';
    }
