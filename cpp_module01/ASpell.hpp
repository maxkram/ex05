#pragma once

#include <iostream>
using namespace std;

class ATarget;

class ASpell
{
    protected:
        string _name;
        string _effects;

    public:
        ASpell(string const & name, string const & effects);
        virtual ~ASpell() {};
        string const & getName() const;
        string const & getEffects() const;
        void launch(ATarget const & target) const;
        virtual ASpell* clone() const = 0;
};

#include "ATarget.hpp"
