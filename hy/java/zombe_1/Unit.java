package zombe2;
import java.util.*;

public class Unit {
	Random r= new Random();
	String name;
	int pos;
	
	
	public Unit(String name,int pos) 
	{
		this.name =name;
		this.pos= pos;
	}
	
	public void left()
	{
		pos = pos-1;
		if(pos <1) pos=1;
	}
	public void right()
	{
		pos = pos+1;
		if(pos >20) pos=20;
	}

}
