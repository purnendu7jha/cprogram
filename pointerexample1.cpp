include <iostream>
using namespace std;
int main()
{
    int val[3]= {5, 10, 15};

    int* ptr;

    ptr = val;
    cout << "Elements of the array are: ";
    cout << ptr[0] << " " ptr[1] << " " <<;
}

char a;
char *b;
char ** c;
a = 'g';
b = &a;
c = &b;

#include <bits/stdc++.h>
using namespace std;
void increase(void* data, int ptrsize)
{
    if (ptrsize == sizeof(char)) {
        char* ptrchar;

        ptrchar = (char*)data;
        (*ptrchar)++;
        cout << "*data points to a char"
             << "\n";
    }
    else if (ptrsize == sizeof(int)) {
        int*ptrint;

        ptrint= (int*)data;

        (*ptrint)++;
        cout << "*data points to an int"
             << "\n";
     }
}
void main()
{
    char c = 'x';

    int i = 10;
    increase(&i, sizeof(c));
    cout << "The new value of c is:" << c << "\n";
    increase(&i, sizeof(i));
    cout << "The new value of i is: "<< i << "\n";
}
int main() {main(); }