/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
import java.util.List;
/**
 *
 * @author LENOVO
 */
public interface IPrinter {
     /*
      	remove from the list of printers "a" all printers which has price less than or equals to given price.   
     */
    
    void f1(List<Printer> a, double price);
   
    /*
       count and return numbers of printers which are in the list "a" and 
        has name contains given name.
    */
    public int f2(List<Printer> a, String name);
}
