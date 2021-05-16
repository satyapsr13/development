import 'package:flutter/material.dart';
// import 'hospitalpage.dart';
// import 'login.dart';
// import 'registration.dart';
// import 'drawer.dart';
// import 'card.dart';
import 'aboutus.dart';
// import 'navbar.dart';

// import 'clinicpage.dart';

void main() {
  runApp(myapp());
    // home: new m(),
}
class myapp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    // return Container(
      
        
    //   ),

     return MaterialApp(
      title: 'Flutter layout demo',
      home: Scaffold(
        appBar: AppBar(
          title: Text('Flutter layout demo'),
        ),
        // body: Center(
        //   // child: SlimyCardExample(),
          
        // ),

        body: Column(  
          mainAxisAlignment: MainAxisAlignment.spaceEvenly,  
          children:<Widget>[  
            Container(  
              child: SlimyCardExample(),  
            ),
            Container(  
              child: SlimyCardExample(),  
            ),
            Container(  
              child: SlimyCardExample(),  
            ),
            Container(  
              child: SlimyCardExample(),  
            ), 
          ] 
        ) 
      ),  
    );  
        
      
    
    
  }
}

// class MyApp extends StatefulWidget {
//   @override
//   return 
//   // _State createState() => new _State();
// }

// class _State extends State<MyApp> {

//   @override
//   Widget build(BuildContext context) {
//     return new Scaffold(
//       appBar: new AppBar(
//         title: new Text('HOSTOCARE'),
//         backgroundColor: Color.fromRGBO(15, 48, 87, 1),
//         actions: <Widget>[
//           new TextButton(
//             onPressed: () {
//                 navigateToLoginPage(context);
//               },
//             child: new Text("Login"),
//             style: TextButton.styleFrom(
//               primary: Colors.white,),),
//           new TextButton(
//             onPressed: () {
//                 navigateToRegPage(context);
//               }, 
//             child: new Text("Register"),
//             style: TextButton.styleFrom(
//               primary: Colors.white,),
//             )
//         ],
//       ),
//       drawer: NavDrawerExample(),
//       body: Container(
//         child: GridListExample()
        
//       ),
      
//       bottomNavigationBar: BottomNavBar(),
//     );
//   }
// }

//   Future navigateToLoginPage(context) async {
//     Navigator.push(context, MaterialPageRoute(builder: (context) => SubPage()));
//   }
//   Future navigateToRegPage(context) async {
//     Navigator.push(context, MaterialPageRoute(builder: (context) => MyRegPage()));
//   }

//   Future hospitalClick(context) async {
//     Navigator.push(context, MaterialPageRoute(builder: (context) => HospitalPage()));
//   }
  