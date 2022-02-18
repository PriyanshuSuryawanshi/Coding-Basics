package Java.Staticc;

public class StsticVariable {
    int rollno;
    String name;
    static String clg="ITS";
    public static void main(String[] args) {

    StsticVariable s1 = new StsticVariable();
    s1.name = "Ramesh";
    s1.rollno = 10;
    System.out.println(s1.name);
    System.out.println(s1.rollno);
    System.out.println(StsticVariable.clg);    
    }
}
