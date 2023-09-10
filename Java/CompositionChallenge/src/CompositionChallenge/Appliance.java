package CompositionChallenge;

public class Appliance {
    protected boolean hasWorkToDo;

    public void setHasWorkToDo(boolean hasWorkToDo) { this.hasWorkToDo = hasWorkToDo; }
    
    public boolean getHasWorkToDo() { return this.hasWorkToDo; }
}

class Refrigerator extends Appliance {
    
    public void orderFood() {
        if (hasWorkToDo) {
            System.out.println("Food is being ordered");
            hasWorkToDo = false;
        }
    }

}

class DishWasher extends Appliance {

    public void doDishes() {
        if (hasWorkToDo) {
            System.out.println("Dishes are being washed");
            hasWorkToDo = false;
        }
    }

}

class CoffeeMaker extends Appliance {

    public void brewCoffee() {
        if (hasWorkToDo) {
            System.out.println("Coffee is being brewed");
            hasWorkToDo = false;
        }
    }

}