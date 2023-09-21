#ifndef FIREBALL_HPP
# define FIREBALL_HPP

# include <iostream>
# include <string>
# include "ASpell.hpp"

class Fireball : public ASpell
{
	public:
		Fireball();

		ASpell *clone() const;
};

#endif