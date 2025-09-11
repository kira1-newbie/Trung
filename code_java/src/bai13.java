import java.​lang.​Throwable;
// xu ly ngoai le (try catch)
public class bai13 {
    public static void main(String[] args)
    {
        int a=2;
        // thu ctrinh
        try
        {
            int c=a/0;
            System.out.print(c);            
        }
        // ktra loi toan hoc
        catch (ArithmeticException ex)
        {
            System.out.println("Loi1");
            ex.printStackTrace();
        }
        catch (Exception ex)
        {
            System.out.println("Loi");
            ex.printStackTrace();
        }
        // thuc hien chuong trinh ke ca khi loi
        finally
        {
            System.out.println("123");
        }
    }
}
