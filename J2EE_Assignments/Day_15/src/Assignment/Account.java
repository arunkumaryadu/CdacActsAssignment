package Assignment;

import java.util.ArrayList;
import java.util.List;

public class Account {
String type="";
List<Integer> l=null;
public Account() {
	type="account";
	l=new ArrayList<Integer>();
	l.add(22);
	l.add(23);
	l.add(24);	
}
public String getType() {
	return type;
}
public List<Integer> getL() {
	return l;
}

}
