package entities;

import java.text.SimpleDateFormat;
import java.util.Date;

public class Client {

	private static SimpleDateFormat sdf = new SimpleDateFormat("dd/mm/yyyy");
	
	private String name;
	private String email;
	private Date birthDate;
	
	public Client() {
		
	}

	public Client(String name, String email, Date birthDATE) {
		this.name = name;
		this.email = email;
		this.birthDate = birthDATE;
	}

	public static SimpleDateFormat getSdf() {
		return sdf;
	}

	public static void setSdf(SimpleDateFormat sdf) {
		Client.sdf = sdf;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public String getEmail() {
		return email;
	}

	public void setEmail(String email) {
		this.email = email;
	}

	public Date getBirthDATE() {
		return birthDate;
	}

	public void setBirthDATE(Date birthDATE) {
		this.birthDate = birthDATE;
	}

	@Override
	public String toString() {
		return name + " (" + sdf.format(birthDate) + ") - " + email;
	}
	
	
}
