public class BankAccount {
    private long accountNumber;
    private double accountBalance;
    private String customerName, email, phoneNumber;

    public BankAccount(long accountNumber, double accountBalance, String customerName, String email, String phoneNumber) {
        this.accountNumber = accountNumber;
        this.accountBalance = accountBalance;
        this.customerName = customerName;
        this.email = email;
        this.phoneNumber = phoneNumber;
    }


    public boolean withdraw(double amount) {
        if (amount <= this.accountBalance) {
            this.accountBalance -= amount;
            return true;
        } else {
            return false;
        }
    }

    public void deposit(double amount) {
        this.accountBalance += amount;
    }


    public void setAccountNumber(long accountNumber) { this.accountNumber = accountNumber; }

    public void setAccountBalance(double accountBalance) { this.accountBalance = accountBalance; }

    public void setCustomerName(String customerName) { this.customerName = customerName; }

    public void setEmail(String email) { this.email = email; }

    public void setPhoneNumber(String phoneNumber) { this.phoneNumber = phoneNumber; }
    

    public long getAccountNumber() { return this.accountNumber; }
    
    public double getAccountBalance() { return this.accountBalance; }
    
    public String getCustomerName() { return this.customerName; }
    
    public String getEmail() { return this.email; }
    
    public String getPhoneNumber() { return this.phoneNumber; }

}
