#include <sstream>
#include <vector>
#include<iomanip>
#include <map>
#include <string>
#include <stdlib.h> 
#include "Customer.h"
#include "Account.h"

using namespace std;

int main()
{
    string str, accstr;
    vector<Customer> customerVector;
    vector<Account> accountVector;
    Customer cust;
    Account acc;
    int choice;
    string add, name, mobile;
    map<string, vector<Account>> customerAccountSummaryMap;
    map<string, vector<Account>>::iterator mit;
    bool delacc;

    do
    {
        cout << "1.Add Customer Details" << endl;
        cout << "2.Add Account Details" << endl;
        cout << "3.Display Customer Details" << endl;
        cout << "4.Display Account Details" << endl;
        cout << "5.Customer and Number of accounts" << endl;
        cout << "6.Delete the account based on status" << endl;
        cout << "7.Update the customer mobile number" << endl;
        cout << "8.Search customer by mobile number" << endl;
        cout << "9.Find customer holding more accounts" << endl;
        cout << "Enter your choice" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            do {
                cout <<"Enter Customer Details\n";
                cin >> str;
                stringstream ss(str);
                string t;
                string cs[6];
                int j = 0;
                while (getline(ss, t, ','))
                {
                    cs[j] = t;
                    j++;
                }

                Customer customer = Customer(stoi(cs[0]), cs[1], cs[2], cs[3], cs[4], cs[5]);
                customerVector.push_back(customer);
                printf("Customer Details added successfully\n");
                cout <<"Do you want to add another customer details? [Yes/No]: "<<endl;
                cin >> add;
            } while (add == "Yes");
            break;
        case 2:
            do {
                cout <<"Enter Account Details\n";
                cin >> accstr;
                string t;
                string cs[6];
                int i = 0;
                stringstream ss(accstr);
                while (getline(ss, t, ','))
                {
                    cs[i] = t;
                    i++;
                }
                Account account = Account(cs[0], cs[1], cs[2], stod(cs[3]), cs[4], cs[5]);
                accountVector.push_back(account);
                printf("Account Details added successfully\n");
                cout <<"Do you want to add another account details? [Yes/No]: "<<endl;
                cin >> add;
            } while (add == "Yes");
            break;
        case 3:
            cust.display(customerVector);
            break;
        case 4:
            acc.display(accountVector);
            break;
        case 5:
            customerAccountSummaryMap = acc.getCustomerAccountMap(accountVector);

            cout << "CustomerName " << setw(15) << "No of Accounts" << endl;
            for (mit = customerAccountSummaryMap.begin(); mit != customerAccountSummaryMap.end(); ++mit) 
            {
                int noOfAccounts = mit->second.size();
                cout << mit->first.c_str() << right << setw(15) << noOfAccounts << endl;
            }
            break;
        case 6:
            accountVector = acc.deleteAccount(accountVector);
            break;
        case 7:
            cout <<"Enter the customer name\n";
            cin >> name;
            cout <<"Enter the new mobile number\n";
            cin >> mobile;
            customerVector = cust.updateCustomerMobileNumber(customerVector, name, mobile);
            break;
        case 8:
            cout << "Enter the mobile number\n";
            cin >> mobile;
            cust.searchCustomerByMobileNumber(customerVector, mobile);
            break;
        case 9:
            cout << "Customers holding more accounts:\n";
            acc.findCustomer(customerAccountSummaryMap);
            break;
        }
    } while (choice <= 9);
}