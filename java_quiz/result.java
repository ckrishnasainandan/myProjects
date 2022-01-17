package window;

import java.awt.Color;
import java.awt.EventQueue;
import java.awt.Font;
import java.awt.event.*;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.ImageIcon;
import javax.swing.JButton;

public class result implements ActionListener{

	private JFrame frame;
	public int t;
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					result window = new result();
					window.frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	public result(int time) {
		t=time;
		initialize();
		frame.setVisible(true);
	}
	public result() {
		initialize();
	}
	private void initialize() {
		frame = new JFrame();
		frame.setBounds(40,20,1200,500);
		
		
		frame.getContentPane().setLayout(null);
		frame.getContentPane().setBackground(Color.WHITE);
		
		JLabel l1 = new JLabel();
		ImageIcon i=new ImageIcon(this.getClass().getResource("result.jpg"));
		l1.setIcon(i);
		l1.setBounds(0, 0, 1184, 268);
		frame.getContentPane().add(l1);
		
		JLabel l2 = new JLabel("Total Score : "+t);
		l2.setBounds(89, 296, 324, 45);
		l2.setFont(new Font("lucida",Font.BOLD,30));
		l2.setForeground(Color.blue);
		frame.getContentPane().add(l2);
		
		JLabel l3 = new JLabel("THANK YOU");
		l3.setBounds(408, 400, 404, 50);
		l3.setFont(new Font("lucida",Font.BOLD,30));
		l3.setForeground(Color.blue);
		frame.getContentPane().add(l3);
		
		JButton btnNewButton = new JButton("Exit");
		btnNewButton.setBounds(857, 409, 188, 40);
		btnNewButton.setBackground(Color.blue);
		btnNewButton.setForeground(Color.WHITE);
		btnNewButton.setFont(new Font("Tahoma",Font.BOLD,20));
		frame.getContentPane().add(btnNewButton);
		btnNewButton.addActionListener(this);
		
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}

	@Override
	public void actionPerformed(ActionEvent e) 
	{
		if(e.getActionCommand()=="Exit")
		{
			frame.setVisible(false);
		}
	}
	
}
