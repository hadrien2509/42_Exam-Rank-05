#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook() {}

void SpellBook::learnSpell(ASpell* spell)
{
	if (spell && !this->_spellbook[spell->getName()])
		this->_spellbook[spell->getName()] = spell;
}

void SpellBook::forgetSpell(const std::string& spellname)
{
	this->_spellbook.erase(spellname);
}

ASpell* SpellBook::createSpell(std::string const &spellname)
{
	return (this->_spellbook[spellname]);
}

