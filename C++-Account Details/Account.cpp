    #include "Account.h"
    #include<iomanip>

    Account::Account() {}

    Account::Account(string account_number, string account_type, string branch, 
                    double account_balance, string account_status, string customer_name) {
        this->account_number = account_number;
        this->account_type = account_type;
        this->branch = branch;
        this->account_balance = account_balance;
        this->account_status = account_status;
        this->customer_name = customer_name;
    }

    string Account::getAccount_number() { 
        return this->account_number; 
    }

    string Account::getAccount_type() { 
        return this->account_type; 
    }

    string Account::getBranch() { 
        return this->branch; 
    }

    double Account::getAccount_balance() { 
        return this->account_balance; 
    }

    string Account::getAccount_status() { 
        return this->account_status; 
    }

    string Account::getCustomerName() { 
        return this->customer_name; 
    }

    void Account::setAccount_number(string account_number) { 
        this->account_number = account_number; 
    }

    void Account::setAccount_type(string account_type) { 
        this->account_type = account_type; 
    }

    void Account::setBranch(string branch) { 
        this->branch = branch; 
    }

    void Account::setAccount_balance(double account_balance) { 
        this->account_balance = account_balance; 
    }

    void Account::setAccount_status(string account_status) { 
        this->account_status = account_status; 
    }

    void Account::setCustomerName(string customer_name) { 
        this->customer_name = customer_name; 
    }

    void Account::display(vector<Account> accountVector) {
        cout << "Account Details\n";
        cout << setw(25) << left << "Account Number" << setw(25) << left << "Account Type" 
            << setw(25) << left << "Branch" << setw(25) << left << "Account Balance" 
            << setw(25) << left << "Account Status" << setw(25) << left << "Customer Name" << endl;
        
        for (Account account : accountVector) {
            cout << setw(25) << left << account.account_number << setw(25) << left << account.account_type 
                << setw(25) << left << account.branch << setw(25) << left << account.account_balance 
                << setw(25) << left << account.account_status << setw(25) << left << account.customer_name << endl;
        }
    }

    map<string, vector<Account> > Account::getCustomerAccountMap(vector<Account> accountVector) {
        map<string, vector<Account> > customerAccountMap;
        
        for (Account account : accountVector) {
            if (customerAccountMap.find(account.getCustomerName()) == customerAccountMap.end()) {
                vector<Account> temp;
                temp.push_back(account);
                customerAccountMap.insert(pair<string, vector<Account> >(account.getCustomerName(), temp));
            } else {
                map<string, vector<Account> >::iterator itr = customerAccountMap.find(account.getCustomerName());
                if (itr != customerAccountMap.end()) {
                    itr->second.push_back(account);
                }
            }
        }
        return customerAccountMap;
    }

    void Account::findCustomer(map<string, vector<Account> > customerAccountSummaryMap) {
        cout << "Customers holding more accounts:\n";
        for (map<string, vector<Account> >::iterator itr = customerAccountSummaryMap.begin(); 
            itr != customerAccountSummaryMap.end(); ++itr) {
            if (itr->second.size() > 1) {
                cout << itr->first << endl;
            }
        }
    }

    vector<Account> Account::deleteAccount(vector<Account> accountVector) {
        vector<Account> updatedAccounts;
        for (Account account : accountVector) {
            if (account.getAccount_status() != "InActive") {
                updatedAccounts.push_back(account);
            }
        }
        return updatedAccounts;
    }
