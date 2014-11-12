package prac;

import java.io.File;

import com.cybozu.labs.langdetect.Detector;
import com.cybozu.labs.langdetect.DetectorFactory;
import com.cybozu.labs.langdetect.LangDetectException;

public class LanguageFind {

	public static void main(String[] args) throws LangDetectException {
		// TODO Auto-generated method stub
		
		String str = "Hi Unë jam kharb Sahil . I studiuar në Institutin Indian të Teknologjisë , Jodhpur . Unë ma aktualisht në vitin 4 .";
		File profileDirectory = new File("/home/ranger/btp2k15/profiles");
		DetectorFactory.loadProfile(profileDirectory);;
		Detector detector = DetectorFactory.create();
		detector.append(str);
		String lang = detector.detect();
		System.out.println(str.length()+" "+lang);
	}

}