#include "Module.h"

Module::Module() {
    this->_credits = 2;
    this->_name = "None";
    this->_students = 0;

}

unsigned int Module::getCredits() {
    return this->_credits;
}

unsigned int Module::getStudents() {
    return this->_students;

}

string Module::getMName() {
    return this->_name;
}


void Module::setCredits(unsigned int a) {
    this->_credits = a;
}

void Module::setMName(string a) {
    this->_name = a;
}

void Module::setStudents(unsigned int a) {
    this->_students = a;
}

