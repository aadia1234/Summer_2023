package BillsBurgerChallenge;

import BillsBurgerChallenge.Items.DeluxeBurger;
import BillsBurgerChallenge.Items.Item;


public class Main {
    public static void main(String[] args) {
        MealOrder meal = new MealOrder();
        meal.setSide(new Item("French fries", "Fries", 'S', 2.30));
        meal.setDrink(new Item("Coke", "Soda", 'L', 1.20));
        meal.addToppings(new Item("Pickles", "topping", 'S', 0.50));
        meal.addToppings(new Item("Salt", "topping", 'S', 0.70));
        meal.addToppings(new Item("Pepper", "topping", 'S', 0.80));
        meal.printItemizedList();

        MealOrder deluxeMeal = new MealOrder();
        deluxeMeal.setBurger(new DeluxeBurger("Deluxe Hamburger", 13.99));
        deluxeMeal.setSide(new Item("French fries", "Fries", 'S', 2.30));
        deluxeMeal.setDrink(new Item("Coke", "Soda", 'L', 1.20));
        deluxeMeal.addToppings(new Item("Pickles", "topping", 'S', 0.50));
        deluxeMeal.addToppings(new Item("Salt", "topping", 'S', 0.70));
        deluxeMeal.addToppings(new Item("Pepper", "topping", 'S', 0.80));
        deluxeMeal.addToppings(new Item("Chili", "topping", 'S', 0.30));
        deluxeMeal.addToppings(new Item("Mayo", "topping", 'S', 1.45));
        deluxeMeal.addToppings(new Item("Lettuce", "topping", 'L', 0.40));
        deluxeMeal.printItemizedList();
    }
}
