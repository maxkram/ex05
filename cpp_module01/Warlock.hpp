#pragma once

#include "ASpell.hpp"
#include <utility>
#include <map>

class Warlock
{
    private:
        string _name;
        string _title;
        map<string,ASpell*> spells;
        Warlock(const Warlock&);
        Warlock& operator=(const Warlock&);
    
    public:
        Warlock(const string& name, const string& title);
        ~Warlock();
        const string& getName() const;
        const string& getTitle() const;
        void setTitle(const string& name);
        void introduce() const;

        void learnSpell(ASpell* spell);
        void forgetSpell(string spell);
        void launchSpell(string spell, const ATarget& target);

};