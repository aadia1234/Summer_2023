package Inheritance;

public class SalariedEmployee extends Employee {
    
    private double annualSalary;
    private boolean isRetired;


    public SalariedEmployee(double annualSalary, boolean isRetired) {
        this.annualSalary = annualSalary;
        this.isRetired = isRetired;
    }

    public SalariedEmployee() {
        this(0, false);
    }

    public void retire() {
        this.isRetired = true;
        this.annualSalary = 0.0;
    }


    public double getAnnualSalary() {
        return this.annualSalary;
    }

    public void setAnnualSalary(double annualSalary) {
        this.annualSalary = annualSalary;
    }

    public boolean isIsRetired() {
        return this.isRetired;
    }

    public boolean getIsRetired() {
        return this.isRetired;
    }

    public void setIsRetired(boolean isRetired) {
        this.isRetired = isRetired;
    }

}