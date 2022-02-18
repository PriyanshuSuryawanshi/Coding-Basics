public class TestjoinMethod extends Thread{
    public void run()
    {
        for(int i=1;i<=5;i++)
        {
            try{Thread.sleep(500);}catch(Exception e){System.out.println(e);}
            System.out.println(i);
        }
    }
    public static void main(String[] args) {
        TestjoinMethod t1 = new TestjoinMethod();        
        TestjoinMethod t2 = new TestjoinMethod();
        TestjoinMethod t3 = new TestjoinMethod();
        t1.start();
        try{t1.join();}catch(Exception e){System.out.println(e);}
        //Waits until t1 completes its work
        t2.start();
        t3.start();        
    }
}
