import 'package:flutter/material.dart';
import 'user.dart';

void main() {
  runApp(m());
}

class m extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        appBar: AppBar(title: Text('Flutter Card Example')),
        backgroundColor: Colors.yellow,
        body: Container(
          child: SingleChildScrollView(
              child: Column(
            children: [
              Container(
                child: Home2(),
              ),
            ],
          )),
        ),
      ),
    );
  }
}
