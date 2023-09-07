#include "ASpell.hpp"

ASpell::ASpell(std::string name, std::string effects) : _effects(effects), _name(name) {}

ASpell::ASpell(const ASpell& src)
{
	(void)src;
}

const ASpell& ASpell::operator=(const ASpell& src)
{
	(void)src;
	return (*this);
}

ASpell::~ASpell() {}

const std::string& ASpell::getName() const
{
	return (this->_name);
}

const std::string& ASpell::getEffects() const
{
	return (this->_effects);
}

void ASpell::launch(const ATarget& tar) const
{
	tar.getHitBySpell(*this);
}


