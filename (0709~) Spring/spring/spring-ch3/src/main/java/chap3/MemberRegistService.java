package chap3;

import java.time.LocalDateTime;

public class MemberRegistService  {
	private MemberDAO memberDAO;
	public MemberRegistService(MemberDAO memberDAO) {
		this.memberDAO=memberDAO;
		
	}
	
	public Long regist(RegisterRequest req) {
		Member member = memberDAO.selectByEmail(req.getEmail());
		
		if(member!=null) {
			
			throw new DuplicateMemberException("dup email" + req.getEmail());
			
		}
		
		Member newMember = new Member(
			req.getEmail(), req.getName(), req.getPassword(),LocalDateTime.now());
		
		memberDAO.insert(newMember);
		return newMember.getId();
		
	}

	}

