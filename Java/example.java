import java.io.*; import java.util.*;

public class TxtIoEx {
public static void main(String[] args) { try(PrintWriter pw = new PrintWriter("123.txt")) {
for(int i=0;i<100;i++) { pw.print((int)(Math.random()*100)+" ");
}
}
catch (FileNotFoundException e) { System.out.println("Cannot create the file."+e);
}
Scanner scan = new Scanner("123.txt"); scan.next();
}
}
