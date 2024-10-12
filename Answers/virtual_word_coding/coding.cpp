void init_virtual_world()
{
    init_sunshine();
    init_atmosphere();
    init_earth();
    init_river();
    init_ocean();
    init_mountains();
    ...
}

void run_virtual_world();

int main()
{
    init_virtual_world();
    run_virtual_world();
}