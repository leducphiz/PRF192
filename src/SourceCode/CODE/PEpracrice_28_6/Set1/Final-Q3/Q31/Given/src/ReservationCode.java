public class ReservationCode {
    String customerName;
    String code;

    public ReservationCode(String code, String customerName) {
        this.customerName = customerName;
        this.code = code;
    }

    public void setCustomerName(String customerName) {
        this.customerName = customerName;
    }

    public String getCustomerName() {
        return customerName;
    }
    

    public void setCode(String code) {
        this.code = code;
    }
    

    String getCode() {
        String x="";
        for (int i = 0;i< code.length();i++) {
            x+=code.charAt(i);
            if (i%2==1&&i!=code.length()-1) {
                x+='-';
            }            
        }
         
        return x;
    }


    @Override
    public String toString() {
        return customerName + "\t"+code;
    }
        
}
