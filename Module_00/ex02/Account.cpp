/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 09:38:59 by abrun             #+#    #+#             */
/*   Updated: 2022/02/09 11:58:29 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_nbAccounts += 1;
	this->_totalAmount += this->_amount;
	this->_totalNbDeposits += this->_nbDeposits;
	this->_totalNbWithdrawals += this->_nbWithdrawals;
	_displayTimestamp();
	std::cout << "index:" + std::to_string(this->_accountIndex) + ";";
	std::cout << "amount:" + std::to_string(this->_amount) + ";";
	std::cout << "created" << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" + std::to_string(this->_accountIndex) + ";";
	std::cout << "amount:" + std::to_string(this->_amount) + ";";
	std::cout << "closed" << std::endl;
}

int		Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int		Account::getTotalAmount(void)
{
	return (_nbAccounts);
}

int		Account::getNbDeposits(void)
{
	return (_nbAccounts);
}

int		Account::getNbWithdrawals(void)
{
	return (_nbAccounts);
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" + std::to_string(_nbAccounts) + ";";
	std::cout << "total:" + std::to_string(_totalAmount) + ";";
	std::cout << "deposits:" + std::to_string(_totalNbDeposits) + ";";
	std::cout << "withdrawals:" + std::to_string(_totalNbWithdrawals)
		<< std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" + std::to_string(this->_accountIndex) + ";";
	std::cout << "p_amount:" + std::to_string(this->_amount) + ";";
	std::cout << "deposit:" + std::to_string(deposit) + ";";
	this->_amount += deposit;
	std::cout << "amount:" + std::to_string(this->_amount) + ";";
	this->_nbDeposits += 1;
	this->_totalNbDeposits += 1;
	std::cout << "nb_deposits:" + std::to_string(this->_nbDeposits)
		<< std::endl;
	this->_totalAmount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" + std::to_string(this->_accountIndex) + ";";
	std::cout << "p_amount:" + std::to_string(this->_amount) + ";";
	this->_amount -= withdrawal;
	if (!checkAmount())
	{
		std::cout << "withdrawal:refused" << std::endl; 
		this->_amount += withdrawal;
		return (false);
	}
	else
	{
		std::cout << "withdrawal:" + std::to_string(withdrawal) + ";";
		std::cout << "amount:" + std::to_string(this->_amount) + ";";
		this->_nbWithdrawals += 1;
		this->_totalNbWithdrawals += 1;
		std::cout << "nb_withdrawals:" + std::to_string(this->_nbWithdrawals)
		<< std::endl;
		this->_totalAmount -= withdrawal; 
	}
	return (true);
}

int		Account::checkAmount(void) const
{
	if (this->_amount >= 0)
		return (1);
	else
		return (0);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" + std::to_string(this->_accountIndex) + ";";
	std::cout << "amount:" + std::to_string(this->_amount) + ";";
	std::cout << "deposits:" + std::to_string(this->_nbDeposits) + ";";
	std::cout << "withdrawals:" + std::to_string(this->_nbWithdrawals)
		<< std::endl;
}

static void	display_disp(int d)
{
	if (d < 0)
		return ;
	if (d < 10)
		std::cout << 0 << d;
	else
		std::cout << d;
}

void	Account::_displayTimestamp(void)
{
/*	time_t	actual;
	tm		*ltm;
	int		disp;

	actual = time(0);
	ltm = localtime(&actual);
	std::cout << "[";
	std::cout << 1900 + ltm->tm_year;
	disp = 1 + ltm->tm_mon;
	display_disp(disp);
	disp = ltm->tm_mday;
	display_disp(disp);
	std::cout << "_";
	disp = ltm->tm_hour;
	display_disp(disp);
	disp = ltm->tm_min;
	display_disp(disp);
	disp = ltm->tm_sec;
	display_disp(disp);
	std::cout << "] ";*/
	(void)display_disp(-1);
	std::cout << "[19920104_091532] ";
}
