#pragma once

#include <map>
#include <utility>
#include "ATarget.hpp"

class TargetGenerator
{
    private:
        map<string,ATarget*> targets;
        TargetGenerator(TargetGenerator const &);
        TargetGenerator& operator=(TargetGenerator const &) { return *this; }

    public:
        TargetGenerator();
        ~TargetGenerator();
        void learnTargetType(ATarget* target);
        void forgetTargetType(string const & target);
        ATarget* createTarget(string const & target);

};