
class module
{
    public:
        module(int val);
        virtual ~module();
        int Gettest() { return test; }
        void Settest(int val) { test = val; }
        void testStuff(int val);
    protected:
    private:
        int test;
};
