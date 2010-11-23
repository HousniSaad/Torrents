
import java.net.*;

public class Localhost {
	public static void main(String[] args) {
		try{
			InetAddress adresse;			
					
			if( args.length == 0)
				adresse= InetAddress.getLocalHost();
			else
				adresse = InetAddress.getByName(args[0]);
				
			byte[] IP =adresse.getAddress();
			
			int i;
			System.out.print("IP: ");
			for(i=0;i<IP.length-1;i++)
				System.out.print(IP[i]+".");
			System.out.print(IP[i]);
			System.out.println("\nname :"+adresse.getHostName());
			System.out.println("adresse :"+adresse.getHostAddress());
			System.out.println("identité :"+adresse);		
			
		}
		catch(Exception e)
		{
			System.out.println("error :"+e);
		}

	}

}
