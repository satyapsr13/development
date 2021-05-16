
import 'package:flutter/material.dart';

void main() => runApp(MyApp());

/// This Widget is the main application widget.
class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        appBar: AppBar(title: Text('Flutter Card Example')),
        backgroundColor: Colors.black,
        body: Container(
          child: SingleChildScrollView(
              child: Column(
            children: [
              Container(
                child: MyCardWidget1(
                  
                ),
              ),
              // Container(
              //   child: MyCardWidget2(),
              // ),
              // Container(
              //   child: MyCardWidget4(),
              // ),
              // Container(
              //   child: MyCardWidget3(),
              // ),
              // Container(
              //   child: MyCardWidget2(),
              // ),
              // Container(
              //   child: MyCardWidget(),
              // ),
            ],
          )),
        ),
      ),
    );
  }
}

class MyCardWidget1 extends StatelessWidget {
  MyCardWidget1({Key key}) : super(key: key);
  // int i = 1;
  @override
  Widget build(BuildContext context) {
    return Center(
        child: Container(
      width: 500,
      height: 580,
      padding: new EdgeInsets.all(50.0),
      child: Card(
        shadowColor: Colors.black,
        shape: RoundedRectangleBorder(
          borderRadius: BorderRadius.circular(15.0),
        ),
        color: Colors.blue,
        elevation: 10,
        child: Column(
          mainAxisSize: MainAxisSize.min,
          children: <Widget>[
           Container(
             child: CircleAvatar(
               radius: 100,
               child: Image.asset("../logo.png"),
               
             ),
           ),
            const ListTile(contentPadding:EdgeInsets.symmetric(horizontal: 50.0) ,
              title: Text(
                  ' Elon Musk ',
                  style: TextStyle(fontSize: 35.0,color: Colors.red)
                  ),
                  // tileColor: Color(100),
              //  Icon(Icons.near_me, size: 30),
              // leading: Icon(Icons.phone, size: 20),
                  
              subtitle: Text(' 0755 408 6000'),
              // textAlign: TextAlignVertical.center

              // subtitle: Text('Best of Sonu Nigam Music.',
              //  RaisedButton(
              //     // child: const Text('Play'),
              //     // onPressed: () {/* ... */},
              //   ),
              //     style: TextStyle(fontSize: 18.0)),
            ),
            Container(
             child: Card(
              //  radius: 100,
               child: Image.asset('../logo.png'),
             ),
           ),
            // ButtonBar(
            //   children: <Widget>[
            //     // RaisedButton(
            //     //   // child: const Text('Play'),
            //     //   // onPressed: () {/* ... */},
            //     // ),
            //     RaisedButton(
            //       child: const Text('click me'),
            //       onPressed: () {/* ... */},
            //     ),
            //   ],
            // ),
          ],
        ),
      ),
    ));
  }
}

// class MyCardWidget2 extends StatelessWidget {
//   MyCardWidget2({Key key}) : super(key: key);
//   // int i = 1;
//   @override
//   Widget build(BuildContext context) {
//     return Center(
//         child: Container(
//       // width: 500,
//       height: 180,
//       padding: new EdgeInsets.all(10.0),
//       child: Card(
//         shadowColor: Colors.black,
//         shape: RoundedRectangleBorder(
//           borderRadius: BorderRadius.circular(15.0),
//         ),
//         color: Colors.blue,
//         elevation: 10,
//         child: Column(
//           mainAxisSize: MainAxisSize.min,
//           children: <Widget>[
//             const ListTile(
//               leading: Icon(Icons.person, size: 30),
//               title: Text(' 2. Specialist Doctors  ',
//                   style: TextStyle(fontSize: 20.0)),

              
//             ),
//             Container(
//                 alignment: Alignment(0, 0),
//                 child: Row(
//                   children: <Widget>[
//                     ButtonBar(buttonPadding: EdgeInsets.all(4),
                    
//                       buttonMinWidth: 20,
//                       buttonHeight: 50,
//                       children: <Widget>[
//                         // RaisedButton(
//                         //   // child: const Text('Play'),
//                         //   // onPressed: () {/* ... */},
//                         // ),
//                         RaisedButton(
//                           child: const Text('Dentist'),
//                           onPressed: () {/* ... */},
//                         ),
//                       ],
//                     ),
//                     ButtonBar(buttonPadding: EdgeInsets.all(1.0),
//                       buttonMinWidth: 100,
//                       buttonHeight: 50,
//                       children: <Widget>[
//                         // RaisedButton(
//                         //   // child: const Text('Play'),
//                         //   // onPressed: () {/* ... */},
//                         // ),
//                         RaisedButton(
//                           child: const Text('Cardiologist'),
//                           onPressed: () {/* ... */},
//                         ),
//                       ],
//                     ),
//                     ButtonBar(
//                       buttonMinWidth: 50,
//                       buttonHeight: 50,
//                       children: <Widget>[
//                         // RaisedButton(
//                         //   // child: const Text('Play'),
//                         //   // onPressed: () {/* ... */},
//                         // ),
//                         RaisedButton(
//                           child: const Text('Orthopaedic surgeon'),
//                           onPressed: () {/* ... */},
//                         ),
//                       ],
//                     ),
//                     // ButtonBar(
//                     //   buttonMinWidth: 50,
//                     //   buttonHeight: 50,
//                     //   children: <Widget>[
//                     //     // RaisedButton(
//                     //     //   // child: const Text('Play'),
//                     //     //   // onPressed: () {/* ... */},
//                     //     // ),
//                     //     RaisedButton(
//                     //       child: const Text('ENT specialist'),
//                     //       onPressed: () {/* ... */},
//                     //     ),
//                     //   ],
//                     // ),
//                   ],
//                 )),
            
//           ],
//         ),
//       ),
//     ));
//   }
// }

// class MyCardWidget4 extends StatelessWidget {
//   MyCardWidget4({Key key}) : super(key: key);
//   // int i = 1;
//   @override
//   Widget build(BuildContext context) {
//     return Center(
//         child: Container(
//       width: 500,
//       height: 180,
//       padding: new EdgeInsets.all(10.0),
//       child: Card(
//         shadowColor: Colors.black,
//         shape: RoundedRectangleBorder(
//           borderRadius: BorderRadius.circular(15.0),
//         ),
//         color: Colors.blue,
//         elevation: 10,
//         child: Column(
//           mainAxisSize: MainAxisSize.max,
//           children: <Widget>[
//             const ListTile(
//               leading: Icon(Icons.accessible, size: 40),
//               title: Text(' 3. Seat Matrix ',
//                   style: TextStyle(fontSize: 20.0)),

//             ),
//             Container(
//                 alignment: Alignment(10, 0),
//                 child:new  Row(crossAxisAlignment: CrossAxisAlignment.center,
//                   children: <Widget>[

                    
//                     ButtonBar(buttonPadding: EdgeInsets.all(4),
                    
//                       buttonMinWidth: 100,
//                       buttonHeight: 50,
//                       children: <Widget>[
//                         RaisedButton(
//                           child: const Text('General'),
//                           onPressed: () {/* ... */},
//                         ),
//                       ],
//                     ),
//                     ButtonBar(buttonPadding: EdgeInsets.all(4.0),
//                       buttonMinWidth: 100,
//                       buttonHeight: 50,
//                       children: <Widget>[
//                         // RaisedButton(
//                         //   // child: const Text('Play'),
//                         //   // onPressed: () {/* ... */},
//                         // ),
//                         RaisedButton(
//                           child: const Text('ICU'),
//                           onPressed: () {/* ... */},
//                         ),
//                       ],
//                     ),
//                     ButtonBar(
//                       buttonMinWidth: 100,
//                       buttonHeight: 50,
//                       children: <Widget>[
//                         // RaisedButton(
//                         //   // child: const Text('Play'),
//                         //   // onPressed: () {/* ... */},
//                         // ),
//                         RaisedButton(
//                           child: const Text('CCU'),
//                           onPressed: () {/* ... */},
//                         ),
//                       ],
//                     ),
                    
//                   ],
//                 )
//                 ),
            
//           ],
//         ),
//       ),
//     ));
//   }
// }

// class MyCardWidget3 extends StatelessWidget {
//   MyCardWidget3({Key key}) : super(key: key);
//   // int i = 1;
//   @override
//   Widget build(BuildContext context) {
//     return Center(
//         child: Container(
//       width: 600,
//       height: 220,
//       padding: new EdgeInsets.all(10.0),
//       child: Card(
//         shadowColor: Colors.black,
//         shape: RoundedRectangleBorder(
//           borderRadius: BorderRadius.circular(15.0),
//         ),
//         color: Colors.blue,
//         elevation: 10,
//         child: Column(
//           mainAxisSize: MainAxisSize.min,
//           children: <Widget>[
//             const ListTile(
//               leading: Icon(Icons.home, size: 30),
//               title: Text(' 3. Seat Matrix ', style: TextStyle(fontSize: 30.0)),
//               // subtitle: Text('Best of Sonu Nigam Music.',
//               //  RaisedButton(
//               //     // child: const Text('Play'),
//               //     // onPressed: () {/* ... */},
//               //   ),
//               //     style: TextStyle(fontSize: 18.0)),
//             ),
//             ButtonBar(
//               children: <Widget>[
//                 CircleAvatar(
//                   child: Text('1'),
//                   backgroundColor: Colors.green,
//                 ),
//                 CircleAvatar(
//                   child: Text('2'),
//                   backgroundColor: Colors.green,
//                 ),
//                 CircleAvatar(
//                   child: Text('3'),
//                   backgroundColor: Colors.green,
//                 ),
//                 CircleAvatar(
//                   child: Text('4'),
//                   backgroundColor: Colors.red[500],
//                 ),
//                 CircleAvatar(
//                   child: Text('5'),
//                   backgroundColor: Colors.green,
//                 ),
//                 CircleAvatar(
//                   child: Text('6'),
//                   backgroundColor: Colors.green,
//                 ),
//                 CircleAvatar(
//                   child: Text('7'),
//                   backgroundColor: Colors.green,
//                 ),
//                 CircleAvatar(
//                   child: Text('8'),
//                   backgroundColor: Colors.red[500],
//                 ),

//                 // RaisedButton(
//                 //   // child: const Text('Play'),
//                 //   // onPressed: () {/* ... */},
//                 // ),
//                 RaisedButton(
//                   child: const Text('click me'),
//                   onPressed: () {/* ... */},
//                 ),
//               ],
//             ),
//           ],
//         ),
//       ),
//     ));
//   }
// }
