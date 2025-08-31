import java.util.Scanner;
class sapxep{
    String sort(String chuoi)
    {
        int length1=chuoi.length();
        char[] arr=chuoi.toCharArray();
        for(int i=0;i<length1-1;i++)
            for(int j=length1-1;j>i;j--)
            {
                if(arr[i]>arr[j])
                {
                    char a;
                    a=arr[i];
                    arr[i]=arr[j];
                    arr[j]=a;
                }
            }
            return new String(arr);
    }
}
public class daochu {
    public static void main(String args[])
    {
        String s,t;
        Scanner sc=new Scanner(System.in);
        s=sc.nextLine();
        t=sc.nextLine();
        sapxep sorter=new sapxep();
        String kq1=sorter.sort(s);
        String kq2=sorter.sort(t);
        System.out.println(kq1.equals(kq2));
    }
}