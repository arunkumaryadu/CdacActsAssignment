package PhotoFrame;

import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.ComponentScan;

@ComponentScan("PhotoFrame")

public class CreatePics {
public CreatePics() {
	System.out.println("Pics are created here");
}

@Bean
public FunnyPic whoCare() {
FunnyPic fPic=new FunnyPic();
fPic.setSize(20);
return fPic;
}


}

