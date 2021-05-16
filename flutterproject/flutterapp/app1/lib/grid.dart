import 'package:flutter/material.dart';

class GridListExample extends StatelessWidget {
  const GridListExample({Key key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return GridView.count(
      // Create a grid with 2 columns. If you change the scrollDirection to
      // horizontal, this would produce 2 rows.
      crossAxisCount: 2,
      scrollDirection: Axis.vertical,
      // Generate 100 Widgets that display their index in the List
      children: List.generate(100, (index) {
        return Center(
          child: Container(
            
            // GestureDetector(
            //   onTap: tmpFunction,
            //   child: Image.network(
            //     'https://flutter-examples.com/wp-content/uploads/2019/09/image_button.png',
            //     width: 200,
            //     fit: BoxFit.cover,
            //   ),
            // ),
            
            
            child: new Image.asset('../images/logo.png'),
            decoration: BoxDecoration(
              border: Border.all(color: Colors.grey, width: 3.0),
            ),
          ),
        );
      }),
    );
  }
}
