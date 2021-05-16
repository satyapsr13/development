import 'package:flutter/material.dart';
import 'package:fancy_drawer/fancy_drawer.dart';
import 'package:html_template/navbar.dart';
//import 'package:html_template/list.dart';
void main() {
  runApp(new MaterialApp(
    home: new MyApp(),
  ));
}

class MyApp extends StatefulWidget {
  @override
  _State createState() => new _State();
}

class _State extends State<MyApp>
    with SingleTickerProviderStateMixin {
  FancyDrawerController _controller;
  final items = ['Horse', 'Cow', 'Camel', 'Sheep', 'Goat']; 
  @override
  void initState() {
    super.initState();
    _controller = FancyDrawerController(
        vsync: this, duration: Duration(milliseconds: 200))
      ..addListener(() {
        setState(() {});
      });
  }

  @override
  void dispose() {
    _controller.dispose();
    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    return Material(
      child: FancyDrawerWrapper(
        backgroundColor: Colors.white,
        controller: _controller,
        drawerItems: <Widget>[
          TextButton(onPressed: () => {/listClassClick(context)/},//aboutusClick(context), 
            child: Text('About Us',
              style: TextStyle(
              fontSize: 18,
              color: Colors.purple.shade700,
              fontWeight: FontWeight.bold,
            ),)
          ),TextButton(onPressed: () => {},//contributeClick(context), 
            child: Text('Contribute',
              style: TextStyle(
              fontSize: 18,
              color: Colors.purple.shade700,
              fontWeight: FontWeight.bold,
            ),))
            ,
        ],
        child: Scaffold(
          appBar: AppBar(
            title: new Text('HTML Template'),
            backgroundColor: Colors.purple.shade700,
            leading: IconButton(
              icon: Icon(
                Icons.menu,
                color: Colors.white,
              ),
              onPressed: () {
                _controller.toggle();
              },
            ),
          ),
          body: ListView.builder(
    itemCount: items.length,
    itemBuilder: (context, index) {
      return Card( //                           <-- Card
        child: ListTile(
          title: Text(items[index]),
          //onTap: = {},
        ),
      );
    },
  ),
      bottomNavigationBar: BottomNavBar(),
        ),
      ),
    );
  }
}