import java.util.ArrayList;

public class Assembly extends Component {

    private ArrayList<Component> compList = new ArrayList<Component>();
    @Override
    public double getCost() {
        double subTotal = 0.0;
        for(Component c: compList)
        {
            subTotal = subTotal+c.getCost();
        }
        return subTotal;
    }

    @Override
    public String toString() {
        String desc = null;
        for(Component c : compList)
        {
            desc = desc + c.toString();
        }
        return desc;
    }

    public void add(Component c)
    {
        this.compList.add(c);
    }
}
