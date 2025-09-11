import java.util.Scanner;
class chuoi
{
    String [] xoa (String s[],int index)
    {
        if(index==0)
        {
            for(int i=0;i<s.length-1;i++)
            {
                s[i]=s[i+1];
            }
        }
        else{
            if(index==s.length-1)
            {
                for(int i=s.length-1;i<0;i--)
                {
                    s[i]=s[i-1];
                }
            }
            else
            {
                for(int i=index;i<s.length-1;i++)
                {
                    s[i]=s[i+1];
                }
            }
        }
        return s;
    }
     String sort(String s)
        {
             int length1=s.length();
        char[] arr=s.toCharArray();
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
public class chuoidaochu {
    public static void main(String[] args)
    {
            int x;
            try(Scanner sc=new Scanner(System.in))
            {
            x=sc.nextInt();
            sc.nextLine();
            String[] arr=new String[x];
            for(int i=0;i<x;i++)
            {
                    arr[i]=sc.nextLine();
            }
            chuoi c=new chuoi();
            int dem=0;      
while(dem<x&&x>0)
{
	String kq=arr[0];
	arr=c.xoa(arr,0);
	System.out.print(kq+",");
	x--;
	while(dem<x&&x>0)
	{
		while(dem<x&&c.sort(kq).equals(c.sort(arr[dem])))
		{
        System.out.print(arr[dem]+",");
		arr=c.xoa(arr,dem);
		x--;
		}	
		dem++;
	}
	dem=0;
    System.out.println(" ");
}
    
}
}
}
