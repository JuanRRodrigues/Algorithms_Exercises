package entities;

import java.time.LocalDate;
import java.time.format.DateTimeFormatter;

public class UsedProduct extends Product{

	private LocalDate manufactureDate;

	public UsedProduct(String name, Double price, LocalDate manufacturesDate) {
		super(name, price);
		this.manufactureDate = manufacturesDate;
	}

	public LocalDate getManufacturesDate() {
		return manufactureDate;
	}

	public void setManufacturesDate(LocalDate manufacturesDate) {
		this.manufactureDate = manufacturesDate;
	}
	
	@Override
	public String priceTag() {
	   	 return getName()
	   			          +" (used) $ "
	   			          + String.format("%.2f", getPrice())
	   			          + "(Manufacture date: "
	   			          + manufactureDate.format(DateTimeFormatter.ofPattern("dd/MM/yyyy)"))	   
	   			          +")";
	}
	
}
