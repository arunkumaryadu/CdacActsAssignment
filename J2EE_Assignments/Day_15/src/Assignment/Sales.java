package Assignment;

import java.util.ArrayList;
import java.util.List;

public class Sales {
String type="";
List<Integer> l=null;
public Sales() {
	type="sales";
	l=new ArrayList<Integer>();
	l.add(25);
	l.add(26);
	l.add(27);	
}
public String getType() {
	return type;
}
public List<Integer> getL() {
	return l;
}

}
