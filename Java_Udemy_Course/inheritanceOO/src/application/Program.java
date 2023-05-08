package application;

import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
import java.util.ArrayList;
import java.util.List;
import java.util.Locale;
import java.util.Scanner;

import entities.ImportedProduct;
import entities.Product;
import entities.UsedProduct;

public class Program {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		List<Product> list = new ArrayList<>();
		
		System.out.print("Entre com o numero de produtos");
		int n = sc.nextInt();
		
		for(int i=1; i<=n; i++) {
			System.out.println("Dados do produto #" + i + ":");
			System.out.print("Comum, usado, importado (c/u/i) ");
			char type = sc.next().charAt(0);
			System.out.print("Nome: ");
			sc.nextLine();
			String name = sc.nextLine();
			System.out.print("Preço");
			double price = sc.nextDouble();
			if(type == 'c') {
				list.add(new Product(name, price));
				
			}
			else if (type == 'u') {
				System.out.print("Data de fabricacao (DD/MM/YYYY) ");
				LocalDate date = LocalDate.parse(sc.next(), DateTimeFormatter.ofPattern("dd/MM/yyyy"));
				list.add(new UsedProduct(name, price, date));
				
			}
			else {
				System.out.print("Taxaq de importaçao");
				double customFee = sc.nextDouble();
				list.add(new ImportedProduct(name, price, customFee));
				
			}
			
		}
		System.out.println();
		System.out.println("ENTIQUETAS DE PRECO:");
		for (Product prod : list) {
			System.out.println(prod.priceTag());
			
		}
		
sc.close();
	}

}
