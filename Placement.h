#ifndef PLACEMENT_H
#define PLACEMENT_H
#include <iostream>
#pragma once
using namespace std;


    class Placement {

    public:
        Placement();
        Placement(Placement& placement) :_description(placement.getDescript()) {}
        void setDescript(string);
        string getDescript();

    protected:
        string getDescript(string);

    private:
        string _description;

        Placement(string description);
    };

#endif