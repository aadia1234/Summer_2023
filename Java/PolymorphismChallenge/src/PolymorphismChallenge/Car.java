package PolymorphismChallenge;

public class Car {
    private String description;

    public Car(String description) { this.description = description; }

    public void startEngine() {
        System.out.println("Car engine started");
        runEngine();
    }

    public void drive() {
        System.out.println("Car driving, type: " + this.getClass().getSimpleName());
    }

    protected void runEngine() {
        System.out.println("Engine running");
    }

    public void setDescription(String description) { this.description = description; }

    public String getDescription() { return this.description; }
}

class GasPoweredCar extends Car {
    private double avgKmPerLiter;
    private int cylinders;

    public GasPoweredCar(double avgKmPerLiter, int cylinders, String description) {
        super(description);
        this.avgKmPerLiter = avgKmPerLiter;
        this.cylinders = cylinders;
    }

    @Override
    public void startEngine() {
        System.out.println("VRRROM VRROOM VRRRRROM");
        super.startEngine();
    }

    public double getAvgKmPerLiter() {
        return this.avgKmPerLiter;
    }

    public void setAvgKmPerLiter(double avgKmPerLiter) {
        this.avgKmPerLiter = avgKmPerLiter;
    }

    public int getCylinders() {
        return this.cylinders;
    }

    public void setCylinders(int cylinders) {
        this.cylinders = cylinders;
    }
}

class ElectricCar extends Car {
    private double avgKmPerCharge;
    private int batterySize;

    public ElectricCar(double avgKmPerCharge, int batterySize, String description) {
        super(description);
        this.avgKmPerCharge = avgKmPerCharge;
        this.batterySize = batterySize;
    }

    @Override
    public void startEngine() {
        System.out.println("----------------");
        super.startEngine();
    }

    public double getAvgKmPerCharge() {
        return this.avgKmPerCharge;
    }

    public void setAvgKmPerCharge(double avgKmPerCharge) {
        this.avgKmPerCharge = avgKmPerCharge;
    }

    public int getBatterySize() {
        return this.batterySize;
    }

    public void setBatterySize(int batterySize) {
        this.batterySize = batterySize;
    }
}

class HybridCar extends Car {
    private double avgKmPerLiter;
    private int batterySize, cylinders;

    public HybridCar(double avgKmPerLiter, int batterySize, int cylinders, String description) {
        super(description);
        this.avgKmPerLiter = avgKmPerLiter;
        this.batterySize = batterySize;
        this.cylinders = cylinders;
    }

    @Override
    public void startEngine() {
        System.out.println("VRRROM ---------- VRRRRROM");
        super.startEngine();
    }

    public double getAvgKmPerLiter() {
        return this.avgKmPerLiter;
    }

    public void setAvgKmPerLiter(double avgKmPerLiter) {
        this.avgKmPerLiter = avgKmPerLiter;
    }

    public int getBatterySize() {
        return this.batterySize;
    }

    public void setBatterySize(int batterySize) {
        this.batterySize = batterySize;
    }

    public int getCylinders() {
        return this.cylinders;
    }

    public void setCylinders(int cylinders) {
        this.cylinders = cylinders;
    }
}
