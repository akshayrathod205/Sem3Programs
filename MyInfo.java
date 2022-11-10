import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
public class MyInfo {
    static JTextField name_txt ;
    static JTextField sname_txt ;
    static JTextField cname_txt ;
    static JTextField pincode_txt;
    static JButton submit_btn;
    static JTextArea output_txtArea;
    public static void main(String[] args)
    {
        JFrame frame=new JFrame("My Information");
        frame.setVisible(true);
        frame.setBounds(700,700,700,700 );
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        Container c=frame.getContentPane();
        c.setLayout(null);
        c.setBackground(Color.white);
        Font f=new Font("Arial",Font.BOLD,32);
        JLabel heading_lbl=new JLabel();
        heading_lbl.setBounds(250,70,400,40);
        heading_lbl.setText("MY INFORMATION");
        heading_lbl.setFont(f);
        Font f1=new Font("Arial",Font.BOLD,20);
        JLabel name_lbl=new JLabel("Name : ");
        name_lbl.setBounds(50,150,200,30);
        name_txt=new JTextField();
        name_txt.setBounds(180,150,250,30);
        JLabel sname_lbl=new JLabel("Street : ");
        sname_lbl.setBounds(50,230,200,30);
        sname_txt=new JTextField();
        sname_txt.setBounds(180,230,250,30);
        JLabel cname_lbl=new JLabel("City : ");
        cname_lbl.setBounds(50,310,200,30);
        cname_txt= new JTextField();
        cname_txt.setBounds(180,310,250,30);
        Cursor cur=new Cursor(Cursor.HAND_CURSOR);
        JLabel pincode_lbl=new JLabel("Pincode: ");
        pincode_lbl.setBounds(50,390,200,30);
        pincode_txt=new JTextField();
        pincode_txt.setBounds(180,390,250,30);
        submit_btn=new JButton("MyInfo");
        submit_btn.setBounds(300,450,160,40);
        submit_btn.setCursor(cur);
        submit_btn.addActionListener(new ActionListener()
        {
            public void actionPerformed(ActionEvent event)
            {
                submit_action(event);
            }
        });
        Font f2=new Font("Arial",Font.ITALIC,35);
        Font f3=new Font("Arial",Font.PLAIN,20);
        output_txtArea=new JTextArea();
        output_txtArea.setBounds(500,200,500,500);
        name_lbl.setFont(f1);
        sname_lbl.setFont(f1);
        pincode_lbl.setFont(f1);
        cname_lbl.setFont(f1);
        name_txt.setFont(f3);
        sname_txt.setFont(f3);
        cname_txt.setFont(f3);
        pincode_txt.setFont(f3);
        submit_btn.setFont(f1);
        output_txtArea.setFont(f2);
        c.add(heading_lbl);
        c.add(name_lbl);
        c.add(sname_lbl);
        c.add(cname_lbl);
        c.add(pincode_lbl);
        c.add(cname_txt);
        c.add(sname_txt);
        c.add(name_txt);
        c.add(pincode_txt);
        c.add(submit_btn);
        c.add(output_txtArea);
    }
    public static void submit_action(ActionEvent event)
    {
        String name=name_txt.getText();
        String cname=cname_txt.getText();
        String sname=sname_txt.getText();
        String pincode=pincode_txt.getText();
        output_txtArea.setText(" Name  : " +name + "\n\n Street  :  " +sname + "\n\n City     : "+cname +" \n\n Pincode : "+pincode + "\n ");
    }
}
