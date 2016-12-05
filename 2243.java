/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pkg2243;

import java.math.BigInteger;
import java.util.Scanner;

/**
 *
 * @author Daniel
 */
public class Main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        BigInteger iT;
        iT = input.nextBigInteger();
        int res = iT.compareTo(BigInteger.valueOf(0));
        while(res != 0)
        {
        BigInteger Num, Suma;
        Num = iT.multiply(iT).add(BigInteger.valueOf(1));
        Suma = iT.multiply(Num).divide(BigInteger.valueOf(2));
        System.out.println(Suma);
        
        iT= input.nextBigInteger();
        res = iT.compareTo(BigInteger.valueOf(0));
        }
                
    }
    
}
