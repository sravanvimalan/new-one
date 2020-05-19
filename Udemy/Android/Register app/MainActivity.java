package com.example.learning;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }

   public  void onButtonClick(View view)
    {
       EditText mFirstName = findViewById(R.id.etfirstname);
       EditText mLastName = findViewById(R.id.etlastname);
       EditText mEmail = findViewById(R.id.etemail);

       TextView mFname = findViewById(R.id.tvfirstname);
       TextView mLname = findViewById(R.id.tvlastname);
       TextView mEmailid = findViewById(R.id.tvemail);

       mFname.setText("First name: "+mFirstName.getText().toString());
       mLname.setText("Last name: "+mLastName.getText().toString());
       mEmailid.setText("Email id: "+mEmail.getText().toString());
    }


}
