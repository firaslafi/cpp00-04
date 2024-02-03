/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 02:28:30 by flafi             #+#    #+#             */
/*   Updated: 2024/02/02 23:15:36 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount= 0;
int Account::_totalNbWithdrawals = 0;
int Account::_totalNbDeposits= 0;

Account::Account(int initial_deposit)
{
	_nbDeposits = 0;
	_nbWithdrawals = 0;
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _totalAmount += _amount;
    _nbAccounts++;
    
    this->_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
              << "amount:" << _amount << ";"
              << "created" << std::endl;
}

Account::~Account(void)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
              << "amount:" << _amount << ";"
              << "closed" << std::endl;
    _nbAccounts--;
}


// general method
void Account::_displayTimestamp(void)
{
    // Get current time
    std::time_t currentTime = std::time(nullptr);

    // Convert the current time to a tm structure
    std::tm* timeInfo = std::localtime(&currentTime);

    std::cout << "[" <<(timeInfo->tm_year + 1900)
              << std::setw(2) << std::setfill('0') << (timeInfo->tm_mday)
              << std::setw(2) << std::setfill('0') << (timeInfo->tm_mon + 1) 
              << "_"
              << std::setw(2) << std::setfill('0') << (timeInfo->tm_hour)
              << std::setw(2) << std::setfill('0') << (timeInfo->tm_min)
              << std::setw(2) << std::setfill('0') << (timeInfo->tm_sec)
              << "] ";

}
void    Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";"
                << "total:" << getTotalAmount() << ";"
                << "deposits:" << getNbDeposits() << ";"
                << "withdrawals:" << getNbWithdrawals() << std::endl;
}
// methods

void	Account::makeDeposit( int deposit )
{
    _displayTimestamp();
    _nbDeposits++;
    _totalNbDeposits++;
    _totalAmount += deposit;
    std::cout << "index:" << _accountIndex << ";"
                << "p_amount:" << _amount << ";";
    _amount += deposit;
    std::cout << "deposit:" << deposit << ";"
                << "amount:" << _amount << ";"
                << "nb_deposits:" << _nbDeposits << std::endl;
}
bool	Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    
    std::cout << "index:" << _accountIndex << ";"
            << "p_amount:" << _amount << ";"
            << "withdrawal:";
    if (withdrawal > checkAmount())
    {
        std::cout << "refused" << std::endl;
        return (false);
    }
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    _totalAmount -= withdrawal;
    _amount -= withdrawal;
    std::cout << withdrawal << ";";
    std::cout << "amount:" << _amount << ";"
                << "nb_withdrawals:" << _nbWithdrawals << std::endl; // here
    return (true);
}
int		Account::checkAmount( void ) const
{
    return (_amount);
}
void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
                << "amount:" << _amount << ";"
                << "deposits:" << _nbDeposits << ";"
                << "withdrawals:" << _nbWithdrawals << std::endl;
}
// getters
int Account::getNbAccounts(void)
{
    return (_nbAccounts);
}
int Account::getTotalAmount(void)
{
    return (_totalAmount);
}
int Account::getNbDeposits(void)
{
    return (_totalNbDeposits);
}
int Account::getNbWithdrawals(void)
{
    return (_totalNbWithdrawals);
}
