package Composition;

public class PersonalComputer extends Product {
    private Monitor monitor;
    private Motherboard motherboard;
    private ComputerCase computerCase;

    public PersonalComputer(String model, String manufacturer, Monitor monitor, Motherboard motherBoard, ComputerCase computerCase) {
        super(model, manufacturer);
        this.monitor = monitor;
        this.motherboard = motherBoard;
        this.computerCase = computerCase;
    }

    private void drawLogo() {
        monitor.drawPixelAt(1200, 50, "yellow");
    }

    public void powerOn() {
        computerCase.pressPowerButton();
        drawLogo();
    }

    

    // public Monitor getMonitor() {
    //     return this.monitor;
    // }

    // public void setMonitor(Monitor monitor) {
    //     this.monitor = monitor;
    // }

    // public Motherboard getMotherboard() {
    //     return this.motherboard;
    // }

    // public void setMotherboard(Motherboard motherboard) {
    //     this.motherboard = motherboard;
    // }

    // public ComputerCase getComputerCase() {
    //     return this.computerCase;
    // }

    // public void setComputerCase(ComputerCase computerCase) {
    //     this.computerCase = computerCase;
    // }
    
}
