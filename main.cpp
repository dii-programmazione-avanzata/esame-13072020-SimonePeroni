#include <iostream>
#include "Vector3.h"
#include "PhysicBody.h"
#include "PhysicSystem.h"
#include "Spring.h"
#include "Damper.h"

using namespace std;

int main() {
    PhysicBody a(1);
    PhysicBody b(2, Vector3(1.1));
    PhysicBody c(3, Vector3(1.9));

    Spring k1(10, 1);
    k1.connect(a, b);
    Spring k2(100, 1);
    k2.connect(b, c);
    Spring k3(200, 2.1);
    k3.connect(c, a);

    Damper d1(2);
    d1.connect(a, b);
    Damper d2(10);
    d2.connect(b, c);
    Damper d3(15);
    d3.connect(c, a);

    PhysicSystem sys;
    sys.setBodies(new PhysicBody *[3]{&a, &b, &c}, 3);
    sys.setConnections(new Applicable *[6]{&k1, &d1, &k2, &d2, &k3, &d3}, 6);
    sys.Simulate(0.05, 20, false, true);

    return 0;
}
