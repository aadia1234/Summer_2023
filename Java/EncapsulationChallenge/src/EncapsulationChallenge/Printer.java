package EncapsulationChallenge;

public class Printer {
    private int tonerLevel, pagesPrinted;
    private boolean duplex;

    public Printer(int tonerLevel, boolean duplex) {
        this.tonerLevel = (tonerLevel >= 0) && (tonerLevel <= 100) ? tonerLevel : -1;
        this.duplex = duplex;
        this.pagesPrinted = 0;
    }

    public int addToner(int tonerAmount) {
        if ((tonerAmount < 0) || (tonerAmount > 100)) { return -1; }
        
        if (((tonerLevel + tonerAmount) < 0) || ((tonerLevel + tonerAmount) > 100)) { return -1; }

        tonerLevel += tonerAmount;
        
        return tonerLevel;
    }

    public int printPages(int pages) {
        int sheets = duplex ? (pages+1)/2 : pages;
        pagesPrinted += sheets;

        if (duplex) { System.out.println("Printer is a duplex"); }
        return sheets;
    }

    public int getPagesPrinted() { return this.pagesPrinted; }
}
