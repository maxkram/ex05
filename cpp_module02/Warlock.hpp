#pragma once

#include <iostream>
#include "ASpell.hpp"
#include "SpellBook.hpp"
#include <map>

using namespace std;

class Warlock
{
    private:
        string _name;
        string _title;
        SpellBook spellBook;
        Warlock(Warlock const &);
        Warlock& operator=(Warlock const &) { return *this; }
    
    public:
        Warlock(string const & name, string const & title);
        ~Warlock();
        string const & getName() const;
        string const & getTitle() const;
        void setTitle(string const & name);
        void introduce() const;

        void learnSpell(ASpell* spell);
        void forgetSpell(string const & spell);
        void launchSpell(string spell, ATarget const & target);

};