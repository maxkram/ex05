#include "ATarget.hpp"

ATarget::ATarget(std::string const & type) : _type(type) {}

string const & ATarget::getType() const
{
    return _type;
}

void ATarget::getHitBySpell(ASpell const & spell) const
{
    cout <<  _type << " has been " << spell.getEffects() << "!" << endl;
}