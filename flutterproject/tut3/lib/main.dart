import 'package:flutter/material.dart';

void main() {
  runApp(MaterialApp(
    home: MyApp(),
  ));
}

class MyApp extends StatefulWidget {
  @override
  _State createState() => _State();
}

class _State extends State<MyApp> {
  final List<int> msgCount = <int>[1, 2, 3, 4, 5, 6, 7, 8];
  final List<String> names = <String>['AIIMS, All India Institute of Medical Sciences', 'Fortis Hospital, Kolkata', 'Indraprastha Apollo Hospital', 'Lilavati Hospital, Mumba', 'Christian Medical College, Vellore', 'Care Hospital, Banjara', 'Cook', 'Carline'];

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text('Nearby Hospitals'),
      ),
      body: ListView.builder(
        padding: const EdgeInsets.all(8),
        itemCount: names.length,
        itemBuilder: (  BuildContext context,int index ) {
          return Container(
            height: 50,
            margin: EdgeInsets.all(2),
            color: msgCount[index]>=10? Colors.blue[400]:
              msgCount[index]>3? Colors.blue[100]: Colors.grey,
            child: Center(
              child: Text('${names[index]} (${msgCount[index]})',
                style: TextStyle(fontSize: 18),
              )
            ),
          );
        }
      )
    );
  }
}