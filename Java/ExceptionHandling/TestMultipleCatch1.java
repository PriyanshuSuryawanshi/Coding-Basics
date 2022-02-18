public class TestMultipleCatch1 {
    public static void main(String[] args) {
        try{
            int a[] = new int[5];
            a[54] = 30/0;
        }catch(ArrayIndexOutOfBoundsException e){System.out.println("Task1 completed");}
        catch(ArithmeticException e){System.out.println("Task2 completed");}
        catch(Exception e){System.out.println("Common Task Completed");}
        System.out.println("Rest of the code");

    }
}
