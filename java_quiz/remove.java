package window;

import java.awt.Color;
import java.awt.EventQueue;

import javax.swing.JFrame;

public class remove {

	private JFrame frame;
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					remove window = new remove();
					window.frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}
	public remove() {
		initialize();
	}
	private void initialize() {
		frame = new JFrame();
		frame.setBounds(100, 100, 800, 300);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		remove1 r=new remove1();
		r.setBackground(Color.black);
		frame.add(r);
	}
}
