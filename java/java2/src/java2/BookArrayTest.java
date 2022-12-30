
class Book{
	private String title;
	private String author;
	
	public Book() {
	}
	public Book(String title,String author) {
		this.title=title;
		this.author=author;
	}
	public String getAuthor() {
		return author;
	}
	public void setAuthor(String author) {
		this.author = author;
	}
	public String getTitle() {
		return title;
	}
	public void setTitle(String title) {
		this.title = title;
	}
	public void showInfo() {
		System.out.println(title+","+author);
	}
}

public class BookArrayTest{
	public static void main(String[] args) {
		Book[] library=new Book[5];
		Book[] copyLibrary=new Book[5];
		
		library[0]=new Book("태백산맥1","조정래");
		library[1]=new Book("태백산맥1","조정래");
		library[2]=new Book("태백산맥1","조정래");
		library[3]=new Book("태백산맥1","조정래");
		library[4]=new Book("태백산맥1","조정래");
		
		for(int i=0;i<library.length;i++) {
			System.out.println(library[i]);
			library[i].showInfo();
		}
		
		System.arraycopy(library, 0, copyLibrary, 0, 5);
		System.out.println("=================");
		for(int i=0;i<copyLibrary.length;i++) {
			System.out.println(copyLibrary[i]);
			library[i].showInfo();
		}
		
		System.out.println("=================");
		library[0].setTitle("나목");
		library[1].setTitle("박완서");
		
		for(Book book:library) {
			book.showInfo();
		}
		
		for(int i=0;i<copyLibrary.length;i++) {
			copyLibrary[i]=new Book();
		}
		
		for(int i=0;i<library.length;i++) {
			copyLibrary[i].setAuthor(library[i].getAuthor());
			copyLibrary[i].setTitle(library[i].getTitle());
		}
	}
}