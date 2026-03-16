// Base Class
class BankAccount {
    protected String accountHolder;
    protected double balance;

    public BankAccount(String name, double balance) {
        this.accountHolder = name;
        this.balance = balance;
    }

    public void displayDetails() {
        System.out.println("Account Holder: " + accountHolder);
        System.out.println("Balance: " + balance);
    }

    public double calculateInterest() {
        return 0;  // Default interest
    }
}

// Child Class 1
class SavingsAccount extends BankAccount {

    public SavingsAccount(String name, double balance) {
        super(name, balance);
    }

    @Override
    public double calculateInterest() {
        return balance * 0.05;  // 5% interest
    }
}

// Child Class 2
class CurrentAccount extends BankAccount {

    public CurrentAccount(String name, double balance) {
        super(name, balance);
    }

    @Override
    public double calculateInterest() {
        return balance * 0.02;  // 2% interest
    }
}

// Main Class
public class Main {
    public static void main(String[] args) {

        BankAccount acc1 = new SavingsAccount("Himanshu", 10000);
        BankAccount acc2 = new CurrentAccount("Rahul", 20000);

        acc1.displayDetails();
        System.out.println("Interest: " + acc1.calculateInterest());

        System.out.println("abcd");

        acc2.displayDetails();
        System.out.println("Interest: " + acc2.calculateInterest());
    }
}