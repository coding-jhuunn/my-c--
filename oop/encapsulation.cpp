#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;  // Private Data Member

public:
    void setBalance(double b) { balance = b; }  // Setter
    double getBalance() { return balance; }  // Getter
};

int main() {
    BankAccount account;
    account.setBalance(5000);  // Set balance
    cout << "Balance: $" << account.getBalance() << endl;  // Get balance
    return 0;
}

//Benefits: Prevents unauthorized access to data.