
public class VNMotor extends Motor{  
    String series;
    public VNMotor() {
       
    }

    public VNMotor(String brandName, String series, double price) {
        super(brandName, price);
        this.series = series;
    }    
    
    /*Complete the below function for second test case*/
    public double getSalePrice() {
        double salePrice;
       if (price>=3000) {
           salePrice = price - price*0.1;
       } else {
           salePrice = price - price*0.05;
       }
       return salePrice;
    }  
    
    
    //add and complete your other methods here (if needed)

    @Override
    public String toString() {
        return brandName+"\t" + series +"\t"+price;
    }
    

}
