package BillsBurgerChallenge;

import BillsBurgerChallenge.Items.Burger;
import BillsBurgerChallenge.Items.Item;

public class MealOrder {
    private Item side, drink;
    private Burger burger;

    public MealOrder(Item side, Item drink, Burger burger) {
        this.side = side;
        this.drink = drink;
        this.burger = burger;
    }

    public MealOrder() {
        this(new Item(), new Item(), new Burger("Hamburger", 5.75));
    }

    public void addToppings(Item topping) {
        burger.addToppings(topping);
    }

    public void setDrinkSize(char size) {
        drink.setSize(size);
    }
    
    public void printItemizedList() {
        System.out.println("=".repeat(20));
        printTotal();
        burger.printItem();
        side.printItem();
        drink.printItem();
        System.out.println("=".repeat(20));
    }

    public void printTotal() {
        System.out.printf("Total cost: $%.2f\n", burger.getAdjustedPrice());
    }


    public Item getSide() {
        return this.side;
    }

    public void setSide(Item side) {
        this.side = side;
    }

    public Item getDrink() {
        return this.drink;
    }

    public void setDrink(Item drink) {
        this.drink = drink;
    }

    public Burger getBurger() {
        return this.burger;
    }

    public void setBurger(Burger burger) {
        this.burger = burger;
    }
}
