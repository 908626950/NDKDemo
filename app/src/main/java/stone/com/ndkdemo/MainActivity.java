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
    }
}
