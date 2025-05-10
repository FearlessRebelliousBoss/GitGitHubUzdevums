#include <iostream>
#include "Dana.h"

using namespace std;

Dana::Dana(string n)
{
    name = n;
}

void Dana::setName(string n)
{
    name = n;
}

void Dana::Print() const
{
    cout << name << endl;
}

