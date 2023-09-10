package autoboxingandunboxingchallenge;

public class Main {
    public static void main(String[] args) {
        Bank bank = new Bank("Bank of America");
        Customer jeff = new Customer("Jeff Bezos");
        Customer elon = new Customer("Elon Musk");
        bank.addCustomer(jeff);
        bank.addTransaction(jeff, 45.50);
        bank.addTransaction(jeff, -100.50);
        bank.addTransaction(jeff, 60.90);

        bank.addCustomer(elon);
        bank.addTransaction(elon, -20);
        bank.addTransaction(elon, 1000.99);
        bank.addTransaction(elon, -32.40);
        bank.printCustomers();
    }
}
