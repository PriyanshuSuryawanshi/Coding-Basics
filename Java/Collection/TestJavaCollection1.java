//ArrayList
import java.util.*;
public class TestJavaCollection1 {
    public static void main(String[] args) {
        ArrayList <String> list = new ArrayList<String>();
        list.add("Ravi");
        list.add("Vijay");
        list.add("Ravi");
        list.add("Ajay");

        ListIterator itr = list.listIterator();
        while(itr.hasNext())
        {System.out.println(itr.next());}
    }
}
