#ifndef PROGRAMME_H
#define PROGRAMME_H
#include <string>
using namespace std;
#include "Module.h"
using namespace Mod;

namespace Prog{
    class Programme{
        public:
        Programme();
        Programme(string);
        Programme(unsigned int);
        Programme(string, unsigned int);
        Programme(Programme& programme):_name(programme.getName()),_year(programme.getYear()){}

        void setName(string);
        string getName();

        void setYear(unsigned int);
        unsigned int getYear();

		virtual string toString();


        protected:
        void addModule(Module*);
        Module setStudents(unsigned int);
        Module setMName(string);
        Module setCredits(unsigned int);

        private:
        string _name;
        unsigned int _year;
        
    };
}



#endif