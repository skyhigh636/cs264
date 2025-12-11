#include "Programme.h"
using namespace Prog;


Programme::Programme(){
    this -> _name = "none";
    this -> _year = 1;
}


string Programme::getName(){
    return this -> _name;
}

unsigned int Programme::getYear(){
    return this -> _year;
}


void Programme::setName(string a){
    this -> _name = a;
}

void Programme::setYear(unsigned int a){
    this -> _year = a;
}


void Programme::addModule(Module* a){
    Module setStudents(unsigned int b);
    Module setCredits(unsigned int c);
    Module setMName(string d);
}