/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
import java.util.*;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
/**
 *
 * @author LENOVO
 */
public class MyPrinter implements IPrinter  {
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
    public int f2(List<Printer> a, String xname) {
        int count =0;
        for (int i = 0; i<a.size();i++) {
            if (a.get(i).name.toLowerCase().contains(xname.toLowerCase())) {
                count+=1;
            }
        }
        return count;
    }
}
