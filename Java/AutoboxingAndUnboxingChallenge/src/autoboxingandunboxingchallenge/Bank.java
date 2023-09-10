package autoboxingandunboxingchallenge;

import java.util.ArrayList;

public class Bank {
    private String name;
    private ArrayList<Customer> customers;

    public Bank(String name) {
        this.name = name;
        this.customers = new ArrayList<>();
    }

    public Bank() {
        this("NO NAME");
    }

    public boolean addCustomer(Customer customer) {
        return !customers.contains(customer) && customers.add(customer);
    }

    public boolean addTransaction(Customer customer, double amount) {
        return customer.getTransactions().add(amount);
    }

    public void printCustomers() {
        for (var customer : customers) {
            System.out.println("Name: " + customer.getName() + "");
            for (var transactionAmount : customer.getTransactions()) {
                System.out.println("\tAmount: " + transactionAmount);
            }
        }
    }

    public String getName() { return this.name; }

    public ArrayList<Customer> getCustomers() { return this.customers; }

    public void setName(String name) { this.name = name; }

}
