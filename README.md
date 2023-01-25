# Baliza para moto con arduino
Usa un arduino para activar balizas en una moto usando los controles de guiño, sin botones adicionales.


Se puede usar cualquier arduino adaptando el código, hay que tener en cuenta de usar un divisor de voltaje para las entradas .

La moto tiene que tener un destellador que soporte los 4 giros encendidos al mismo tiempo . 
( algunas funcionan cuando está regulando pero cuando se acelera deja de funcionar , si pasa ese el problema está en el destellador ) . Si hay problemas, estimo que un  destellador electrónico sería la solución.
   
Las entradas se conectan a través del divisor de voltaje a cada uno de los guiños .

El relé se conecta de forma que al cerrarse haga puente en los dos guiños .

El código es de referencia siendo la primer versión sin mucha optimización una vez que funciono se uso y no se cambio. solo agregue algunos comentarios. 

Este mismo objetivo de usar los controles de guiños para activar las balizas se puedo conseguir sin usar arduino pero es lo que tenia a mano.

Tener en cuenta que hay soluciones comerciales que tal vez cuesten lo mismo o menos que armar este circuito . 

