
#ifndef PONY_HPP
# define PONY_HPP

#include <string>
#include <iostream>

class Pony {
    public:
        Pony(std::string n, bool m, std::string s);
        ~Pony(void);
        void         setName(std::string);
        void         setIsMagical(bool);
        void         setSuperpower(std::string);
        std::string     getName(void);
        bool         getIsMagical(void);
        std::string     getSuperpower(void);
        void         sayHello(void);

        private:
            std::string _name;
            bool        _isMagical;
            std::string _superpower;
};

#endif