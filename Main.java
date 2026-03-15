import java.util.Scanner;   
class Student {

    String name;
    int rollNo;
    Student(String name, int rollNo) {
        this.name = name;
        this.rollNo = rollNo;
    }

    
    void display() {
        System.out.println("Name: " + name);
        System.out.println("Roll No: " + rollNo);
    }
}


public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);   

        System.out.print("Enter Name: ");
        String name = sc.nextLine();

        System.out.print("Enter Roll No: ");
        int roll = sc.nextInt();

        // Object creation
        Student s1 = new Student(name, roll);

        System.out.println("\n--- Student Details ---");
        s1.display();

        sc.close();
    }
}