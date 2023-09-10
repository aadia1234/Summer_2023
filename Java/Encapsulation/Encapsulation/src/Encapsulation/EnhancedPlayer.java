package Encapsulation;

public class EnhancedPlayer {
    private String name, weapon;
    private int health;


    public EnhancedPlayer(String name, String weapon, int health) {
        this.name = name;
        
        if (health <= 0) {
            this.health = 1;
        } else if (health > 100) {
            this.health = 100;
        } else {
            this.health = health;
        }

        this.weapon = weapon;
    }

    public EnhancedPlayer(String name) {
        this(name, "Sword", 100);
    }
    

    public void loseHealth(int damage) {
        health -= damage;

        if (health <= 0) {
            System.out.println("Enhanced player knocked out of the game");
        }
    }

    public void restoreHealth(int extraHealth) {
        health += extraHealth;

        if (health >= 100) {
            System.out.println("Health is restored to 100%");
            health = 100;
        }
    }

    public int healthRemaining() {
        return this.health;
    }

}
