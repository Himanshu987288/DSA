


class Person {

    private String name;
    private int age;

 
    public Person(String name, int age) {
        this.name = name;
        this.age = age;
    }


    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }

    public void displayRole() {
        System.out.println("I am a person.");
    }
}

class Student extends Person {


    public Student(String name, int age) {
        super(name, age);
    }


    @Override
    public void displayRole() {
        System.out.println("I am a student.");
    }
}


class Teacher extends Person {// Child Class 2 (Inheritance)

    public Teacher(String name, int age) {
        super(name, age);
    }


    @Override
    public void displayRole() { // Method Overriding (Poly)
        System.out.println("I am a teacher.");
    }
}


public class poly {

    public static void main(String[] args) {

     
        Person p1 = new Student("Himanshu", 20);
        Person p2 = new Teacher("Rahul", 35);

     
        System.out.println(p1.getName() + " Age: " + p1.getAge());
        p1.displayRole();  // Calls Student method

        System.out.println("abc");

        System.out.println(p2.getName() + " Age: " + p2.getAge());
        p2.displayRole();  // Calls Teacher
    }
}