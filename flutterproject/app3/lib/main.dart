// import 'package:flutter/material.dart';

// void main() {
//   runApp(MaterialApp(
//     home: MyApp(),
//   ));
// }

// class MyApp extends StatefulWidget {
//   @override
//   _State createState() => _State();
// }

// class _State extends State<MyApp> {
//   TextEditingController nameController = TextEditingController();
//   TextEditingController passwordController = TextEditingController();

//   @override

//   Widget build(BuildContext context) {
//     return Scaffold(

//       backgroundColor: Colors.pink[100],

//         appBar: AppBar(
//           title: Text('welcome to HOSTOCARE'),
//         ),
//         body: Padding(

//             padding: EdgeInsets.all(10),
//             child: ListView(
//               children: <Widget>[
//                 // CircleAvatar(
//                 //   backgroundImage: AssetImage(),
//                 //   radius: (),
//                 // ),

//                 CircleAvatar(
//                   backgroundImage: AssetImage('images/logo.PNG'),

//                   radius: 300.0,
//                 ),
//                 CircleAvatar(
//                   radius: 100.0,
//                 ),
//                 // Image.asset(
//                 //   'images/logo.png',
//                 //   fit: BoxFit.cover,
//                 // ),
//                 Container(
//                     alignment: Alignment.center,
//                     padding: EdgeInsets.all(10),
//                     child: Text(
//                       'HOSTOCARE',
//                       style: TextStyle(
//                           color: Colors.blue,
//                           fontWeight: FontWeight.w500,
//                           fontSize: 30),
//                     )),
//                 Container(
//                     alignment: Alignment.center,
//                     padding: EdgeInsets.all(10),
//                     child: Text(
//                       'Sign In',
//                       style: TextStyle(fontSize: 20),
//                     )),
//                 Container(
//                   padding: EdgeInsets.all(10),
//                   child: TextField(
//                     controller: nameController,
//                     decoration: InputDecoration(
//                       border: OutlineInputBorder(),
//                       labelText: 'User Name',
//                     ),
//                   ),
//                 ),
//                 Container(
//                   padding: EdgeInsets.fromLTRB(10, 10, 10, 0),
//                   child: TextField(
//                     obscureText: true,
//                     controller: passwordController,
//                     decoration: InputDecoration(
//                       border: OutlineInputBorder(),
//                       labelText: 'Password',
//                     ),
//                   ),
//                 ),
//                 FlatButton(
//                   onPressed: () {
//                     //forgot password screen
//                   },
//                   textColor: Colors.blue,
//                   child: Text('Forgot Password'),
//                 ),
//                 Container(
//                     height: 50,
//                     padding: EdgeInsets.fromLTRB(10, 0, 10, 0),
//                     child: RaisedButton(
//                       textColor: Colors.white,
//                       color: Colors.blue,
//                       child: Text('Login'),
//                       onPressed: () {
//                         print(nameController.text);
//                         print(passwordController.text);
//                       },
//                     )),
//                 Container(
//                     child: Row(
//                   children: <Widget>[
//                     Text('Dont have account?'),
//                     FlatButton(
//                       textColor: Colors.blue,
//                       child: Text(
//                         'Sign in',
//                         style: TextStyle(fontSize: 20),
//                       ),
//                       onPressed: () {
//                         //signup screen
//                       },
//                     )
//                   ],
//                   mainAxisAlignment: MainAxisAlignment.center,
//                 ))
//               ],
//             )));
//   }
// }

// import 'package:flutter/material.dart';

// class LoginPage extends StatefulWidget {
//   @override
//   _LoginPageState createState() => _LoginPageState();
// }
// class _LoginPageState extends State<LoginPage> {
//   @override
//   Widget build(BuildContext context) {
//     final logo = Padding(
//       padding: EdgeInsets.all(20),
//         child: Hero(
//         tag: 'hero',
//         child: CircleAvatar(
//           radius: 56.0,
//           child: Image.asset('assets/ac-logo.png'),
//         )
//       ),
//     );
//     final inputEmail = Padding(
//       padding: EdgeInsets.only(bottom: 10),
//       child: TextField(
//         keyboardType: TextInputType.emailAddress,
//         decoration: InputDecoration(
//           hintText: 'Email',
//           contentPadding: EdgeInsets.symmetric(horizontal: 25, vertical: 20),
//           border: OutlineInputBorder(
//             borderRadius: BorderRadius.circular(50.0)
//           )
//         ),
//       ),
//     );
//     final inputPassword = Padding(
//       padding: EdgeInsets.only(bottom: 20),
//       child: TextField(
//         keyboardType: TextInputType.emailAddress,
//         obscureText: true,
//         decoration: InputDecoration(
//           hintText: 'Password',
//           contentPadding: EdgeInsets.symmetric(horizontal: 25, vertical: 20),
//           border: OutlineInputBorder(
//             borderRadius: BorderRadius.circular(50.0)
//           )
//         ),
//       ),
//     );
//     final buttonLogin = Padding(
//       padding: EdgeInsets.only(bottom: 5),
//       child: ButtonTheme(
//         height: 56,
//         child: RaisedButton(
//           child: Text('Login', style: TextStyle(color: Colors.white, fontSize: 20)),
//           color: Colors.black87,
//           shape: RoundedRectangleBorder(
//             borderRadius: BorderRadius.circular(50)
//           ),
//           onPressed: () => {

//           },
//         ),
//       ),
//     );
//     final buttonForgotPassword = FlatButton(
//       child: Text('Forgot Password', style: TextStyle(color: Colors.grey, fontSize: 16),),
//       onPressed: null
//     );
//     return SafeArea(
//       child: Scaffold(
//         body: Center(
//           child: ListView(
//             shrinkWrap: true,
//             padding: EdgeInsets.symmetric(horizontal: 20),
//             children: <Widget>[
//               logo,
//               inputEmail,
//               inputPassword,
//               buttonLogin,
//               buttonForgotPassword
//             ],
//           ),
//         ),
//       )
//     );
//   }
// }

// import 'package:flutter/material.dart';

// void main() => runApp(MyApp());

// class MyApp extends StatefulWidget {
//   static const String _title = 'Registration Page';
//   @override
//   _MyAppState createState() => _MyAppState();
// }

// class _MyAppState extends State<MyApp> {
//   int selectedGender = 0;
//   void _handleRadioValueChange1(int value) =>
//       setState(() => selectedGender = value);
//   @override
//   Widget build(BuildContext context) {
//     return MaterialApp(
//       title: MyApp._title,
//       home: Scaffold(
//         body: Padding(
//           padding: const EdgeInsets.all(12.0),
//           child: Column(mainAxisAlignment: MainAxisAlignment.start, children: [
//             SizedBox(height: 70),
//             Text("Hostocare",
//                 style: TextStyle(
//                   fontSize: 40.0,
//                   color: Colors.blue,
//                   fontWeight: FontWeight.bold,
//                 )),

//             Text("New Register",
//                 style: TextStyle(
//                   fontSize: 20.0,
//                   fontWeight: FontWeight.bold,
//                 )),
//             SizedBox(height: 30),

//             // ClipRRect(
//             //   borderRadius: BorderRadius.circular(100.0),
//             //   child:
//             //       Image.asset('logo.png', height: 150),
//             // ),

//             SizedBox(height: 20),
//             Container(
//               width: double.maxFinite,
//               child: Row(
//                 children: <Widget>[
//                   Flexible(
//                     flex: 1,
//                     child: Container(
//                       decoration: BoxDecoration(
//                         borderRadius: BorderRadius.circular(10.0),
//                         boxShadow: [
//                           BoxShadow(
//                               color: Colors.black,
//                               blurRadius: 10,
//                               offset: Offset(2.0, 5.0))
//                         ],
//                         color: Colors.grey[300],
//                       ),
//                       child: Padding(
//                         padding: const EdgeInsets.symmetric(horizontal: 10.0),
//                         child: TextField(
//                           style: TextStyle(fontSize: 20.0, color: Colors.black),
//                           obscureText: false,
//                           decoration: InputDecoration(
//                             border: InputBorder.none,
//                             hintText: "First Name",
//                             // fillColor: Colors.green
//                           ),
//                         ),
//                       ),
//                     ),
//                   ),
//                   SizedBox(width: 10),
//                   Flexible(
//                     flex: 1,
//                     child: Container(
//                       decoration: BoxDecoration(
//                         borderRadius: BorderRadius.circular(10.0),
//                         boxShadow: [
//                           BoxShadow(
//                               color: Colors.black,
//                               blurRadius: 10,
//                               offset: Offset(2.0, 5.0))
//                         ],
//                         color: Colors.grey[300],
//                       ),
//                       child: Padding(
//                         padding: const EdgeInsets.symmetric(horizontal: 10.0),
//                         child: TextField(
//                           style: TextStyle(fontSize: 20.0, color: Colors.black),
//                           obscureText: false,
//                           decoration: InputDecoration(
//                             border: InputBorder.none,
//                             hintText: "Last Name",
//                             // fillColor: Colors.green
//                           ),
//                         ),
//                       ),
//                     ),
//                   ),
//                 ],
//               ),
//             ),
//             SizedBox(
//               height: 10,
//             ),
//             Text("Select Gender",
//                 style: TextStyle(fontSize: 16.0, color: Colors.black)),
//             Row(
//               mainAxisAlignment: MainAxisAlignment.center,
//               children: <Widget>[
//                 Radio(
//                   activeColor: Colors.black,
//                   value: 0,
//                   groupValue: selectedGender,
//                   onChanged: _handleRadioValueChange1,
//                 ),
//                 Text(
//                   'Male',
//                   style: TextStyle(fontSize: 16.0, color: Colors.black),
//                 ),
//                 Radio(
//                   activeColor: Colors.black,
//                   value: 1,
//                   groupValue: selectedGender,
//                   onChanged: _handleRadioValueChange1,
//                 ),
//                 Text(
//                   'Female',
//                   style: new TextStyle(fontSize: 16.0, color: Colors.black),
//                 ),
//                 Radio(
//                   activeColor: Colors.black,
//                   value: 2,
//                   groupValue: selectedGender,
//                   onChanged: _handleRadioValueChange1,
//                 ),
//                 Text(
//                   'Others',
//                   style: new TextStyle(fontSize: 16.0, color: Colors.black),
//                 ),
//               ],
//             ),
//             SizedBox(
//               height: 20,
//             ),
//             Container(
//               // Ltext("hello");
//             ),
//             Container(
//               decoration: BoxDecoration(
//                 borderRadius: BorderRadius.circular(10.0),
//                 boxShadow: [
//                   BoxShadow(
//                       color: Colors.black,
//                       blurRadius: 10,
//                       offset: Offset(2.0, 5.0))
//                 ],
//                 color: Colors.grey[300],
//               ),
//               // child:Icon(Icons.mail),
//               child: Padding(
//                 padding: const EdgeInsets.symmetric(horizontal: 10.0),
//                 child: TextField(
//                   style: TextStyle(fontSize: 20.0, color: Colors.black),
//                   obscureText: false,
//                   decoration: InputDecoration(
//                     border: InputBorder.none,
//                     hintText: " Email Id",
//                   ),
//                 ),
//               ),
//             ),
//             SizedBox(
//               height: 10,
//             ),
//             Container(
//               decoration: BoxDecoration(
//                 borderRadius: BorderRadius.circular(10.0),
//                 boxShadow:[
//                BoxShadow(
//                  color: Colors.black,
//                  blurRadius: 10,
//                  offset: Offset(2.0,5.0)
//                )
//                ],
//                 color: Colors.grey[300],
//               ),
//               child: Padding(
//                 padding: const EdgeInsets.symmetric(horizontal: 10.0),
//                 child: TextField(
//                   style: TextStyle(fontSize: 20.0, color: Colors.black),
//                   obscureText: true,
//                   decoration: InputDecoration(
//                     border: InputBorder.none,
//                     hintText: "Password",
//                   ),
//                 ),
//               ),
//             ),
//             SizedBox(
//               height: 10,
//             ),
//             Container(
//               decoration: BoxDecoration(
//                 borderRadius: BorderRadius.circular(10.0),
//                 boxShadow:[
//                BoxShadow(
//                  color: Colors.black,
//                  blurRadius: 10,
//                  offset: Offset(2.0,5.0)
//                )
//                ],
//                 color: Colors.grey[300],
//               ),
//               child: Padding(
//                 padding: const EdgeInsets.symmetric(horizontal: 10.0),
//                 child: TextField(
//                   style: TextStyle(fontSize: 20.0, color: Colors.black),
//                   obscureText: true,
//                   decoration: InputDecoration(
//                     border: InputBorder.none,
//                     hintText: "Retype Password",
//                   ),
//                 ),
//               ),
//             ),
//             SizedBox(
//               height: 40,
//             ),
//             Container(
//               width: 250,
//               child: RaisedButton(
//                 color: Colors.black,
//                 onPressed: () {},
//                 child: Text(
//                   "Register Now",
//                   style: TextStyle(fontSize: 20.0, color: Colors.white),
//                 ),
//               ),
//             ),
//           ]),
//         ),
//       ),
//     );
//   }
// }

import 'package:flutter/material.dart';
import 'package:flutter/services.dart'
    show
        FilteringTextInputFormatter,
        TextCapitalization,
        TextInputFormatter,
        TextInputType;

void main() {
  runApp(TextFormFieldExample());
}

class TextFormFieldExample extends StatefulWidget {
  const TextFormFieldExample({Key key}) : super(key: key);

  @override
  State<StatefulWidget> createState() => _TextFormFieldExampleState();
}

// Adapted from the text form demo in official gallery app:
// https://github.com/flutter/flutter/blob/master/examples/flutter_gallery/lib/demo/material/text_form_field_demo.dart
class _TextFormFieldExampleState extends State<TextFormFieldExample> {
  final GlobalKey<FormFieldState<String>> _passwordFieldKey =
      GlobalKey<FormFieldState<String>>();

  String _name;
  String _phoneNumber;
  String _email;
  String _password;

  String _validateName(String value) {
    if (value.isEmpty) return 'Name is required.';
    final RegExp nameExp = RegExp(r'^[A-Za-z ]+$');
    if (!nameExp.hasMatch(value)) {
      return 'Please enter only alphabetical characters.';
    }
    return null;
  }

  @override
  Widget build(BuildContext context) {
    return SingleChildScrollView(
      padding: const EdgeInsets.symmetric(horizontal: 16.0),
      child: Column(
        mainAxisAlignment: MainAxisAlignment.spaceEvenly,
        crossAxisAlignment: CrossAxisAlignment.stretch,
        children: <Widget>[
          const SizedBox(height: 24.0),
          // "Name" form.
          TextFormField(
            textCapitalization: TextCapitalization.words,
            decoration: const InputDecoration(
              border: UnderlineInputBorder(),
              filled: true,
              icon: Icon(Icons.person),
              hintText: 'What do people call you?',
              labelText: 'Name *',
            ),
            onSaved: (String value) {
              this._name = value;
              print('name=$_name');
            },
            validator: _validateName,
          ),
          const SizedBox(height: 24.0),
          // "Phone number" form.
          TextFormField(
            decoration: const InputDecoration(
              border: UnderlineInputBorder(),
              filled: true,
              icon: Icon(Icons.phone),
              hintText: 'Where can we reach you?',
              labelText: 'Phone Number *',
              prefixText: '+86',
            ),
            keyboardType: TextInputType.phone,
            onSaved: (String value) {
              this._phoneNumber = value;
              print('phoneNumber=$_phoneNumber');
            },
            // TextInputFormatters are applied in sequence.
            inputFormatters: <TextInputFormatter>[
              FilteringTextInputFormatter.digitsOnly
            ],
          ),
          const SizedBox(height: 24.0),
          // "Email" form.
          TextFormField(
            decoration: const InputDecoration(
              border: UnderlineInputBorder(),
              filled: true,
              icon: Icon(Icons.email),
              hintText: 'Your email address',
              labelText: 'E-mail',
            ),
            keyboardType: TextInputType.emailAddress,
            onSaved: (String value) {
              this._email = value;
              print('email=$_email');
            },
          ),
          const SizedBox(height: 24.0),
          // "Life story" form.
          TextFormField(
            decoration: const InputDecoration(
              border: OutlineInputBorder(),
              hintText: 'Tell us about yourself',
              helperText: 'Keep it short, this is just a demo.',
              labelText: 'Life story',
            ),
            maxLines: 3,
          ),
          const SizedBox(height: 24.0),
          // "Salary" form.
          TextFormField(
            keyboardType: TextInputType.number,
            decoration: const InputDecoration(
                border: OutlineInputBorder(),
                labelText: 'Salary',
                prefixText: '\$',
                suffixText: 'USD',
                suffixStyle: TextStyle(color: Colors.green)),
          ),
          const SizedBox(height: 24.0),
          // "Password" form.
          PasswordField(
            fieldKey: _passwordFieldKey,
            helperText: 'No more than 8 characters.',
            labelText: 'Password *',
            onFieldSubmitted: (String value) {
              setState(() {
                this._password = value;
              });
            },
          ),
          const SizedBox(height: 24.0),
          // "Re-type password" form.
          TextFormField(
            enabled: this._password != null && this._password.isNotEmpty,
            decoration: const InputDecoration(
              border: UnderlineInputBorder(),
              filled: true,
              labelText: 'Re-type password',
            ),
            maxLength: 8,
            obscureText: true,
          ),
        ],
      ),
    );
  }
}

class PasswordField extends StatefulWidget {
  const PasswordField({
    this.fieldKey,
    this.hintText,
    this.labelText,
    this.helperText,
    this.onSaved,
    this.validator,
    this.onFieldSubmitted,
  });

  final Key fieldKey;
  final String hintText;
  final String labelText;
  final String helperText;
  final FormFieldSetter<String> onSaved;
  final FormFieldValidator<String> validator;
  final ValueChanged<String> onFieldSubmitted;

  @override
  _PasswordFieldState createState() => _PasswordFieldState();
}

class _PasswordFieldState extends State<PasswordField> {
  bool _obscureText = true;

  @override
  Widget build(BuildContext context) {
    return TextFormField(
      key: widget.fieldKey,
      obscureText: _obscureText,
      maxLength: 8,
      onSaved: widget.onSaved,
      validator: widget.validator,
      onFieldSubmitted: widget.onFieldSubmitted,
      decoration: InputDecoration(
        border: const UnderlineInputBorder(),
        filled: true,
        hintText: widget.hintText,
        labelText: widget.labelText,
        helperText: widget.helperText,
        suffixIcon: GestureDetector(
          onTap: () {
            setState(() {
              _obscureText = !_obscureText;
            });
          },
          child: Icon(_obscureText ? Icons.visibility : Icons.visibility_off),
        ),
      ),
    );
  }
}
