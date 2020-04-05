import java.util.concurrent.TimeUnit;

// Program to calculate execution time or elapsed time in Java
class Main
{
	public static void main(String[] args) throws InterruptedException {

		long startTime = System.nanoTime();

		// ... the code being measured starts ...
		
		// sleep for 5 seconds
		TimeUnit.SECONDS.sleep(5);

		// ... the code being measured ends ...

		long endTime = System.nanoTime();

		long timeElapsed = endTime - startTime;

		System.out.println("Execution time in nanoseconds: " + timeElapsed);
		System.out.println("Execution time in milliseconds: " + timeElapsed / 1000000);
	}
}
