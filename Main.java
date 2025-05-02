public class Main {
    public static native void McAfeeActivate();

    static {
        System.load("C:\\Users\\Socce\\source\\repos\\McAfee\\x64\\Debug\\McAfee.dll");
    }

    public static void main(String[] args) {
        McAfeeActivate();
    }
}
