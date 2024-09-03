#pragma once

#include "ASpell.hpp"
// #include <utility>
#include <map>

class Warlock
{
    private:
        string _name;
        string _title;
        map<string,ASpell*> spells;
        Warlock(Warlock & const);
        Warlock& operator=(Warlock & const);
    
    public:
        Warlock(string const & name, string const & title);
        ~Warlock();
        string const & getName() const;
        string const & getTitle() const;
        void setTitle(string const & name);
        void introduce() const;

        void learnSpell(ASpell* spell);
        void forgetSpell(string spell);
        void launchSpell(string spell, ATarget const & target);

};