package Inheritance;

public class Worker {
    public static int currentYear = 2023;
    protected String name, birthDate, endDate;

    public Worker(String name, String birthDate, String endDate) {
        this.name = name;
        this.birthDate = birthDate;
        this.endDate = endDate;
    }

    public Worker() {
        this("No Name", "01/01/2005", "12/31/2023");
    }


    public int getAge() {
        int length = this.birthDate.length();
        return Worker.currentYear - Integer.parseInt(this.birthDate.substring(length-4, length));
    }
    
    
    public double collectPay() {
        return 0.0;
    }

    public void terminate(String endDate) {
        this.endDate = endDate;
    }


    @Override
    public String toString() {
        return "{" +
            " name='" + getName() + "'" +
            ", birthDate='" + getBirthDate() + "'" +
            ", endDate='" + getEndDate() + "'" +
            "}";
    }
    



    public String getName() {
        return this.name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getBirthDate() {
        return this.birthDate;
    }

    public void setBirthDate(String birthDate) {
        this.birthDate = birthDate;
    }

    public String getEndDate() {
        return this.endDate;
    }

    public void setEndDate(String endDate) {
        this.endDate = endDate;
    }

}
