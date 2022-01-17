package window;
import javax.swing.*;
import java.sql.*;
public class demo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Connection c=null;
		 try
		 {
			
			String u="root";
			String p="";
			String url="jdbc:mysql://localhost:3306/javaquiz";
			Class.forName("com.mysql.jdbc.Driver");
			c=DriverManager.getConnection(url, u, p);
			//System.out.println("DataBase connection established");
		 }
		 catch(Exception e)
		 {
			 System.out.println("failed");
		 }
	}

}
