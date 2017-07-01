#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include <ctime>
#include <iostream>

class Account {

public:

 typedef Account  t;

//  static int getNbAccounts( void );
//  static int getTotalAmount( void );
//  static int getNbDeposits( void );
//  static int getNbWithdrawals( void );
 static void displayAccountsInfos( void );

 Account( int initial_deposit );
 ~Account( void );

 void makeDeposit( int deposit );
 bool makeWithdrawal( int withdrawal );
//  int  checkAmount( void ) const;
 void displayStatus( void ) const;


private:

 static int _nbAccounts; // количество акаунтов
 static int _totalAmount; // общая сумма
 static int _totalNbDeposits; // количество депозитов
 static int _totalNbWithdrawals; // изятия

 static void _displayTimestamp( void );

 int    _accountIndex; // индекс акаунта
 int    _amount; // сумма
 int    _nbDeposits; // количество депозитов
 int    _nbWithdrawals; // изято

//  Account( void );
};

#endif