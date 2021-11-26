/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author LENOVO
 */
public class VNMotor extends Motor {
    private String series;
    public VNMotor() {
       
    }

    public VNMotor(String brandName, String series, double price) {
        super(brandName, price);
        this.series = series;
    }    
    
    /*Complete the below function for second test case*/
    public double getSalePrice() {
        double salePrice;
       if (getPrice()>=3000) {
           salePrice = getPrice() - getPrice()*0.1;
       } else {
           salePrice = getPrice() - getPrice()*0.05;
       }
       return salePrice;
    }  
    
    
    //add and complete your other methods here (if needed)

    @Override
    public String toString() {
        return getBrandName()+"\t" + series +"\t"+getPrice();
    }
    
    
}
