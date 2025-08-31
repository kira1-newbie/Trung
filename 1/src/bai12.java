public class bai12 {
    public static void main(String[] args)
    {
        int i=0;
        while(i<5)
        {
            i++;
            //continue: ket thuc vong lap hien tai va chuyen sang vong lap moi
            if(i==1) continue;
            System.out.println("Bruh");
            // break: dung lai vong lap
            if(i==3) break;
        }
    }
}
