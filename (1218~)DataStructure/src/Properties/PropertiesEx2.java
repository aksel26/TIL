package Properties;

import java.io.FileInputStream;
import java.util.Properties;

public class PropertiesEx2 {

	public static void main(String[] args) {
	if(args.length!=1) {
		System.out.println("USAGE : java PropertiesEx2 INPUTFILENAME");
		System.exit(0);
		
	}
	Properties prop = new Properties();
	
	String inputFile = args[0];
	
	try {
		prop.load(new FileInputStream(inputFile));
		
	} catch (Exception e) {
		System.out.println("파일을 찾을 수 없음");
			System.exit(0);
	}
	
	
	String name = prop.getProperty("name");
	String[] data = prop.getProperty("Data").split(",");
	int max = 0;
	int min =0;
	int sum= 0;
	for(int i = 0; i<data.length;i++) {
		int intValue = Integer.parseInt(data[i]);
		if(i == 0) max = min = intValue;
		if(max<intValue) max = intValue	;
		if(min>intValue) min = intValue;
		sum += intValue;
	}
	
	System.out.println("이름 : " + name);
	System.out.println("최대값 : " + max);
	System.out.println("최소값 : " + min);
	System.out.println("합계 : " + sum);
	}

}


//	출력

//	이름 : Hong, gildong
//	최대값 : 65
//	최소값 : 1
//	합계 : 189
