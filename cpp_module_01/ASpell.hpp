#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <iostream>
# include <string>

class ATarget;

class ASpell
{
	private:
		std::string	_name;
		std::string _effects;
		ASpell();
	
	public:
		ASpell(std::string, std::string);
		ASpell(const ASpell&);
		const ASpell& operator=(const ASpell &);
		~ASpell();

		const std::string& getName() const;
		const std::string& getEffects() const;

		virtual ASpell* clone() const = 0;
		void launch(const ATarget&) const;
};

#include "ATarget.hpp"

#endif
