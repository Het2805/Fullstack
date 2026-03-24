package practice;
class Box
{
	double width,height,depth;
	Box(){
		System.out.println("Default constructer called ");
		width=3;
		height=4;
		depth=5;
		
	}
	Box(double w,double h,double d)
	{
		System.out.println("paramiterized constructer called ");
		width=w;
		height=h;
		depth=d;
	}
	Box(Box b){
		System.out.println("copy constructetr called ");
		width=b.width;
		height=b.height;
		depth=b.depth;
		
	}
	void Volume()
	{
		System.out.println("Volume :"+(width*height*depth));
	}
}
public class Constructer {
	public static void main(String[] args) {
		Box b1=new Box();
		b1.Volume();
		Box b2=new Box(5,6,7);
		b2.Volume();
		Box b3=new Box(b2);
		b3.Volume();
	}
}
