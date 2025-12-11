#ifndef MODULE_H
#define MODULE_H
#include <string>
using namespace std;

namespace Mod{
    class Module{
        public:

        Module();
        Module(unsigned int);
        Module(unsigned int,unsigned int, string);
        Module(string);
        Module(Module& module): _credits(module.getCredits()),_students(module.getStudents()),_name(module.getMName()){}

        void setCredits(unsigned int);
        unsigned int getCredits();

        void setStudents(unsigned int);
        unsigned int getStudents();

        void setMName(string);
        string getMName();


        private:
        unsigned int _credits;
        unsigned int _students;
        string _name;
    };
}



#endif