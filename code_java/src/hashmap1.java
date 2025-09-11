import java.util.HashMap;
public class hashmap1
{
    public static void main(String[] args)
    {
        //tạo a1=item,a2=key
        HashMap<String, Integer> countryCodes=new HashMap();
        //thêm
        countryCodes.put("UK",44);
        countryCodes.put("US",11);
        //xuất 
        System.out.println(countryCodes.get("UK"));
        //size
        System.out.println(countryCodes.size());
        // remove an item
        System.out.println("Removing UK code..");
        countryCodes.remove("UK");
        System.out.println(countryCodes.size());
        // iterate vòng lặp
        for(String key:countryCodes.keySet())
        {
            System.out.println(key + " "+ countryCodes.get(key));
        }
        // clear all
        System.out.println("Clearing all item..");
        countryCodes.clear();
        System.out.println(countryCodes.size());
    }
}