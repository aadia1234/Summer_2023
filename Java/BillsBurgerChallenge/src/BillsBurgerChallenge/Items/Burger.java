package BillsBurgerChallenge.Items;

public class Burger extends Item {
    protected Item extra1, extra2, extra3;

    public Burger(String type, double price) {
        super("Burger", type, 'M', price);
        extra1 = new Item();
        extra2 = new Item();
        extra3 = new Item();
    }

    public void addToppings(Item topping) {
        if (extra1.name == null) {
            extra1 = topping;
        } else if (extra2.name == null) {
            extra2 = topping;
        } else if (extra3.name == null) {
            extra3 = topping;
        } else {
            System.out.println("Sorry, you already have three toppings added to your burger");
        }
    }

    @Override
    public void printItem() {
        super.printItem();
        System.out.print("\t");
        extra1.printItem();
        System.out.print("\t");
        extra2.printItem();
        System.out.print("\t");
        extra3.printItem();
    }

    @Override
    public double getAdjustedPrice() {
        return super.getAdjustedPrice() + extra1.getAdjustedPrice() + extra2.getAdjustedPrice() + extra3.getAdjustedPrice();
    }
}