package PhotoFrame;

import org.springframework.context.annotation.AnnotationConfigApplicationContext;

import annot.basics.Remote_Step2;
import annot.basics.Step1CreateParts;

public class TestFramePic {
public static void main(String[] args) {
	AnnotationConfigApplicationContext c = 	new AnnotationConfigApplicationContext(CreatePics.class);
	Frame x = c.getBean(Frame.class);
	

}
}
