package CompositionChallenge;

public class SmartKitchen {
    private CoffeeMaker brewMaster;
    private DishWasher dishWasher;
    private Refrigerator iceBox;

    public SmartKitchen() {
        this.brewMaster = new CoffeeMaker();
        this.dishWasher = new DishWasher();
        this.iceBox = new Refrigerator();
    }

    public void setKitchenState(boolean coffeeState, boolean dishWasherState, boolean iceBoxState) {
        brewMaster.setHasWorkToDo(coffeeState);
        dishWasher.setHasWorkToDo(dishWasherState);
        iceBox.setHasWorkToDo(iceBoxState);
    }

    public void doKitchenWork() {
        brewMaster.brewCoffee();
        iceBox.orderFood();
        dishWasher.doDishes();
    }

    public void addWater() {
        brewMaster.setHasWorkToDo(true);
    }

    public void pourMilk() {
        iceBox.setHasWorkToDo(true);
    }

    public void loadDishWasher() {
        dishWasher.setHasWorkToDo(true);
    }


    public CoffeeMaker getBrewMaster() {
        return this.brewMaster;
    }

    public void setBrewMaster(CoffeeMaker brewMaster) {
        this.brewMaster = brewMaster;
    }

    public DishWasher getDishWasher() {
        return this.dishWasher;
    }

    public void setDishWasher(DishWasher dishWasher) {
        this.dishWasher = dishWasher;
    }

    public Refrigerator getIceBox() {
        return this.iceBox;
    }

    public void setIceBox(Refrigerator iceBox) {
        this.iceBox = iceBox;
    }
    
}
