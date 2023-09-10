package Inheritance;

public class Employee extends Worker {
    protected long employeeID;
    protected String hireDate;


    public Employee(String name, String birthDate, long employeeID, String hireDate) {
        super(name, birthDate, hireDate);
        this.employeeID = employeeID;
        this.hireDate = hireDate;
    }

    public Employee() {
        this("test", "01/01/2000", 1234567890, "01/01/2023");
    }

    

    public long getEmployeeID() {
        return this.employeeID;
    }

    public void setEmployeeID(long employeeID) {
        this.employeeID = employeeID;
    }

    public String getHireDate() {
        return this.hireDate;
    }

    public void setHireDate(String hireDate) {
        this.hireDate = hireDate;
    }

    
}
