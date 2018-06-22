// ************************************************************************** //
//                                                                            //
//                Account.class.cpp for GlobalBanksters United                //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //

#include "Account.class.hpp"
#include <iostream>
#include <ctime>

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;
int		Account::getNbAccounts( void ) { return _nbAccounts; };
int		Account::getTotalAmount( void ) { return _totalAmount; };
int		Account::getNbDeposits( void ) { return _totalNbDeposits; };
int		Account::getNbWithdrawals( void ) { return _totalNbWithdrawals; };

Account::Account( int initial_deposit ) :
	_accountIndex(getNbAccounts()),
	_amount(initial_deposit),
	_nbDeposits(0),
	_nbWithdrawals(0) {
	this->_accountIndex = _nbAccounts;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl; };

Account::Account( void ) :
	_accountIndex(getNbAccounts()),
	_amount(0),
	_nbDeposits(0),
	_nbWithdrawals(0),
	_nbCheckAmount(0) {
	_nbAccounts++;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl; };

Account::~Account( void ) {
	_nbAccounts--;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl; };

void	Account::makeDeposit( int deposit ) {
	Account::_displayTimestamp();
	this->_nbDeposits++;
	_totalNbDeposits++;
	this->_amount += deposit;
	_totalAmount += deposit;
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount - deposit << ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl; };

bool	Account::makeWithdrawal( int withdrawal ) {
	Account::_displayTimestamp();
	if (withdrawal > this->_amount) {
		std::cout << "index:" << this->_accountIndex << ";p-amount:" << this->_amount << this->_amount << ";withdrawalrawl:refused" << std::endl;
		return false; }
	this->_nbWithdrawals++;
	_totalNbWithdrawals++;
	this->_amount -= withdrawal;
	_totalAmount -= withdrawal;
	std::cout << "index:" << this->_accountIndex << ";p-amount:" << this->_amount + withdrawal << "withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
return true; };

int		Account::checkAmount( void ) const {
	_nbCheckAmount++;
return _amount; };

void	Account::displayStatus( void ) const {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits<< ";withdrawals:" << this->_nbWithdrawals << std::endl; };

void	Account::displayAccountsInfos(void) {
	Account::_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl; };

void	Account::_displayTimestamp( void ) {
	time_t		now = time(0);
	struct tm	*tnow = localtime(&now);
	char		t[32];

	strftime(t, sizeof(t), "[%Y%d%m_%H%M%S] ", tnow);
	std::cout << t;
};

