package chap3;

import java.time.LocalDateTime;

public class Member {

	private Long id;
	private String email;
	private String password;
	private String name;
	private LocalDateTime registDateTime;
	
	public Member(String email, String password, String name, LocalDateTime registDateTime) {
	
		
		this.email = email;
		this.password = password;
		this.name = name;
		this.registDateTime = registDateTime;
	}

	public Long getId() {
		return id;
	}

	public void setId(Long id) {
		this.id = id;
	}

	public String getEmail() {
		return email;
	}

	public String getPassword() {
		return password;
	}

	public LocalDateTime getRegistDateTime() {
		return registDateTime;
	}

	public void changePassword(String oldPassword, String newPassword) {
		if(!password.equals(oldPassword)) {
			throw new WrongIdPasswordException();
		}
		this.password=newPassword;
	}
	
	
	
	
	
	
	
}
