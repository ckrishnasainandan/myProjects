package window;

import java.awt.Graphics;

import javax.swing.ImageIcon;
import javax.swing.JApplet;
import javax.swing.JLabel;
import javax.swing.JPanel;

public class remove1 extends JApplet {
	public remove1() {
	}

	int x=0,y=0;
	int step=10;
	
	public void paint(Graphics g)
	{
		
		super.paint(g);
		setLayout(null);
		/*JLabel lblNewLabel = new JLabel();
		lblNewLabel.setIcon(new ImageIcon(remove1.class.getResource("/window/insta.jpg")));
		
		
		lblNewLabel.setBounds(x,y, 80, 14);
		add(lblNewLabel);
		*/
		g.drawRect(x, y,100,50);
		x=x+step;
			
		try {
			Thread.sleep(50);
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		if(x==800)
		{
			x=0;
		}
		repaint();
	}

}
