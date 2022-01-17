package window;

import java.awt.Color;
import java.awt.EventQueue;
import java.awt.Font;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.Statement;

import javax.swing.ImageIcon;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextArea;
import javax.swing.JButton;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import javax.swing.UIManager;

public class registration2 {

	private JFrame frame;
	JTextArea us1;
	JTextArea ps1;
	
	Connection c;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					registration2 window = new registration2();
					window.frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	/**
	 * Create the application.
	 */
	public registration2() 
	{
		new regis();
		try {
			String url="jdbc:mysql://localhost:3306/knowurvalue";
			Class.forName("com.mysql.jdbc.Driver");
			c=DriverManager.getConnection(url,"root","");
			System.out.println("Connection Established");
		}catch(Exception e)
		{
			System.out.println("failed");
		}
		initialize();
	}
	public registration2(String name)
	{
		try {
			String url="jdbc:mysql://localhost:3306/knowurvalue";
			Class.forName("com.mysql.jdbc.Driver");
			c=DriverManager.getConnection(url,"root","");
			System.out.println("Connection Established");
		}catch(Exception e)
		{
			System.out.println("failed");
		}
		initialize();
	}
	private void initialize() {
		frame = new JFrame();
		frame.getContentPane().setBackground(Color.white);
		frame.getContentPane().addMouseListener(new MouseAdapter() {
			@Override
			public void mouseEntered(MouseEvent e) {
				//frame.setBackground(#fffof5);;
				frame.getContentPane().setBackground(new Color(240, 248, 255));
			}
			@Override
			public void mouseExited(MouseEvent e) {
				frame.getContentPane().setBackground(Color.white);
			}
		});
		frame.setBounds(450, 200, 370, 395);
		frame.setVisible(true);
		frame.getContentPane().setLayout(null);
		
		JLabel l1 = new JLabel("New label");
		l1.setBounds(67, 11, 228, 165);
		ImageIcon i=new ImageIcon(this.getClass().getResource("username.jpg"));
		l1.setIcon(i);
		frame.getContentPane().add(l1);
		
		JLabel us = new JLabel("UserName : ");
		us.setForeground(Color.blue);
		us.setFont(new Font("",Font.BOLD,14));
		us.setBounds(10, 203, 84, 25);
		frame.getContentPane().add(us);
		
		JLabel ps = new JLabel("Password : ");
		ps.setBounds(10, 239, 84, 23);
		ps.setFont(new Font("",Font.BOLD,14));
		ps.setForeground(Color.blue);
		frame.getContentPane().add(ps);
		
		us1 = new JTextArea("");
		us1.setBounds(126, 203, 218, 25);
		us1.setBackground(Color.lightGray);
		frame.getContentPane().add(us1);
		
		ps1 = new JTextArea("");
		ps1.setBounds(126, 239, 218, 23);
		ps1.setBackground(Color.lightGray);
		frame.getContentPane().add(ps1);
		
		final JLabel signup = new JLabel("Click here ? new User.....");
		signup.addMouseListener(new MouseAdapter() {
			@Override
			public void mouseClicked(MouseEvent e) {
				//System.out.println("hello i am clicked");
				frame.setVisible(false);
				new signup();
			}
			@Override
			public void mouseEntered(MouseEvent e) {
				signup.setForeground(Color.blue);
			}
			@Override
			public void mouseExited(MouseEvent e) {
				signup.setForeground(Color.red);
			}
		});
		signup.setBounds(144, 331, 200, 25);
		signup.setForeground(Color.red);
		signup.setFont(new Font("",Font.BOLD,14));
		frame.getContentPane().add(signup);
		
		final JButton login = new JButton("Login");
		login.setBackground(new Color(135, 206, 235));
		login.setFont(new Font("Tahoma", Font.PLAIN, 14));
		login.setForeground(Color.WHITE);
		login.addMouseListener(new MouseAdapter() {
			@Override
			public void mouseEntered(MouseEvent e) {
				login.setBackground(new Color(25, 25, 112));
				
			}
			@Override
			public void mouseExited(MouseEvent e) {
				
				login.setBackground(new Color(135, 206, 235));
			}
		});
		//login.setBackground(new Color(25, 25, 112));
		login.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e)
			{
				try {
					PreparedStatement p=null;
					String q="select * from registration where email=? and password=?";
					p=c.prepareStatement(q);
					p.setString(1,us1.getText());
					p.setString(2,ps1.getText());
					ResultSet r1=p.executeQuery();
					if(r1.next()==true)
					{
						new st3();
					}
					/*Statement s=null;
					s=c.createStatement();
					s.execute("select * from registration where email='krishna123@gmail.com' and password='qwer123*'");*/
				}
				catch(Exception e1)
				{
					
				}
			}
		});
		login.setBounds(126, 283, 102, 30);
		frame.getContentPane().add(login);
		
		
		
		
	}
}
