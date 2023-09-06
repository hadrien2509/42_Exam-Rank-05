/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:21:09 by hgeissle          #+#    #+#             */
/*   Updated: 2023/09/06 14:44:54 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>
#include <string>

class Warlock
{
	private:
		std::string	_name;
		std::string	_title;

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
};

#endif
