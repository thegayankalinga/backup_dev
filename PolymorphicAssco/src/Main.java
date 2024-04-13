public class Main {
    public static void main(String[] args) {
        CatEntry entry1 = new CatEntry("screw",101,0.02);
        CatEntry entry2 = new CatEntry("bolt",102,0.03);

        Part p1 = new Part(entry1);
        Part p2 = new Part(entry2);
        Part p3 = new Part(entry1);

        Assembly a1 = new Assembly();
        a1.add(p2);
        a1.add(p3);
        Assembly a0 = new Assembly();
        a0.add(p1);
        a0.add(a1);


        System.out.println(a0.getCost());
        System.out.println(a0.toString());
    }
}
