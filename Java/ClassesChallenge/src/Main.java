public class Main {
    public static void main(String[] args) {
        BankAccount bankAccount = new BankAccount(1_234_567_890, 1_000_000, "Aadi Anand", "example@gmail.com", "+1 1234567890");

        System.out.println(bankAccount.getAccountBalance());
        System.out.println(bankAccount.getAccountNumber());
        System.out.println(bankAccount.getCustomerName());
        System.out.println(bankAccount.getEmail());
        System.out.println(bankAccount.getPhoneNumber());

        System.out.println("============================");
    
        bankAccount.deposit(100);
        System.out.println(bankAccount.withdraw(1_000_000_000));
        System.out.println(bankAccount.withdraw(500_000));
        System.out.println(bankAccount.getAccountBalance());

    }
}
