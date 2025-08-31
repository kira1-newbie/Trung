// thu vien xuat dinh dang d/m/y hour
// thu vien set date time
// import date 
import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Date;
public class bai15 {
     public static void main(String[] args)
     {
        // 1.khoi tao
        Calendar cal= Calendar.getInstance();
     //   System.out.println("\n"+cal);
        // 2.lay ngay, thang, nam hien tai
        int ngay=cal.get(Calendar.DAY_OF_MONTH);
        int thang=cal.get(Calendar.MONTH)+1;
        int nam=cal.get(Calendar.YEAR);
    //    System.out.println(ngay+" "+thang+" "+nam);
        // 3.chinh date, month, year
        cal.set(Calendar.DAY_OF_MONTH,5);
        cal.set(Calendar.MONTH,7-1);
        cal.set(Calendar.YEAR,2025);
        int ngay1=cal.get(Calendar.DAY_OF_MONTH);
        int thang1=cal.get(Calendar.MONTH);
        int nam1=cal.get(Calendar.YEAR);
   //     System.out.println(ngay1+" "+thang1+" "+nam1);
        SimpleDateFormat form=new SimpleDateFormat("dd/MM/yyyy hh:mm:ss a");
        // tao time
       Date d=cal.getTime();
        // chuyen thanh chuoi dd/MM/yyyy.........
        String formDate=form.format(d);
        System.out.println(formDate);
    }
}
