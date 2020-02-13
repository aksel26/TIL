package Enum;


enum Direction {EAST,SOUTH,NORTH,WEST};

public class EnumEx1 {

	public static void main(String[] args) {
		Direction d1 = Direction.EAST;
		Direction d2 = Direction.valueOf("WEST");
		Direction d3 = Enum.valueOf(Direction.class, "EAST");

		
		System.out.println("d1 = " + d1);
		System.out.println("d2 = " + d2);
		System.out.println("d3 = " + d3);
//		d1 = EAST
//		d2 = WEST
//		d3 = EAST
		
		System.out.println("d1==d2 ? "+ (d1==d2)); 	//	false
		System.out.println("d1==d3 ? "+ (d2==d3));	//	false
		System.out.println("d1.equals(d3)? " + d1.equals(d3));	//true
		System.out.println("d1.compareTo(d3) ? "+d1.compareTo(d3));	// 0 
		System.out.println("d1.compareTo(d2) ? "+d1.compareTo(d2));	// -3
		
		switch(d1) {
		case EAST:
			System.out.println("The direction is EAST");break;
		case WEST:
			System.out.println("The direction is WEST");break;
		case NORTH:
			System.out.println("The direction is NORTH");break;
			
		case SOUTH:
			System.out.println("The direction is SOUTH");break;

		default:
			System.out.println("Invalid Direction"); break;

		}
		
		Direction[] arr = Direction.values();
		
		for(Direction d : arr )
			System.out.printf("%s=%d%n", d.name(), d.ordinal());
		
//		EAST=0
//		SOUTH=1
//		NORTH=2
//		WEST=3
			}
	
	

}
