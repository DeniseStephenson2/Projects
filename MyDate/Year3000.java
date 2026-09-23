import java.io.*;

public class Year3000
{
  public static void main(String [] args) throws IOException
  {
    DateInterface d = new MyDate();
    d.set(1,28,2024,3);  // sets the date to Wednesday, January 28nd, 2024
    d.tomorrow();
    System.out.println(d);

    /*while(d.getYear() < 2026) 
    {
      d.tomorrow();
      System.out.println(d);
    }*/
    
    while(d.getYear()<3000)
    {
      d.tomorrow();
    }
    // at this point, d represents January 1, 3000
    System.out.println(d);
  }
}
