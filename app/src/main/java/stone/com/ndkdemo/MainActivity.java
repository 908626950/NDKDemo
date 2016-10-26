package stone.com.ndkdemo;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        Log.v("HELLO",NativeAdd.getInstance().getStringFromNative()+"");
        Log.v("HELLO","2+3="+NativeAdd.getInstance().add(2,3));
        int [] testArray = {1,2,3,4,5,6,7};
        Log.v("HELLO","testArray sum="+NativeAdd.getInstance().calculateSum(testArray));
    }
}
