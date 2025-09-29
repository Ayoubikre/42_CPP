/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 15:06:29 by aakritah          #+#    #+#             */
/*   Updated: 2025/09/29 17:46:39 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <sys/time.h>
# include "Account.hpp"

int Account::_nbAccounts=0;
int Account::_totalAmount=0;
int Account::_totalNbDeposits=0;
int Account::_totalNbWithdrawals=0;

int Account::getNbAccounts(){return _nbAccounts;}
int Account::getTotalAmount(){return _totalAmount;}
int Account::getNbDeposits(){return _totalNbDeposits;}
int Account::getNbWithdrawals(){return _totalNbWithdrawals;}
int Account::checkAmount()const{return _amount;}

void Account::_displayTimestamp(void)
{
    struct timeval t;
    gettimeofday(&t, NULL);
    std::cout << "[" << t.tv_sec << "_" << t.tv_usec << "] ";
}

Account::Account( int initial_deposit )
{
    _displayTimestamp();
    _accountIndex=getNbAccounts();
    std::cout << "index:" << _accountIndex ;
    _nbAccounts++;
    _amount=initial_deposit;
    _totalAmount+=initial_deposit;
    std::cout << ";amount:" << checkAmount() ;
    std::cout << ";created" << std::endl ;
    _nbDeposits=0;
    _nbWithdrawals=0;
}

void Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() ;
    std::cout << ";total:" << getTotalAmount() ;
    std::cout << ";deposits:" << getNbDeposits() ;
    std::cout << ";withdrawals:" << getNbWithdrawals() ;
    std::cout << std::endl;
}

void Account::displayStatus() const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex ;
    std::cout << ";amount:" << checkAmount() ;
    std::cout << ";deposits:" << _nbDeposits ;
    std::cout << ";withdrawals:" << _nbWithdrawals ;
    std::cout << std::endl;
}

Account::~Account()
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex ;
    std::cout << ";amount:" << checkAmount() ;
    std::cout << ";closed" << std::endl ;
}

void	Account::makeDeposit( int deposit )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex ;
    std::cout << ";p_amount:" << checkAmount();
    std::cout << ";deposit:" << deposit ;
    _amount+=deposit;
    _totalAmount+=deposit;
    std::cout << ";amount:" << checkAmount();
    _nbDeposits++;
    _totalNbDeposits++;
    std::cout << ";nb_deposits:" << _nbDeposits ;
    std::cout << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    if(checkAmount() < withdrawal)
    {
        _displayTimestamp();
        std::cout << "index:" << _accountIndex ;
        std::cout << ";p_amount:" << checkAmount();
        std::cout << ";withdrawal:refused" ;
        std::cout << std::endl;
        return false;      
    }
    else
    {
        _displayTimestamp();
        std::cout << "index:" << _accountIndex ;
        std::cout << ";p_amount:" << checkAmount();
        std::cout << ";withdrawal:" << withdrawal ;
        _amount-=withdrawal;
        _totalAmount-=withdrawal;
        std::cout << ";amount:" << checkAmount();
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        std::cout << ";nb_withdrawals:" << _nbWithdrawals ;
        std::cout << std::endl;      
    }
    return true;      
}

