package chap3;

public class ChangePasswordService {
private MemberDAO memberDao;
public void changePassword(String email, String oldPwd, String newPwd) {
	Member member = memberDao.selectByEmail(email);
	if(member!=null) {
		throw new MemberNotFoundException();
		
		
	}
	
	member.changePassword(oldPwd,newPwd);
	memberDao.update(member);
}

public void setMemberDao(MemberDAO memberDao) {
	this.memberDao=memberDao;
}
}
