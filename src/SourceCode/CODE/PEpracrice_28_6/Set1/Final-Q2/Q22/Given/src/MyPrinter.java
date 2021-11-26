

 
import java.util.*;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

public class MyPrinter implements IPrinter { 
   

    @Override
    public void f1(List<Printer> a, double price) {
        for (int i = 0; i<a.size();i++) {
            if (a.get(i).getPrice()<=price) {
                a.remove(i);
                i--;
            }
        }
        
    }
    

    @Override
    public int f2(List<Printer> a, String name) {
        int count =0;
        for (int i = 0; i<a.size();i++) {
            if (a.get(i).getName().contains(name)) {
                count+=1;
            }
        }
        return count;
    }

   
    
    
     
}
