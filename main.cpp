#include "Graph.h"
#include "Simple_window.h"


int main()
{
	int length = 800;
	int width = 1000;
	Simple_window win{ Point(100,100),length,width,"drill" };
	Lines x;
	x.set_color(Color::black);
	for (int i = 0; i < 801; i += 100)
	{
		x.add(Point{ i,0 }, Point{ i,800 });
		x.add(Point{ 0,i }, Point{ 800,i });
	}

	Graph_lib::Rectangle y{ Point{0,0},100,100 };
	y.set_fill_color(Color::red);
	Graph_lib::Rectangle z{ Point{ 100,100 },100,100 };
	z.set_fill_color(Color::red);
	Graph_lib::Rectangle a{ Point{ 200,200 },100,100 };
	a.set_fill_color(Color::red);
	Graph_lib::Rectangle b{ Point{ 300,300 },100,100 };
	b.set_fill_color(Color::red);
	Graph_lib::Rectangle c{ Point{ 400,400 },100,100 };
	c.set_fill_color(Color::red);
	Graph_lib::Rectangle d{ Point{ 500,500 },100,100 };
	d.set_fill_color(Color::red);
	Graph_lib::Rectangle e{ Point{ 600,600 },100,100 };
	e.set_fill_color(Color::red);
	Graph_lib::Rectangle f{ Point{ 700,700 },100,100 };
	f.set_fill_color(Color::red);

	Point var = { 400,100 };

	Image chess1{ Point{100,300},"King.jpg" };
	Image chess2{ Point{300,600},"King.jpg" };
	Image chess3{ Point{500,200},"King.jpg" };
	

	win.attach(x);
	win.attach(a);
	win.attach(b);
	win.attach(c);
	win.attach(d);
	win.attach(e);
	win.attach(f);
	win.attach(y);
	win.attach(z);
	win.attach(chess1);
	win.attach(chess2);
	win.attach(chess3);
	
	
	
	for(int i = 100; i<800; i += 100)
	{
		Point pos;
		for (pos.y = 100; pos.y < 800; pos.y += 200)
		{
			pos.x = i;
			
			Image chess4{ pos,"Bishop.jpg" };
			win.attach(chess4);

			win.wait_for_button();

		}
		
	}
	


}

