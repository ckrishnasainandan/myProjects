package window;

import java.awt.Color;
import java.awt.EventQueue;
import java.awt.Font;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.*;

import javax.swing.JFrame;
import javax.swing.*;
public class rules implements ActionListener{

	private JFrame frame;
	JButton b2,b1;
	String username;
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
						new rules("");
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	public rules(String U) {
		username=U;
		initialize();
		
	}
	private void initialize() {
		frame = new JFrame();
		frame.setBounds(80,150,1200,500);
		
		
		frame.getContentPane().setLayout(null);
		JLabel j=new JLabel("..... Welcome "+username+" Code for Interview To Simple Minds .....");
		j.setBounds(79,60,942,53);
		j.setForeground(Color.blue);
		j.setFont(new Font("Lucida",Font.ITALIC,30));
		
		frame.getContentPane().add(j);
		frame.getContentPane().setBackground(Color.white);
		frame.setVisible(true);
		
		JLabel j1=new JLabel("1.    Conduct the quiz upon a specified age group. For eg:-School qhiz, College quiz, Inter-Institutional Quiz etc."); 
		JLabel j2=new JLabel("2.    Conduct a preliminary round if there are more than six teams participating in the quiz."); 
		JLabel j3=new JLabel("3.    In the preliminary round, donot include more than 25 questions. Your quiz might not be rated as a good one if go more than that!!!" ); 
		JLabel j4=new JLabel("4.    In the finals, include mininum of 4 rounds having 10 marks for direct question and 5 marks for passed question answer."); 
		JLabel j5=new JLabel("5.    Keep a audience question aftwr every round, to keep all the audiences involved in the quiz.");
		JLabel j6=new JLabel("6.    Audio and Video rounds enhances the creativity level and standard of the quiz. So include those rounds.");
		j1.setBounds(189,124,641,32);
		j2.setBounds(189,150,454,32);
		j3.setBounds(189,167,704,50);
		j4.setBounds(189,193,641,50);
		j5.setBounds(189,219,464,50);
		j6.setBounds(189,245,623,50);
		frame.getContentPane().add(j1);
		frame.getContentPane().add(j2);
		frame.getContentPane().add(j3);
		frame.getContentPane().add(j4);
		frame.getContentPane().add(j5);
		frame.getContentPane().add(j6);
		
		b1=new JButton("Back");
		b1.setBounds(556,365,97,32);
		b1.setBackground(Color.blue);
		b1.setForeground(Color.WHITE);
		b1.addActionListener(this);
		
		b2=new JButton("Next");
		b2.setBounds(270,365,97,32);
		b2.setBackground(Color.blue);
		b2.setForeground(Color.WHITE);
		b2.addActionListener(this);
		
		frame.getContentPane().add(b2);
		frame.getContentPane().add(b1);
		
		JLabel lblNewLabel = new JLabel();
		ImageIcon i=new ImageIcon(this.getClass().getResource("i1.jpg"));
		lblNewLabel.setIcon(i);
		lblNewLabel.setBounds(491, 0, 693, 450);
		frame.getContentPane().add(lblNewLabel);
			
	}

	@Override
	public void actionPerformed(ActionEvent e) 
	{
		if(e.getSource()==b1)
		{
			frame.setVisible(false);
			frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
			new st3();
		}
		else
		{
			frame.setVisible(false);
			frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
			new quiz();
		}
	}
}
