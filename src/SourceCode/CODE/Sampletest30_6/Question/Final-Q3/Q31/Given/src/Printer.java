/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author LENOVO
 */
public class Printer {
     double price;
     String name;
    public Printer() {
        }

    public Printer(String name, double price) {
        this.price = price;
        this.name = name;
    }

    public double getPrice() {
        return price;
    }

    public void setPrice(double price) {
        this.price = price;
    }
    

    public String getName() {
        return name;
    }

    //add and complete you other methods (if needed) here   

    @Override
    public String toString() {
        return name +"\t"+price;
    }
}
