package BillsBurgerChallenge.Items;

public class DeluxeBurger extends Burger {
    protected Item extra4, extra5;

    public DeluxeBurger(String type, double price) {
        super(type, price);
        extra4 = new Item();
        extra5 = new Item();
    }

    @Override
    public void addToppings(Item topping) {
        if (extra1.name == null) {
            extra1 = topping;
        } else if (extra2.name == null) {
            extra2 = topping;
        } else if (extra3.name == null) {
            extra3 = topping;
        } else if (extra4.name == null) {
            extra4 = topping;
        } else if (extra5.name == null) {
            extra5 = topping;
        } else {
            System.out.println("Sorry, you already have three toppings added to your burger");
        }
    }

    @Override
    public double getAdjustedPrice() {
        return super.price;
    }
}