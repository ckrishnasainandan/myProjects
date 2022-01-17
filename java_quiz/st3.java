package window;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class st3 implements ActionListener{

	private JFrame frame;
	JButton b1,b;
	JTextField t;
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					new st3();	
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	public st3() {
		initialize();
	
	}

	private void initialize() {
		frame =new JFrame();
		frame.setBounds(80,150,1200,500);
		frame.getContentPane().setLayout(null);
		frame.getContentPane().setBackground(Color.WHITE);
		frame.setVisible(true);
		
		JLabel l1 = new JLabel();
		ImageIcon i=new ImageIcon(this.getClass().getResource("login.jpeg"));
		l1.setIcon(i);
		l1.setBounds(0,0,600,500);	
		frame.getContentPane().add(l1);
		
		JLabel l2 = new JLabel("Simple Minds");
		l2.setBounds(732,68,296,43);
		l2.setFont(new Font("Jokerman", Font.BOLD, 40));
		l2.setForeground(Color.blue);
		frame.getContentPane().add(l2,BorderLayout.CENTER);
		
		t=new JTextField();
		t.setBounds(900,160,200,20);
		frame.getContentPane().add(t);
		t.setFont(new Font("Lucida Grande",Font.ROMAN_BASELINE,18));
		
		b=new JButton("Rules");
		b.setBounds(722,280,130,30);
		frame.getContentPane().add(b);
		b.setBackground(Color.blue);
		b.setForeground(Color.WHITE);
		b.addActionListener(this);
		
		b1=new JButton("Exit");
		b1.setBounds(900,280,128,30);
		frame.getContentPane().add(b1);
		b1.setBackground(Color.blue);
		b1.setForeground(Color.WHITE);
		
		JLabel lblNewLabel = new JLabel("Name  : ");
		lblNewLabel.setFont(new Font("Tahoma", Font.BOLD, 16));
		lblNewLabel.setForeground(new Color(65, 105, 225));
		lblNewLabel.setBounds(729, 161, 123, 20);
		frame.getContentPane().add(lblNewLabel);
		b.addActionListener(this);
	}

	@Override
	public void actionPerformed(ActionEvent e) 
	{
		if(e.getSource()==b)
		{
			frame.setVisible(false);
			String name=t.getText();
			frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
			new rules(name);	
		}
		else
		{
			System.exit(0);
		}
	}
}
