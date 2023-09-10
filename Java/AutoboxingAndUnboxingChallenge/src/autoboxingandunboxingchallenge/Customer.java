package autoboxingandunboxingchallenge;

import java.util.ArrayList;

public class Customer {
    private String name;
    private ArrayList<Double> transactions;

    public Customer(String name) {
        this.name = name;
        this.transactions = new ArrayList<>();
    }

    public Customer() {
        this("NO NAME");
    }

    public String getName() { return this.name; }

    public ArrayList<Double> getTransactions() { return this.transactions; }

    public void setName(String name) { this.name = name; }

}
