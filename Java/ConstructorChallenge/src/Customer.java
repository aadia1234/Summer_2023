public class Customer {
    private String name, email;
    private long creditLimit;

    public Customer(String name, String email, long creditLimit) {
        this.name = name;
        this.email = email;
        this.creditLimit = creditLimit;
    }

    public Customer(String name, String email) {
        this(name, email, 0);
    }

    public Customer() {
        this("No Name", "example@gmail.com", 0);
    }
    

    public void setName(String name) { this.name = name; }

    public void setEmail(String email) { this.email = email; }

    public void setCreditLimit(long creditLimit) { this.creditLimit = creditLimit; }


    public String getName() { return this.name; }

    public String getEmail() { return this.email; }

    public long getCreditLimit() { return this.creditLimit; }

}
