package Java.stringcompare;
//compares ASCII value
//returns 0 if same ASCII value
//returns 1 if ASCII value of s1>s3
//returns -1 if ASCII value of s1<s3
public class Teststringcomparision3 {
    public static void main(String[] args) {
        String s1 = "Sachin";
        String s2 = "Sachin";
        String s3 = "Ratan";
        System.out.println(s1.compareTo(s2));//will return 0
        System.out.println(s1.compareTo(s3));//will return 1        
        System.out.println(s3.compareTo(s1));//will retrurn -1
    }
}
