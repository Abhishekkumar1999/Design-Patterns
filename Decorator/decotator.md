<h4>Decorator Design Pattern</h>
<br/>
<h5>What?</h5>
<p>Decorator is a structural design patter</p>
<h5>When?</h5>
<p>Assume you want to design a class for pizza, and you have some based pizzas and you can add different toppings to it. If we start creating a separate class for each permutations of possible toppings then number of classes can explode like there will be a class for Base pizza + extra cheese, Base pizza + extra chicken and many more.</p>
<p>So, the problem here is if in future in topping increasing then there will be more combinations and number of classes can explod. Hence, this way is not scalable and maintainable.</p>

<h5>Solution</h5>
The solution to this is decorator design pattern.
<img src="Design Patterns/Decorator/Screenshot 2026-02-18 at 11.23.22 PM.png" alt="Class diagram">

The one thing notice in the class digram here is, in this pattern the decorator has both "is-a" relationship as well as "has-a" relationship

