import java.io.FileInputStream;
import java.io.IOException;
import java.io.SequenceInputStream;
import java.util.Enumeration;
import java.util.Vector;

public class B {
    public static void main(String[] args)throws IOException {
        FileInputStream fin1 = new FileInputStream("A.java");
        FileInputStream fin2 = new FileInputStream("abc2.txt");
        FileInputStream fin3 = new FileInputStream("B.java");
        FileInputStream fin4 = new FileInputStream("abc.txt");

        Vector v = new Vector();
        v.add(fin1);
        v.add(fin2);
        v.add(fin3);
        v.add(fin4);
        Enumeration e = v.elements();
        SequenceInputStream bin = new SequenceInputStream(e);
        int i=0;
        while((i=bin.read())!=-1)
        {System.out.print((char)i);}
        bin.close();
        fin1.close();
        fin2.close();
    }
}
