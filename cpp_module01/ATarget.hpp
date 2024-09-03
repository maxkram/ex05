#pragma once

class ASpell;

class ATarget
{
    protected:
        string _type;

    public:
        ATarget(string const & type);
        virtual ~ATarget() {};
        string const & getType() const;
        void getHitBySpell(ASpell const & spell) const;
        virtual ATarget* clone() const = 0;
};

#include "ASpell.hpp"
