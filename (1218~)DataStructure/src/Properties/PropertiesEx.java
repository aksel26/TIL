package Properties;

import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.util.Properties;

public class PropertiesEx {

	public static void main(String[] args) {
		Properties prop = new Properties();
		prop.setProperty("autoSave", "5");
		prop.setProperty("language", "korean");
		prop.setProperty("timeout", "10");
		System.out.println(prop);
//		{autoSave=5, timeout=10, language=korean}
		
		
		System.out.println(prop.getProperty("autoSave"));
		
//		5
		
		
		System.out.println(prop.getProperty("autoSave","0"));
//		5
//		autoSave라는 키가 없을때 0이출력되는것
		
		System.out.println(prop.getProperty("autoSave2","0"));
//		0
		
		System.out.println(prop.getProperty("autoSave2"));
//		null
		
		prop.list(System.out);
//		-- listing properties --
//		autoSave=5
//		timeout=10
//		language=korean
		
		
		try {
			prop.load(new FileInputStream("output.txt"));
			System.out.println(prop);
//			{autoSave=5, timeout=10, language=korean}
			
			prop.store(new FileOutputStream("output.txt"),"Properties Example");
			prop.storeToXML(new FileOutputStream("ouput.xml"), "Properties Example");
			
			
			//한글을 입력해야 한다면 xml 형태로 많이 사용한다. 깨지기 때문
			
			
		} catch (Exception e) {
			e.printStackTrace();
		}
		
//		hashmap과 달리 파일에 읽고 쓰는것이 편리하기 때문에 properties를 사용한다.
	}

}





