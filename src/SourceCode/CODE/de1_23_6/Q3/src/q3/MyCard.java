/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package q3;

/**
 *
 * @author Kudo
 */
public class MyCard {

    String cardNumber;
    String cardType;

    public MyCard(String cardType, String cardNumber) {
        this.cardNumber = cardNumber;
        this.cardType = cardType;
    }
    public String getCardNumber() {
        for (int i = 0; i <=getCardNumber().length();i++) {
            char c = getCardNumber().charAt(i);
            if(Character.isDigit(c)) {
                cardNumber = "0000";
            }
        }
        return cardNumber ;  
    }

    public void setCardNumber(String cardNumber) {
        this.cardNumber = cardNumber;
    }

    public String getCardType() {
        return cardType;
    }

    public void setCardType(String cardType) {
        this.cardType = cardType;
    }
    

    public String getCardCode() {
        int a = getCardNumber().length()- 4;
        int b = getCardNumber().length();
        String x = null;   
        if ( getCardType() == "credit") {
            x = getCardNumber().substring(a,b);
     
        } 
        else {
    x= cardNumber.substring(0, 4);
    
        }
        return x ;
    }

    @Override
    public String toString() {        
        return cardType +"\t"+ cardNumber;
    }

}
