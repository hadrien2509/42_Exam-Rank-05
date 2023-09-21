/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:21:09 by hgeissle          #+#    #+#             */
/*   Updated: 2023/09/21 11:04:18 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include "ASpell.hpp"

#include "SpellBook.hpp"

class Warlock
{
	private:
		std::string	_name;
		std::string	_title;
		SpellBook _spellbook; 

		Warlock();
		Warlock(const Warlock&);
		Warlock& operator=(const Warlock&);

	public:
		Warlock(std::string name, std::string title);
		~Warlock();

		const std::string& getName() const;
		const std::string& getTitle() const;
		void setTitle(const std::string&);

		void introduce() const;

		void learnSpell(ASpell*);
		void forgetSpell(std::string);
		void launchSpell(const std::string, const ATarget&);
};

#endif
