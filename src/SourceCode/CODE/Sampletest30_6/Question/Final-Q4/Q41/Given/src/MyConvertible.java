/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author LENOVO
 */
public class MyConvertible implements Convertible {
    double km;
    String rc;

    public MyConvertible() {
    }

    public MyConvertible(double km, String rc) {
        this.km = km;
        this.rc = rc;
    }

    @Override
    public double toMile(double km) {
        return km*0.621371;
    }

    @Override
    public String getCode(String rc) {
        String x="";
        for (int i = 0;i< rc.length();i++) {
            x+=rc.charAt(i);
            if (i%3==2&&i!=rc.length()-1) {
                x+='-';
            }            
        }
         
        return x;
    }
    
}
