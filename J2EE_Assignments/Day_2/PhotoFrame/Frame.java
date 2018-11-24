package PhotoFrame;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Component;

@Component
public class Frame {
	@Autowired
	FunnyPic fPic;

	public Frame() {
	System.out.println("Frame was created");
		// TODO Auto-generated constructor stub
	}

	public void setfPic(FunnyPic fPic) {
		this.fPic = fPic;
	}
	

}

/*
package annot.basics;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Component;

@Component
public class Remote_Step2 {
	@Autowired
	Duracell d1;
	
	public void setd1(Duracell d1) {
		this.d1=d1;
		
	}
	Remote_Step2(){
		System.out.println("Remote is created");
	}

	public void pressNonStop() {
		// TODO Auto-generated method stub
		System.out.println("Hi ujjwal");
	}

}
*/