```html
package lab.web.model;
import java.io.FileInputStream;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.Statement;
import java.util.Properties;

public class LoginDAO {
	public Connection dbCon() {
		Connection con = null;
		try {
			Properties prop = new Properties();
			prop.load(new FileInputStream("C:/work space/web1/WebContent/WEB-INF/db.properties"));
			Class.forName(prop.getProperty("driver"));
			DriverManager.getConnection(prop.getProperty("url"), prop.getProperty("user"), prop.getProperty("pwd"));

		} catch (Exception e) {
			e.printStackTrace();
		}
		return con;
	}
	public void dbClose(Connection con, Statement stat, ResultSet rs) {
		try {
			if (con != null)
				if (rs != null)
					rs.close();
			if (stat != null)
				stat.close();
			if (con != null)
				con.close();
			
		} catch (Exception e) {
			e.printStackTrace();
		}
	}
	public boolean loginProc(String uid,String upwd) {
		boolean success = false;
		Connection con = null;
		PreparedStatement stat= null;
		String sql = "select * from userinfo where userid=? and userpwd=?";
		ResultSet rs=null;
		try {
			con=dbCon();
			stat=con.prepareStatement(sql);
			stat.setString(1, uid);
			stat.setString(2, upwd);
			rs=stat.executeQuery();
			if(rs.next()){
				success=true;
			}
		}catch(Exception e) {
				e.printStackTrace();
			}finally {
				dbClose(con,stat,rs);
			}
			return success;			
	}
}
```

