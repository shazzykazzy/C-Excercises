import java.util.Scanner;

public class Survey {
    public static void main(String[] args) {

        //*********PART A: PICKING UP THE USER'S ANSWERS*********
        System.out.println("Welcome. Thank you for taking the survey");
        Scanner scanner = new Scanner(System.in);

        System.out.println("\n What is your name?");
        String name = scanner.nextLine();

        System.out.println("\n How much money do you spend on coffee?");
        double coffeePrice = scanner.nextDouble();;

        System.out.println("\n How much money do you spend on fast food?");
        double foodPrice = scanner.nextDouble();


        System.out.println("\n How many times a week do you buy coffee?");
        int coffeeAmount = scanner.nextInt();

        System.out.println("\n How many times a week do you buy fast food?");
        int foodAmount = scanner.nextInt();

        double coffeeMoney = coffeePrice * coffeeAmount;
        double foodMoney = foodPrice * foodAmount;

        scanner.close();

        //*********PART B: RESPONDING TO THE USER**********
        System.out.println("\n Thank you " + name + " for answering all <counter> questions");
        System.out.println("Weekly, you spend $" + coffeeMoney + " on coffee");
        System.out.println("Weekly, you spend $" +  foodMoney + " on food");

    }
}
