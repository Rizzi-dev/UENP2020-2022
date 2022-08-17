import java.util.HashMap;
import java.util.Map.Entry;
import java.util.*;

class HashMap {
  public static void main(String[] args) {

    HashMap<String, Double> hash = new HashMap();
    hash.put("Macarrão", 5.00);
    hash.put("Arroz", 7.48);
    hash.put("Feijão", 8.10);
    hash.put("Abóbora", 3.98);

    for(Entry e : hash.entrySet()){
      System.out.println(e.getKey() + " - "+e.getValue());
    }
    System.out.println();

    Double i = Collections.max(hash.values());
    for(Entry e : hash.entrySet()){
      if(i == e.getValue()){
        System.out.println("Mais caro: "+e.getKey() + " - "+e.getValue());
      }
    }
  }
}