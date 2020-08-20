#include <memory>

#include <icecc/comm.h>

int main() {

    auto discover = std::make_unique<DiscoverSched>("nexenio", 2, "desktop-client-linux");

    discover->try_get_scheduler();

    return 0;
}