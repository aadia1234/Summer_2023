package BillsBurgerChallenge.Items;

public class Item {
    protected String name, type;
    protected char size;
    protected double price;

    public Item(String name, String type, char size, double price) {
        this.name = name;
        this.type = type;
        this.size = size;
        this.price = price;
    }

    public Item() {
        this(null, null, ' ', 0.0);
    }

    public double getBasePrice() { return this.price; }

    public double getAdjustedPrice() { 
        return switch (size) {
            case 'S' -> this.price * 1.2;
            case 'M' -> this.price * 1.5;
            case 'L' -> this.price * 1.8;
            default -> this.price;
        };
    }

    public void printItem() { System.out.printf("Name: %s, Type: %s, Size: %s, Price: %.2f\n", name, type, size, getAdjustedPrice()); }


    public String getName() {
        return this.name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getType() {
        return this.type;
    }

    public void setType(String type) {
        this.type = type;
    }

    public char getSize() {
        return this.size;
    }

    public void setSize(char size) {
        this.size = size;
    }

    public double getPrice() {
        return this.price;
    }

    public void setPrice(double price) {
        this.price = price;
    }
}