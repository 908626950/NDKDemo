package stone.com.ndkdemo;

/**
 * Created by niexiang on 16/10/17.
 */
public class NativeAdd {
    static {
        System.loadLibrary("NativeAdd");
    }

    public native String getStringFromNative();
    public native int add(int x,int y);
    public native int calculateSum(int []array);
    private static NativeAdd nativeAdd = null;

    public static NativeAdd getInstance() {
        if (nativeAdd == null) {
            nativeAdd = new NativeAdd();
        }
        return nativeAdd;
    }

}
