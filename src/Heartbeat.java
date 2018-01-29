
public class Heartbeat {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int dummy=0;
		while (true){
			try{
			Thread.sleep(1000);
			dummy++;
			System.out.println(dummy +" sec have elapsed");
			} catch (InterruptedException e){
				e.printStackTrace();
			}
		}
	}

}
