/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package q2;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;


public class MyInvoice implements IInvoice{

@Override   
    public String f1(ArrayList<Invoice> a, int st) 
    {   
        if(st==1) {
            Collections.sort(a, new Comparator<Invoice>() {
                @Override
                public int compare(Invoice t, Invoice t1) {
                   return t.name.compareToIgnoreCase(t1.name);
                }
                
            });
            return a.get(1).name;
        }
        else if(st==2) { 
            Collections.sort(a, new Comparator<Invoice>() {
                @Override
                public int compare(Invoice t, Invoice t1) {
                    int d = t.total - t1.total;
                    if (d>0) return 1;
                    if (d==0) return 0;
                    return -1;
                }
                
            });
        
        return a.get(1).name;
                
    }
        return ("No");
    }
            
       
  
    @Override
    public int f2(ArrayList<Invoice> a) {
        int highest = Integer.MIN_VALUE, secondHighest =Integer.MIN_VALUE;
        for (int i =0;i<a.size();i++) {
            if (a.get(i).total > highest) {
                secondHighest = highest;
                highest = a.get(i).total;
            }
            else if (a.get(i).total < highest && a.get(i).total > secondHighest) {
                secondHighest = a.get(i).total;
            }
        }
        int sum =0;
        for (int i =0;i<a.size();i++) {
            if (a.get(i).total == highest || a.get(i).total == secondHighest) {
                a.remove(i);
                i--;
            }
        }
        for (int i =0;i<a.size();i++) {
            sum += a.get(i).total;
        }
        return sum;
    }
    
}
