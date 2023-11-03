#include <iostream>
using namespace std;
class Account {
public:
    int acc_no;
    double balance;
    int branch_code;

    
    void setdata(int accNo, double initialBalance, int branchCode) {
        acc_no = accNo;
        balance = initialBalance;
        branch_code = branchCode;
    }

    void displayAccount() {
        cout << "Account Number: " << acc_no << endl;
        cout << "Balance: $" << balance <<endl;
        cout << "Branch Code: " << branch_code << endl;
    }
};

int main() {
    
    Account myAccount;
    cout << "Janvi k. Chavda" << endl;
    cout << "220130318090" << endl;
     myAccount.setdata(1001, 5000.0, 1234);
    cout << "Account Information:\n";
    myAccount.displayAccount();

    return 0;
}
