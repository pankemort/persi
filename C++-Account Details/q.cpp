 Account Details

Given the customer details, get the customer account and transaction details in the console and implement the following functions using it.
i. Add the customer and account details to the vector
ii. Display the customer details
iii. Display the count of customer account details
iv. Display the name of the customer who holds more than 1 account in the bank
v. Search the customer based on account number.
vi. Delete the inactive account holding customer and account details

Write a program to perform the above functions. 

The header file Customer.h has been created with the following attributes:
DataType    	Name
int    	id
string    	name
string    	username
string    	password
string    	mobile_number
string    	email
-
The following methods are declared in this file. And also required getters and setters are also declared in this file

Member Functions	 Description
Customer()	A Default Constructor
Customer(int id, string name, string username, string password, string mobile_number, string email)	A Parameterized Constructor
void display(vector<Customer> customerVector)	This function is used to display the customer details in specified format.
Use the below lines for formatting:
cout << "Customer Details\n";
    cout << setw(25) << left << "Name" << setw(25) << left << "UserName" << setw(25) << left << "Password" << setw(25) << left << "Mobile_Number" << setw(25) << left << "Email" << endl;
void searchCustomerByMobileNumber(vector<Customer> customerVector, string mobile)	This function is used to search for a customer based on mobile number and display the searched 
customer details in the following format.
“Customer Not Found” should be displayed if the searched customer is not found
Use the below line for formatting:
cout << setw(25) << left << "Name" << setw(25) << left << "UserName" << setw(25) << left << "Password" << setw(25) << left << "Mobile_Number" << setw(25) << left << "Email" << endl;
vector<Customer> updateCustomerMobileNumber(vector<Customer> customerVector, string cust_name, string new_mobile)
This function is used to update the mobile number and display the updated customer details in the following format

The class Customer.cpp has been created. Define all the above member functions inside this class.

The header file Account.h has been created with the following attributes
DataType    	Name
string    	account_number
string    	account_type
string    	branch
double    	account_balance
string    	account_status
string	customer_name

The following methods are declared in this file. And also required getters and setters are also declared in this file
Member function	Description
Account()	A default constructor
Account(string account_number, string account_type,string branch, double account_balance,string account_status, string customer_name)	A parameterized constructor
void Account::display(vector<Account> accountVector)	This function is used to display the account details in specified format.
Use the below lines for formatting:
cout << "Account Details\n";
    cout << setw(25) << left << "Account Number" << setw(25) << left << "Account Type" << setw(25) << left << "Branch" << setw(25) << left << "Account Balance" << setw(25) << left << "Account Status" << setw(25) << left << "Customer Name" << endl;
map<string, vector<Account> > getCustomerAccountMap(vector<Account> accountVector)	This function accepts the account details and display the customer account details summary in a specified format
void findCustomer(map<string, vector<Account>> customerAccountSummaryMap)	This function accepts the customer account detail summary map as argument and display the name of the customer who holds more than one account.
vector<Account> deleteAccount(vector<Account> accountVector)	This function accepts the account details and delete the details of the account which got the account_status as “Inactive”.

The class Account.cpp has been created. Define all the above member functions inside this class.

The class Main.cpp has been created and in the main function, read all the inputs, form a customer account summary map and display it. 

Sample Input And Output:

1.Add Customer Details
2.Add Account Details
3.Display Customer Details
4.Display Account Details
5.Customer and Number of accounts
6.Delete the account based on status
7.Update the customer mobile number
8.Search customer by mobile number
9.Find customer holding more accounts
Enter your choice
1
Enter Customer Details
1,AAA,AAA123,123,9282392939,aaa@gmail.com
Customer Details added successfully
Do you want to add another customer details? [Yes/No]:
Yes
Enter Customer Details
2,BBB,BBB123,123,9282390939,bbb@gmail.com
Customer Details added successfully
Do you want to add another customer details? [Yes/No]:
No
1.Add Customer Details
2.Add Account Details
3.Display Customer Details
4.Display Account Details
5.Customer and Number of accounts
6.Delete the account based on status
7.Update the customer mobile number
8.Search customer by mobile number
9.Find customer holding more accounts
Enter your choice
2
Enter Account Details
152987620187398,Savings,Chennai,1000000,Active,AAA
Account Details added successfully
Do you want to add another account details? [Yes/No]:
Yes
Enter Account Details
148634897015624,Current,Coimbatore,2000000,InActive,BBB
Account Details added successfully
Do you want to add another account details? [Yes/No]:
No
1.Add Customer Details
2.Add Account Details
3.Display Customer Details
4.Display Account Details
5.Customer and Number of accounts
6.Delete the account based on status
7.Update the customer mobile number
8.Search customer by mobile number
9.Find customer holding more accounts
Enter your choice
3
Customer Details
Name   UserName    Password    Mobile_Number      Email
AAA      AAA123        123               9282392939         aaa@gmail.com
BBB      BBB123         123               9282390939         bbb@gmail.com
1.Add Customer Details
2.Add Account Details
3.Display Customer Details
4.Display Account Details
5.Customer and Number of accounts
6.Delete the account based on status
7.Update the customer mobile number
8.Search customer by mobile number
9.Find customer holding more accounts
Enter your choice
4
Account Details
Account Number     Account Type   Branch          Account Balance      Account Status    Customer Name
152987620187398    Savings          Chennai          1000000                     Active                 AAA
148634897015624    Current          Coimbatore     2000000                    InActive              BBB
1.Add Customer Details
2.Add Account Details
3.Display Customer Details
4.Display Account Details
5.Customer and Number of accounts
6.Delete the account based on status
7.Update the customer mobile number
8.Search customer by mobile number
9.Find customer holding more accounts
Enter your choice
5
CustomerName  No of Accounts
AAA                        1
BBB                        1
1.Add Customer Details
2.Add Account Details
3.Display Customer Details
4.Display Account Details
5.Customer and Number of accounts
6.Delete the account based on status
7.Update the customer mobile number
8.Search customer by mobile number
9.Find customer holding more accounts
Enter your choice
6
InActive accounts deleted successfully.
1.Add Customer Details
2.Add Account Details
3.Display Customer Details
4.Display Account Details
5.Customer and Number of accounts
6.Delete the account based on status
7.Update the customer mobile number
8.Search customer by mobile number
9.Find customer holding more accounts
Enter your choice
7
Enter the customer name
AAA
Enter the new mobile number
9634852017
Mobile number updated successfully.
Customer Details
Name   UserName     Password    Mobile_Number     Email
AAA      AAA123           123             9634852017         aaa@gmail.com
1.Add Customer Details
2.Add Account Details
3.Display Customer Details
4.Display Account Details
5.Customer and Number of accounts
6.Delete the account based on status
7.Update the customer mobile number
8.Search customer by mobile number
9.Find customer holding more accounts
Enter your choice
8
Enter the mobile number
9634852017
Name     UserName    Password      Mobile_Number       Email
AAA       AAA123         123                 9634852017             aaa@gmail.com
1.Add Customer Details
2.Add Account Details
3.Display Customer Details
4.Display Account Details
5.Customer and Number of accounts
6.Delete the account based on status
7.Update the customer mobile number
8.Search customer by mobile number
9.Find customer holding more accounts
Enter your choice
9
Customers holding more accounts:
AAA
BBB
1.Add Customer Details
2.Add Account Details
3.Display Customer Details
4.Display Account Details
5.Customer and Number of accounts
6.Delete the account based on status
7.Update the customer mobile number
8.Search customer by mobile number
9.Find customer holding more accounts
10.Exit
Enter your choice
10
Thank You!!!