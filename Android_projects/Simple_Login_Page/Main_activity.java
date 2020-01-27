package com.example.connecti;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {
    private EditText Name;
    private EditText Password;
    private Button Login;
    private TextView attempt;
    private int count=5;



    //function foe validate the user
    private void validate(String Name,String Password)
    {
        if(Name.equals("Admin") && Password.equals("1234"))
        {
            Intent intent = new Intent(MainActivity.this,Secondactivity.class);
            startActivity(intent);
        }
        else
        {
            count--;
            attempt.setText("Remaining attempt"+String.valueOf(count));
            if(count == 0)
            {
                Login.setEnabled(false);
            }
        }
    }
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
     Name=(EditText)findViewById(R.id.idName);
     Password=(EditText)findViewById(R.id.idpassword);
     attempt=(TextView)findViewById(R.id.idattempt);
     Login=(Button)findViewById(R.id.idbtnlogin);

        Login.setOnClickListener(new View.OnClickListener() {
                                      public void onClick(View v) {
                                          // TODO Auto-generated method stub
                                          validate(Name.getText().toString(),Password.getText().toString());
                                      }

    });

}
}
