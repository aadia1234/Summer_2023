package linkedlistchallenge;

public class Town {
    private String name;
    private double distanceFromSydney;

    public Town(String name, double distanceToSydney) {
        this.name = name;
        this.distanceFromSydney = distanceToSydney;
    }

    public String getName() { return this.name; }

    public double getDistanceFromSydney() { return this.distanceFromSydney; }
}
