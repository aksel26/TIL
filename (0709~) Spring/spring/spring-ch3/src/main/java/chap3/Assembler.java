package chap3;

public class Assembler {
	private MemberDAO memberDao;
	private MemberRegistService regSvc;
	private ChangePasswordService pwdSvc;
	
	public Assembler() {
		memberDao = new MemberDAO();
		regSvc =new MemberRegistService(memberDao);
		pwdSvc = new ChangePasswordService();
		pwdSvc.setMemberDao(memberDao);
	}

	public MemberDAO getMemberDao() {
		return memberDao;
	}

	public MemberRegistService getRegSvc() {
		return regSvc;
	}

	public ChangePasswordService getPwdSvc() {
		return pwdSvc;
	}
	
	
}
