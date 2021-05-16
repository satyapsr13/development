// import 'package:flutter/material.dart';
// // import 'user.dart';

// void main() {
//   runApp(Myapp());
// }
// void main=>runApp(MyApp());
// class MyApp extends StatelessWidget {
//   @override
//   Widget build(BuildContext context) {
//     return MaterialApp(
//       title: "this is title",
//       theme: ThemeData(
//         primarySwatch: Colors.black,
//       ),
//       home: Myhomepage(title: 'this is home page'),
//     );
//   }
// }

// class Myhomepage extends StatelessWidget {
//   Myhomepage({key key, this.title}) : super(key: key);
//   @override
//   Widget build(BuildContext context) {
//     return Scaffold(
//       appBar:AppBar(
//         title:Text(this.title),
//       ),
//       body:Center(
//         child:Text('hello world'),
//       ),
//     );
//   }
// }
//
//
//
//
//
//
//
import 'package:flutter/material.dart';

void main() => runApp(MyApp());

class MyApp extends StatelessWidget {
  // This widget is the root of your application.
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Hello World Demo Application',
      theme: ThemeData(
        primarySwatch: Colors.green,
      ),
      home: MyHomePage(title: 'this is app bar'),
    );
  }
}

class MyHomePage extends StatelessWidget {
  MyHomePage({Key key, this.title}) : super(key: key);
  final String title;
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text(this.title),
      ),
      body: Center(
        child: Container(
          child: Center(
            child: Container(
              // padding:
              // width: 100,
              // height: 200,
              decoration: BoxDecoration(
                color: Colors.white,
                // borderRadius: BorderRadius.circular(250),
                borderRadius: BorderRadius.only(
                  Radius topleft:34,
                ),

                border: Border.all(
                  color: Colors.white,
                  width: 4,
                ),
//                 border: Border(
//  top: BorderSide(width: 1.0, color: Color(0xFFFFFFFFFF)),
//  left: BorderSide(width: 1.0, color: Color(0xFFFFFFFFFF)),
//  right: BorderSide(width: 1.0, color: Color(0xFFFF000000)),
//  bottom: BorderSide(width: 1.0, color: Color(0xFFFF000000)),
//  ),
              ),
            ),
          ),
          // width:200,
          // height:500,
          // color:Colors.black,
          decoration: BoxDecoration(
            color: Colors.black,
            borderRadius: BorderRadius.circular(25),
            border: Border.all(
              color: Colors.white,
              width: 4,
            ),
          ),
          // border:Borderradius.circle(25.0),
        ),
      ),
    );
  }
}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
// class Myapp extends StatelessWidget {
//   @override
//   Widget build(BuildContext context) {
//     return MaterialApp(
//       home: Scaffold(
//         appBar: AppBar(
//             title: Text(
//           "Flutter Card Example",
//           style: TextStyle(),
//         )),
//         backgroundColor: Colors.yellow,
//         body: Container(
//           child: SingleChildScrollView(
//               child: Column(
//             children: [
//               Container(
//                 width: 100,
//                 height: 100,
//                 decoration: BoxDecoration(
//                     shape: BoxShape.rectangle,
//                     gradient:
//                         LinearGradient(colors: [Colors.red, Colors.blue])),
//                 // child: Home2(),
//               ),
//             ],
//           )),
//         ),
//       ),
//     );
//   }
// }

// class MyHomePage extends StatelessWidget {
//   MyHomePage({Key key, this.title}) : super(key: key);
//   final String title;
//   @override
//   Widget build(BuildContext context) {
//     return Scaffold(
//       appBar: AppBar(
//         title: Text(this.title),
//       ),
//       body: Center(
//           child: Text(
//         'Hello World',
//       )),
//     );
//   }
// }
