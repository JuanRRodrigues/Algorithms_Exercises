package Entites;
import java.util.Date;

public class HourContract {
	
	private Date date;
	private Double valueperhour;
	private Integer hours;
	
	public HourContract() {
		
	}

	public HourContract(Date date, Double valueperhour, Integer hours) {
		this.date = date;
		this.valueperhour = valueperhour;
		this.hours = hours;
	}

	public Date getDate() {
		return date;
	}

	public void setDate(Date date) {
		this.date = date;
	}

	public Double getValueperhour() {
		return valueperhour;
	}

	public void setValueperhour(Double valueperhour) {
		this.valueperhour = valueperhour;
	}

	public Integer getHours() {
		return hours;
	}

	public void setHours(Integer hours) {
		this.hours = hours;
	}
	public double totalValue() {
		return valueperhour * hours;
	}

}
