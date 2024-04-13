public class Part extends Component{
    private CatEntry entry;

    public Part(CatEntry entry) {
        this.entry = entry;
    }

    public String getName()
    {
        return this.entry.getName();
    }

    public int getNumber()
    {
        return this.entry.getNumber();
    }

    public double getCost()
    {
        return this.entry.getCost();
    }

    public String toString()
    {
        return "Part{Name : "+getName()
                +", Number :"+getNumber()
                +", Cost :"+getCost()
                +"}";
    }
}
