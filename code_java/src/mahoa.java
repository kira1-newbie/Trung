import java.util.Scanner;
class chuoi 
{
    String ghepchuoi(String []arr,String encode)
    {
        int dem;
        for(int i=0;i<arr.length;i++)
        {
            dem=arr[i].length();
            encode=encode+dem+"#"+arr[i];
        }
        return encode;
    }
    String [] tachchuoi(String []decode, String encode)
    {
        int dem=0;
        int i;
        int j=0;

        while(dem<encode.length())
   {
        if(encode.charAt(dem)!='0'&&encode.charAt(dem+1)=='#')
    {
        decode[j]="";
	    for(i=1;i<=Character.getNumericValue(encode.charAt(dem));i++)
	    decode[j]=decode[j]+encode.charAt(dem+i+1);
	    dem=dem+i+1;
        j++;
    }
        
    }
    return decode;
    }
}
public class mahoa {
    public static void main(String[] args)
    {
        int spt;
        Scanner sc=new Scanner(System.in);
        System.out.println("Nhap so phan tu: ");
        spt=sc.nextInt();
        sc.nextLine();
        String[] arr=new String[spt];
        for(int i=0;i<spt;i++)
        {
            arr[i]=sc.nextLine();
        }    
        System.out.println("Chuoi ban dau: ");
        for(int i=0;i<spt;i++)
        {
            System.out.print(arr[i]+" "); 

        }         
        String encode="";
        chuoi c=new chuoi();
        encode=c.ghepchuoi(arr,encode);
        System.out.println("Chuoi sau khi duoc ma hoa: "+encode);
        String[] decode=new String[spt];
        decode=c.tachchuoi(decode,encode);
        System.out.println("Chuoi sau khi duoc giai ma: ");
        for(int i=0;i<spt;i++)
        {
            System.out.println(decode[i]+" "); 
        }
    }
}
