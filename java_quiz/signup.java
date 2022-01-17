package window;

import java.awt.Color;
import java.awt.EventQueue;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.SQLException;
import java.sql.Statement;

import javax.swing.ImageIcon;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;
import java.awt.Font;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import javax.swing.JButton;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;

public class signup {

	private JFrame frame;
	private JTextField fnamet;
	private JTextField lnamet;
	private JTextField usnt;
	private JTextField emailt;
	private JTextField passt;
	private JTextField degreet;
	private JTextField yeart;
	Connection c;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					signup window = new signup();
					window.frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	public signup() {
		c=null;
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
		frame.setVisible(true);
		frame.setBounds(450, 100, 379, 526);
		frame.getContentPane().setBackground(new Color(248, 248, 255));
		frame.getContentPane().setLayout(null);
		ImageIcon i=new ImageIcon(this.getClass().getResource("regisnow.jpg"));
		
		JLabel fname = new JLabel("Name* : ");
		fname.setFont(new Font("Sylfaen", Font.BOLD, 14));
		fname.setForeground(new Color(34, 139, 34));
		fname.setBounds(10, 11, 99, 21);
		frame.getContentPane().add(fname);
		
		fnamet = new JTextField();
		fnamet.setBounds(10, 43, 136, 26);
		frame.getContentPane().add(fnamet);
		fnamet.setColumns(10);
		
		JLabel usn = new JLabel("USN* : ");
		usn.setFont(new Font("Sylfaen", Font.BOLD, 14));
		usn.setForeground(new Color(34, 139, 34));
		usn.setBounds(10, 80, 84, 21);
		frame.getContentPane().add(usn);
		
		lnamet = new JTextField();
		lnamet.setBounds(156, 43, 197, 26);
		frame.getContentPane().add(lnamet);
		lnamet.setColumns(10);
		
		JLabel email = new JLabel("Email* : ");
		email.setFont(new Font("Sylfaen", Font.BOLD, 14));
		email.setForeground(new Color(34, 139, 34));
		email.setBounds(10, 149, 99, 21);
		frame.getContentPane().add(email);
		
		usnt = new JTextField();
		usnt.setBounds(10, 112, 216, 26);
		frame.getContentPane().add(usnt);
		usnt.setColumns(10);
		
		emailt = new JTextField();
		emailt.setBounds(10, 181, 216, 26);
		frame.getContentPane().add(emailt);
		emailt.setColumns(10);
		
		JLabel pass = new JLabel("Password* : ");
		pass.setFont(new Font("Sylfaen", Font.BOLD, 14));
		pass.setForeground(new Color(34, 139, 34));
		pass.setBounds(10, 218, 120, 26);
		frame.getContentPane().add(pass);
		
		passt = new JTextField();
		passt.setBounds(10, 255, 216, 26);
		frame.getContentPane().add(passt);
		passt.setColumns(10);
		
		JLabel degree = new JLabel("Degree* : ");
		degree.setFont(new Font("Sylfaen", Font.BOLD, 14));
		degree.setForeground(new Color(34, 139, 34));
		degree.setBounds(10, 292, 106, 21);
		frame.getContentPane().add(degree);
		
		degreet = new JTextField();
		degreet.setBounds(10, 324, 136, 26);
		frame.getContentPane().add(degreet);
		degreet.setColumns(10);
		
		JLabel year = new JLabel("Year* : ");
		year.setFont(new Font("Sylfaen", Font.BOLD, 14));
		year.setForeground(new Color(34, 139, 34));
		year.setBounds(196, 292, 84, 21);
		frame.getContentPane().add(year);
		
		yeart = new JTextField();
		yeart.setBounds(196, 324, 129, 26);
		frame.getContentPane().add(yeart);
		yeart.setColumns(10);
		
		JButton b1 = new JButton("New button");
		b1.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				try {
					PreparedStatement p=null;
					String q="Insert into registration(fname,lname,usn,email,password,degree,year) values (?,?,?,?,?,?,?);";
					p=c.prepareStatement(q);
					p.setString(1,fnamet.getText());
					p.setString(2,lnamet.getText());
					p.setString(3,usnt.getText());
					p.setString(4,emailt.getText());
					p.setString(5,passt.getText());
					p.setString(6,degreet.getText());
					p.setString(7,yeart.getText());
					p.executeUpdate();
					//System.out.println(fnamet.getText()+" "+lnamet.getText()+" "+usnt.getText()+" "+emailt.getText()+" "+passt.getText());
					
					} catch (SQLException e1) {
						// TODO Auto-generated catch block
						e1.printStackTrace();
					}
					fnamet.setText("");
					lnamet.setText("");
					usnt.setText("");
					emailt.setText("");
					passt.setText("");
					degreet.setText("");
					yeart.setText("");
					frame.setVisible(false);
					new registration2("");
					
			}
		});
		b1.setIcon(new ImageIcon(signup.class.getResource("/window/regisnow.jpg")));
		b1.setBackground(Color.WHITE);
		b1.setBounds(0, 380, 363, 80);
		frame.getContentPane().add(b1);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		
	}
}
