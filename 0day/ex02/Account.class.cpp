#include "Account.class.hpp"

int Account::_nbAccounts = 0; // количество акаунтов
int Account::_totalAmount = 0; // общая сумма
int Account::_totalNbDeposits = 0; // количество депозитов
int Account::_totalNbWithdrawals = 0;

 void Account::_displayTimestamp( void ){
	std::time_t now = time(0);
	char	buf[19];

	buf[18] = '\0';
	std::tm *ltm = localtime(&now);
	std::strftime(buf,18,"[%Y%m%d-%H%M%S] ",ltm);
	std::cout << buf;
	 return ;
 }

//  static int getNbAccounts( void );
//  static int getTotalAmount( void );
//  static int getNbDeposits( void );
//  static int getNbWithdrawals( void );
void  Account::displayAccountsInfos( void ) {
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts <<";";
	std::cout << "total:" << Account::_totalAmount<<";";
	std::cout << "deposits:" << Account::_totalNbDeposits<<";";
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals<<";" << std::endl;
}

Account::Account( int initial_deposit ) {
	Account::_displayTimestamp();
	std::cout << "index:" << _nbAccounts <<";";
	_accountIndex = _nbAccounts++;
	std::cout << "amount:" << initial_deposit <<";created" << std::endl;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbWithdrawals = 0;
	_nbDeposits = 0;
}
 Account::~Account( void ) {
	Account::_displayTimestamp();
	std::cout << "index:" << _nbAccounts-- <<";";
	std::cout << "amount:" << _amount <<";closed" << std::endl;
	Account::_totalAmount -= _amount;
	_totalNbDeposits -= _nbDeposits;
	_totalNbWithdrawals -= _nbWithdrawals;
 }

 void Account::makeDeposit( int deposit ) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex <<";";
	std::cout << "p_amount:" << this->_amount <<";";
	std::cout << "deposits:" << deposit <<";";
	std::cout << "amount:" << (this->_amount += deposit) << ";";
	std::cout << "nb_deposits:" << (++this->_nbDeposits) <<";";
	std::cout << std::endl;

	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
 }

 bool Account::makeWithdrawal( int withdrawal ) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex <<";";
	std::cout << "p_amount:" << this->_amount <<";";
	if (this->_amount < withdrawal)
	{
		std::cout << "withdrawal:refused";
		std::cout << std::endl;
		return false;
	}
	std::cout << "withdrawal:" << withdrawal <<";";
	std::cout << "amount:" << (this->_amount -= withdrawal) << ";";
	std::cout << "nb_withdrawals:" << (++this->_nbWithdrawals) <<";";

	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;
	std::cout << std::endl;
	return true;
 }

//  int  checkAmount( void ) const;
 void Account::displayStatus( void ) const {

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex <<";";
	std::cout << "amount:" << this->_amount <<";";
	std::cout << "deposits:" << this->_nbDeposits <<";";
	std::cout << "withdrawals:" << this->_nbWithdrawals <<";";
	std::cout << std::endl;
 }
