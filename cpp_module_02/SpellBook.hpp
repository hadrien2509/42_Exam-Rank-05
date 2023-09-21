#ifndef SPELLBOOK_H
# define SPELLBOOK_H

# include <iostream>
# include <algorithm>
# include <map>
# include <string>

class ASpell;

class SpellBook
{
	private:
		std::map <std::string, ASpell*> _spellbook;

	public:
		SpellBook();
		~SpellBook();
		void learnSpell(ASpell*);
		void forgetSpell(std::string const &);
		ASpell* createSpell(std::string const &);
};

# include "ASpell.hpp"

#endif
