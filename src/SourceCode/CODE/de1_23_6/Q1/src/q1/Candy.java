package q1;
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
*/
 public class Candy extends DessertItem {
     double price;
     double weight;
    

    public Candy(String name, double price, double weight) {
        super(name);
        this.price=price;
        this.weight=weight;
    }

    public double getPrice() {
        return price;
    }

    public void setPrice(double price) {
        this.price = price;
    }

    public double getWeight() {
        return weight;
    }

    public void setWeight(double weight) {
        this.weight = weight;
    }
    public double getCost() {
        double cost =0;
        if (name.charAt(0) =='c' || name.charAt(0)=='C') {
            cost = Math.ceil(price*weight);
        } else {
            cost = Math.floor(price*weight);
        }
        return cost;
    }

    @Override
    public String toString() {
        return name +"\t"+ weight+"\t" + price;
    }
    
}
