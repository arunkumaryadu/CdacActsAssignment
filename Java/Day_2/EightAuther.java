
class Author{
	private String name,email;
	private char gender;
	public Author(String name,String email,char gender) {
	this.name=name;
	this.email=email;
	this.gender=gender;
		}
	public String getName() {
		return name;
	}
	public String getEmail() {
		return email;
	}
	public char getGender() {
		return gender;
	}
	public void setEmail(String email) {
		this.email = email;
	}
	
	public String toString() {
		return this.name+" ("+this.gender+") At "+this.email;
	}
	
	
}
class Book{
	private String name;
	private Author author;
	private double price;
	private int quantity;
	public Book(String name,Author author,double price,int quantity) {
		this.name=name;
		this.author=author;
		this.price=price;
		this.quantity=quantity;		
	}
	public String getName() {
		return name;
	}
	public Author getAuthor() {
		return author;
	}
	public double getPrice() {
		return price;
	}
	public int getQuantity() {
		return quantity;
	}
	public void setPrice(double price) {
		this.price = price;
	}
	public void setQuantity(int quantity) {
		this.quantity = quantity;
	}
	public String toString() {
		// TODO Auto-generated method stub
		return this.name+" by "+getAuthor();
	}
	public String getBook() {
		return this.toString();
	}
}
public class EightAuther {
	public static void main(String[] args) {
		Author author=new Author("Arun", "arun@g.c",'M');
		Book book=new Book("collection in java", author, 500.0, 50);
System.out.println(book.getName());
		System.out.println(book.getAuthor());
		System.out.println(book.getPrice());
		System.out.println(book.getBook());
	}

}
