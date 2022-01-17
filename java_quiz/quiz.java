package window;

import java.awt.Color;
import java.awt.EventQueue;
import java.awt.Font;
import java.awt.Graphics;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.ImageIcon;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.*;

import java.applet.Applet;
import java.awt.*;

public class quiz extends Applet implements ActionListener {

	private JFrame frame;
	JButton btnNewButton,btnNewButton_1,btnNewButton_2;
	JLabel ll,l1,l2,l3,l4;
	JRadioButton r1,r2,r3,r4;
	String q[][]=new String[10][5];
	String a[][]=new String[10][1];
	String a1[][]=new String[10][1];
	ButtonGroup options;
	public static int count=0;
	public int time=0;
	private JLabel lblNewLabel;
	
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					quiz window = new quiz();
					window.frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}
	public quiz() {
		initialize();
	}
	private void initialize() {
		frame = new JFrame();
		frame.setBounds(40,20,1300,700);
		frame.getContentPane().setLayout(null);
		frame.getContentPane().setBackground(Color.WHITE);
		frame.setVisible(true);
		
		ll = new JLabel();
		ImageIcon i=new ImageIcon(this.getClass().getResource("\\quiz.jpg"));
		ll.setIcon(i);
		ll.setBounds(0, -19, 1357, 357);
		frame.getContentPane().add(ll);
		
		l2 = new JLabel();
		l2.setBounds(62, 370, 57, 30);
		l2.setFont(new Font("Lucida Grande",Font.BOLD,20));
		frame.getContentPane().add(l2);
		
		l3 = new JLabel();
		l3.setBounds(116, 349, 726, 74);
		l3.setFont(new Font("Lucida Grande",Font.BOLD,20));
		frame.getContentPane().add(l3);
		
		q[0][0] = "Which is used to find and fix bugs in the Java programs.?";
        q[0][1] = "JVM";
        q[0][2] = "JDB";
        q[0][3] = "JDK";
        q[0][4] = "JRE";

        q[1][0] = "What is the return type of the hashCode() method in the Object class?";
        q[1][1] = "int";
        q[1][2] = "Object";
        q[1][3] = "long";
        q[1][4] = "void";

        q[2][0] = "Which package contains the Random class?";
        q[2][1] = "java.util package";
        q[2][2] = "java.lang package";
        q[2][3] = "java.awt package";
        q[2][4] = "java.io package";

        q[3][0] = "An interface with no fields or methods is known as?";
        q[3][1] = "Runnable Interface";
        q[3][2] = "Abstract Interface";
        q[3][3] = "Marker Interface";
        q[3][4] = "CharSequence Interface";

        q[4][0] = "In which memory a String is stored, when we create a string using new operator?";
        q[4][1] = "Stack";
        q[4][2] = "String memory";
        q[4][3] = "Random storage space";
        q[4][4] = "Heap memory";

        q[5][0] = "Which of the following is a marker interface?";
        q[5][1] = "Runnable interface";
        q[5][2] = "Remote interface";
        q[5][3] = "Readable interface";
        q[5][4] = "Result interface";

        q[6][0] = "Which keyword is used for accessing the features of a package?";
        q[6][1] = "import";
        q[6][2] = "package";
        q[6][3] = "extends";
        q[6][4] = "export";

        q[7][0] = "In java, jar stands for?";
        q[7][1] = "Java Archive Runner";
        q[7][2] = "Java Archive";
        q[7][3] = "Java Application Resource";
        q[7][4] = "Java Application Runner";

        q[8][0] = "Which of the following is a mutable class in java?";
        q[8][1] = "java.lang.StringBuilder";
        q[8][2] = "java.lang.Short";
        q[8][3] = "java.lang.Byte";
        q[8][4] = "java.lang.String";

        q[9][0] = "Which of the following option leads to the portability and security of Java?";
        q[9][1] = "Bytecode is executed by JVM";
        q[9][2] = "The applet makes the Java code secure and portable";
        q[9][3] = "Use of exception handling";
        q[9][4] = "Dynamic binding between objects";
        
        a1[0][0]="JDB";
        a1[1][0]="int";
        a1[2][0]="java.util package";
        a1[3][0]="Marker Interface";
        a1[4][0]="Heap memory";
        a1[5][0]="Remote interface";
        a1[6][0]="import";
        a1[7][0]="Java Archive";
        a1[8][0]="java.lang.StringBuilder";
        a1[9][0]="Bytecode is executed by JVM";
        
		r1=new JRadioButton();
		r1.setBounds(116, 451, 516, 18);
		r1.setBackground(Color.WHITE);
		r1.setFont(new Font("Lucida Grande",Font.ITALIC,18));
		frame.getContentPane().add(r1);
		
		r2=new JRadioButton();
		r2.setBounds(116, 482, 516, 18);
		r2.setBackground(Color.WHITE);
		r2.setFont(new Font("Lucida Grande",Font.ITALIC,18));
		frame.getContentPane().add(r2);
		
		r3=new JRadioButton();
		r3.setBounds(116, 513, 516, 18);
		r3.setBackground(Color.WHITE);
		r3.setFont(new Font("Lucida Grande",Font.ITALIC,18));
		frame.getContentPane().add(r3);
		
		r4=new JRadioButton();
		r4.setBounds(116, 544, 516, 18);
		r4.setBackground(Color.WHITE);
		r4.setFont(new Font("Lucida Grande",Font.ITALIC,18));
		frame.getContentPane().add(r4);
		
		options=new ButtonGroup();
		options.add(r1);
		options.add(r2);
		options.add(r3);
		options.add(r4);
		
		btnNewButton = new JButton("Next");
		btnNewButton.setBounds(874, 505, 153, 37);
		btnNewButton.setFont(new Font("Tahoma",Font.BOLD,15));
		btnNewButton.setBackground(Color.BLUE);
		btnNewButton.setForeground(Color.WHITE);
		frame.getContentPane().add(btnNewButton);
		btnNewButton.addActionListener(this);
		
		btnNewButton_1 = new JButton("lifeLine");
		btnNewButton_1.setBounds(874, 446, 153, 40);
		btnNewButton_1.setFont(new Font("Tahoma",Font.BOLD,15));
		btnNewButton_1.setBackground(Color.BLUE);
		btnNewButton_1.setForeground(Color.WHITE);
		frame.getContentPane().add(btnNewButton_1);
		btnNewButton_1.addActionListener(this);
		
		btnNewButton_2 = new JButton("Submit");
		btnNewButton_2.setBounds(874, 562, 153, 40);
		btnNewButton_2.setFont(new Font("Tahoma",Font.BOLD,15));
		btnNewButton_2.setBackground(Color.BLUE);
		btnNewButton_2.setForeground(Color.WHITE);
		btnNewButton_2.setEnabled(false);
		frame.getContentPane().add(btnNewButton_2);
		btnNewButton_2.addActionListener(this);
		
		
		
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		start(0);
		
	}
	
	
	public void start(int count)
	{
		l2.setText(" "+(count+1)+" . ");
		l3.setText(q[count][0]);
		
		r1.setText(q[count][1]);
		r1.setActionCommand(q[count][1]);
		
		r2.setText(q[count][2]);
		r2.setActionCommand(q[count][2]);
		
		r3.setText(q[count][3]);
		r3.setActionCommand(q[count][3]);
		
		r4.setText(q[count][4]);
		r4.setActionCommand(q[count][4]);
		options.clearSelection();
	}
	
	@Override
	public void actionPerformed(ActionEvent e)
	{
		if(e.getSource()==btnNewButton)
		{
			if(options.getSelection()==null)
			{
				a[count][0]=" ";
				System.out.println(a[count][0]);
			}
			else
			{
				a[count][0]=options.getSelection().getActionCommand();
				System.out.println(a[count][0]);
			}
			count=count+1;
			
			if(count>=10)
			{
			}
			else if(count==9)
			{
				btnNewButton_2.setEnabled(true);
				start(count);
			}
			else
			{
				start(count);
			}
			
		}
		if(e.getSource()==btnNewButton_2)
		{			
			for(int i=0;i<10;i++)
			{
				if(a[i][0]==a1[i][0])
				{
					time=time+1;
				}	
			}
			frame.setVisible(false);
			new result(time);
		}
		if(e.getSource()==btnNewButton_1)
		{
			
		}
	}
}
