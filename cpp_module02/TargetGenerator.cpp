#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() 
{
    std::map<std::string, ATarget*>::iterator it;
    for (it = targets.begin(); it != targets.end(); ++it)
    {
        delete it->second;
    }
    targets.clear();
}

void TargetGenerator::learnTargetType(ATarget* target){
    if(target)
       targets[target->getType()] = target->clone();
}

void TargetGenerator::forgetTargetType(string const & target)
{
    map<string,ATarget*>::iterator it = targets.find(target);
    if(it != targets.end()) {
        delete it->second;
        targets.erase(it);
    }
}

ATarget* TargetGenerator::createTarget(string const & target)
{
    map<string,ATarget*>::iterator it = targets.find(target);
    return it != targets.end() ? it->second : NULL;
}
