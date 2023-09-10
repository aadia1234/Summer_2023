package Composition;

public class Main {
    public static void main(String[] args) {
        ComputerCase myCase = new ComputerCase("2208", "Dell", "240");
        Monitor myMonitor = new Monitor("27inch Beast", "Acer", 27, "2540 x 1440");
        Motherboard myMotherboard = new Motherboard("BJ-200", "Asus", 4, 6, "v2.44");
        PersonalComputer myPC = new PersonalComputer(myCase.getModel(), myCase.getManufacturer(), myMonitor, myMotherboard, myCase);

        // myPC.getMonitor().drawPixelAt(10, 10, "red");
        // myPC.getMotherboard().loadProgram("Windows 11 OS");
        // myPC.getComputerCase().pressPowerButton();

        myPC.powerOn();
    }
}
