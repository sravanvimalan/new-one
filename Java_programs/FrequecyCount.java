/*
ouput:
02201
*/
package com.example.test;
import java.util.HashMap;
import java.util.Map;

public class Main {

    public static void main(String[] args) {
        int[] arr = {2,3,2,3,5};
        Map<Integer, Integer> map = new HashMap<Integer, Integer>();
        for(int i=1;i<=5;i++)
            map.put(i,0);
        for (int value : arr) {
            int count = map.get(value);
            map.put(value, ++count);
        }
        for(int i=1;i<=map.size();i++)
            System.out.print(map.get(i));
    }
}
