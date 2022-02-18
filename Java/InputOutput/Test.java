import java.io.*;
public class Test {
    public static void main(String[] args) {
        try{FileOutputStream fout=new FileOutputStream("abc.txt");
            String s = "Sachin Tendulkar is my Favourite";
            byte b[] = s.getBytes();
            fout.write(b);
            fout.close();
            System.out.print("Success...");
            }catch(Exception e){System.out.print(e);}
    }
}
