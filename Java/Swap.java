public class Swap {

    public static void main(String[] args) {


         int first, second;
         Scanner keyboard= new Scanner(System.in);
         System.out.print("Enter first number:");
         first= keyboard.nextInt();
         System.out.print("Enter second number:");
         second= keyboard.nextInt();
         
        System.out.println("Before");
        System.out.println("First number = " + first);
        System.out.println("Second number = " + second);

        \\Swap
        int temp = first;
        first = second;
        second = temporary;

        System.out.println("After");
        System.out.println("First number " + first);
        System.out.println("Second number = " + second);
    }
}
