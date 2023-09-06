/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:21:07 by hgeissle          #+#    #+#             */
/*   Updated: 2023/09/06 14:44:36 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << this->_name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << this->_name << ": My job here is done!" << std::endl;
}

const std::string& Warlock::getName() const
{
	return (this->_name);
}

const std::string& Warlock::getTitle() const
{
	return (this->_title);
}

void Warlock::setTitle(const std::string& title)
{
	this->_title = title;
}

void Warlock::introduce() const
{
	std::cout << this->_name <<  ": I am " << this->_name << ", " << this->_title << " !" << std::endl;
}
