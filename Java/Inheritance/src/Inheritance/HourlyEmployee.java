package Inheritance;

public class HourlyEmployee extends Employee {
    private double hourlyPayRate;


    public HourlyEmployee(double hourlyPayRate) {
        this.hourlyPayRate = hourlyPayRate;
    }

    public HourlyEmployee() {
        this(10.0);
    }


    public void getDoublePay() {
        this.setHourlyPayRate(hourlyPayRate * 2);
    }


    public double getHourlyPayRate() {
        return this.hourlyPayRate;
    }

    public void setHourlyPayRate(double hourlyPayRate) {
        this.hourlyPayRate = hourlyPayRate;
    }

}
