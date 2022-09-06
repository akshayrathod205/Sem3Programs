import java.awt.*;
class StudentDetails extends Frame{
    TextField t1,t2,t3;
    Label name,rollno,age,gender;
    // CheckBox cg;
    TextArea Ta;
    Button B;
    StudentDetails(){
        name = new Label("Name: ");
        name.setBounds(20,50,50,20);
        add(name);

        t1 = new TextField();
        t1.setBounds(80,50,100,20);
        add(t1);

        rollno = new Label("Roll No.: ");
        rollno.setBounds(20,80,50,20);
        add(rollno);

        t2 = new TextField();
        t2.setBounds(80,80,50,20);
        add(t2);

        age = new Label("Age: ");
        age.setBounds(20,110,50,20);
        add(age);

        t3 = new TextField();
        t3.setBounds(80,110,50,20);
        add(t3);

        gender = new Label("Gender: ");
        gender.setBounds(20,140,50,20);
        add(gender);

        Checkbox m = new Checkbox("Male");
        m.setBounds(80,140,50,20);
        add(m);

        Checkbox f = new Checkbox("Female");
        f.setBounds(150,140,60,20);
        add(f);

        setSize(500,500);
        setLayout(null);
        setVisible(true);
    }
}

public class StudentForm{
    public static void main(String[] args){
        StudentDetails v1 = new StudentDetails();
    }
}