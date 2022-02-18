import java.util.Iterator;
import java.util.PriorityQueue;

//Priority Queue
public class TestJavaCollection5 {
    public static void main(String[] args) {
        PriorityQueue<String> queue = new PriorityQueue<String>();
        queue.add("Amit");
        queue.add("Vijay");
        queue.add("Jay");
        queue.add("Raj");
        System.out.println("Head : "+queue.element());
        System.out.println("Head : "+queue.peek());
        System.out.println("Iterating the queue Elements : ");
        Iterator itr = queue.iterator();
        while(itr.hasNext())
        {
            System.out.println(itr.next());
        }
        queue.remove();
        queue.poll();
        System.out.println("After removing two elements : ");
        Iterator<String> itr2 = queue.iterator();
        while (itr2.hasNext()) {
            System.out.println(itr2.next());
        } 
    }
}
