#include "Module.h";
using namespace Mod;

Module::Module(){
    this -> _credits = 2;
    this -> _name = "None";
    this -> _students = 0;

}

unsigned int Module::getCredits(){
    return this-> _credits;
}

unsigned int Module::getStudents(){
    return this -> _students;

}

string Module::getName(){
    return this -> _name;
}


void Module::setCredits(unsigned int a){
    this -> _credits = a;
}

void Module::setName(string a){
    this ->_name = a;
}

void Module::setStudents(unsigned int a){
    this -> _students = a;
}

