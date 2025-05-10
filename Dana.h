#ifndef DANA_H
#define DANA_H

#include <iostream>
#include "Name.h"
using namespace std;

class Dana: public Name
{
public:
    Dana(string = "DefaultName");
    virtual void setName(string);
    void Print() const;

private:
    string name;
};

#endif
