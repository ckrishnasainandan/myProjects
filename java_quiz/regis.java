package window;

import java.awt.Color;
import java.awt.EventQueue;
import javax.swing.*;
import java.sql.*;


public class regis {

	private JFrame frame,f;
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					regis window = new regis();
					window.frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}
	public regis() {

		initialize();
	}
	
	private void initialize() {
		frame = new JFrame();
		frame.setBounds(100, 100, 450, 300);
		frame.setVisible(true);
		frame.getContentPane().setLayout(null);
		
		JLabel l1 = new JLabel("New label");
		l1.setBounds(0, 0, 1364, 706);
		ImageIcon i=new ImageIcon(this.getClass().getResource("front.jpg"));
		l1.setIcon(i);
		frame.getContentPane().add(l1);;
		frame.setExtendedState(JFrame.MAXIMIZED_BOTH);
		
	
		
		
		//f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
	}
}
