#pragma once

#include <boost/variant.hpp>

#include <boost/optional.hpp>
#include <stdexcept>
#include <regex>

class SClass {
    public:
    SClass() = default;
    virtual ~SClass() = default;

    private:
    int64_t a;
    std::vector<double> k;

    public:
    const int64_t & get_a() const { return a; }
    int64_t & get_mutable_a() { return a; }
    void set_a(const int64_t & value) { this->a = value; }

    const std::vector<double> & get_k() const { return k; }
    std::vector<double> & get_mutable_k() { return k; }
    void set_k(const std::vector<double> & value) { this->k = value; }
};

class PurpleI {
    public:
    PurpleI() = default;
    virtual ~PurpleI() = default;

    private:
    std::vector<double> x;
    std::vector<double> y;

    public:
    const std::vector<double> & get_x() const { return x; }
    std::vector<double> & get_mutable_x() { return x; }
    void set_x(const std::vector<double> & value) { this->x = value; }

    const std::vector<double> & get_y() const { return y; }
    std::vector<double> & get_mutable_y() { return y; }
    void set_y(const std::vector<double> & value) { this->y = value; }
};

class PurpleK {
    public:
    PurpleK() = default;
    virtual ~PurpleK() = default;

    private:
    std::shared_ptr<PurpleI> i;
    std::shared_ptr<PurpleI> o;
    std::shared_ptr<std::vector<std::string>> n;
    int64_t t;
    std::shared_ptr<std::vector<int64_t>> s;
    std::shared_ptr<std::vector<int64_t>> e;

    public:
    std::shared_ptr<PurpleI> get_i() const { return i; }
    void set_i(std::shared_ptr<PurpleI> value) { this->i = value; }

    std::shared_ptr<PurpleI> get_o() const { return o; }
    void set_o(std::shared_ptr<PurpleI> value) { this->o = value; }

    std::shared_ptr<std::vector<std::string>> get_n() const { return n; }
    void set_n(std::shared_ptr<std::vector<std::string>> value) { this->n = value; }

    const int64_t & get_t() const { return t; }
    int64_t & get_mutable_t() { return t; }
    void set_t(const int64_t & value) { this->t = value; }

    std::shared_ptr<std::vector<int64_t>> get_s() const { return s; }
    void set_s(std::shared_ptr<std::vector<int64_t>> value) { this->s = value; }

    std::shared_ptr<std::vector<int64_t>> get_e() const { return e; }
    void set_e(std::shared_ptr<std::vector<int64_t>> value) { this->e = value; }
};

using OK = boost::variant<std::vector<PurpleK>, int64_t>;

class KsO {
    public:
    KsO() = default;
    virtual ~KsO() = default;

    private:
    int64_t a;
    OK k;

    public:
    const int64_t & get_a() const { return a; }
    int64_t & get_mutable_a() { return a; }
    void set_a(const int64_t & value) { this->a = value; }

    const OK & get_k() const { return k; }
    OK & get_mutable_k() { return k; }
    void set_k(const OK & value) { this->k = value; }
};

class FluffyI {
    public:
    FluffyI() = default;
    virtual ~FluffyI() = default;

    private:
    double x;
    int64_t y;

    public:
    const double & get_x() const { return x; }
    double & get_mutable_x() { return x; }
    void set_x(const double & value) { this->x = value; }

    const int64_t & get_y() const { return y; }
    int64_t & get_mutable_y() { return y; }
    void set_y(const int64_t & value) { this->y = value; }
};

class FluffyK {
    public:
    FluffyK() = default;
    virtual ~FluffyK() = default;

    private:
    std::shared_ptr<FluffyI> i;
    std::shared_ptr<FluffyI> o;
    std::shared_ptr<std::string> n;
    int64_t t;
    std::shared_ptr<std::vector<int64_t>> s;
    std::shared_ptr<std::vector<int64_t>> e;
    std::shared_ptr<std::vector<double>> to;
    std::shared_ptr<std::vector<double>> ti;

    public:
    std::shared_ptr<FluffyI> get_i() const { return i; }
    void set_i(std::shared_ptr<FluffyI> value) { this->i = value; }

    std::shared_ptr<FluffyI> get_o() const { return o; }
    void set_o(std::shared_ptr<FluffyI> value) { this->o = value; }

    std::shared_ptr<std::string> get_n() const { return n; }
    void set_n(std::shared_ptr<std::string> value) { this->n = value; }

    const int64_t & get_t() const { return t; }
    int64_t & get_mutable_t() { return t; }
    void set_t(const int64_t & value) { this->t = value; }

    std::shared_ptr<std::vector<int64_t>> get_s() const { return s; }
    void set_s(std::shared_ptr<std::vector<int64_t>> value) { this->s = value; }

    std::shared_ptr<std::vector<int64_t>> get_e() const { return e; }
    void set_e(std::shared_ptr<std::vector<int64_t>> value) { this->e = value; }

    std::shared_ptr<std::vector<double>> get_to() const { return to; }
    void set_to(std::shared_ptr<std::vector<double>> value) { this->to = value; }

    std::shared_ptr<std::vector<double>> get_ti() const { return ti; }
    void set_ti(std::shared_ptr<std::vector<double>> value) { this->ti = value; }
};

using PK = boost::variant<FluffyK, double>;

class P {
    public:
    P() = default;
    virtual ~P() = default;

    private:
    int64_t a;
    std::vector<PK> k;

    public:
    const int64_t & get_a() const { return a; }
    int64_t & get_mutable_a() { return a; }
    void set_a(const int64_t & value) { this->a = value; }

    const std::vector<PK> & get_k() const { return k; }
    std::vector<PK> & get_mutable_k() { return k; }
    void set_k(const std::vector<PK> & value) { this->k = value; }
};

class RClass {
    public:
    RClass() = default;
    virtual ~RClass() = default;

    private:
    int64_t a;
    int64_t k;

    public:
    const int64_t & get_a() const { return a; }
    int64_t & get_mutable_a() { return a; }
    void set_a(const int64_t & value) { this->a = value; }

    const int64_t & get_k() const { return k; }
    int64_t & get_mutable_k() { return k; }
    void set_k(const int64_t & value) { this->k = value; }
};

class LayerKs {
    public:
    LayerKs() = default;
    virtual ~LayerKs() = default;

    private:
    KsO o;
    RClass r;
    P p;
    SClass a;
    SClass s;

    public:
    const KsO & get_o() const { return o; }
    KsO & get_mutable_o() { return o; }
    void set_o(const KsO & value) { this->o = value; }

    const RClass & get_r() const { return r; }
    RClass & get_mutable_r() { return r; }
    void set_r(const RClass & value) { this->r = value; }

    const P & get_p() const { return p; }
    P & get_mutable_p() { return p; }
    void set_p(const P & value) { this->p = value; }

    const SClass & get_a() const { return a; }
    SClass & get_mutable_a() { return a; }
    void set_a(const SClass & value) { this->a = value; }

    const SClass & get_s() const { return s; }
    SClass & get_mutable_s() { return s; }
    void set_s(const SClass & value) { this->s = value; }
};

class PurpleA {
    public:
    PurpleA() = default;
    virtual ~PurpleA() = default;

    private:
    int64_t a;
    std::vector<double> k;
    std::shared_ptr<int64_t> ix;

    public:
    const int64_t & get_a() const { return a; }
    int64_t & get_mutable_a() { return a; }
    void set_a(const int64_t & value) { this->a = value; }

    const std::vector<double> & get_k() const { return k; }
    std::vector<double> & get_mutable_k() { return k; }
    void set_k(const std::vector<double> & value) { this->k = value; }

    std::shared_ptr<int64_t> get_ix() const { return ix; }
    void set_ix(std::shared_ptr<int64_t> value) { this->ix = value; }
};

class G {
    public:
    G() = default;
    virtual ~G() = default;

    private:
    int64_t p;
    SClass k;

    public:
    const int64_t & get_p() const { return p; }
    int64_t & get_mutable_p() { return p; }
    void set_p(const int64_t & value) { this->p = value; }

    const SClass & get_k() const { return k; }
    SClass & get_mutable_k() { return k; }
    void set_k(const SClass & value) { this->k = value; }
};

class SaClass {
    public:
    SaClass() = default;
    virtual ~SaClass() = default;

    private:
    int64_t a;
    int64_t k;
    std::shared_ptr<int64_t> ix;

    public:
    const int64_t & get_a() const { return a; }
    int64_t & get_mutable_a() { return a; }
    void set_a(const int64_t & value) { this->a = value; }

    const int64_t & get_k() const { return k; }
    int64_t & get_mutable_k() { return k; }
    void set_k(const int64_t & value) { this->k = value; }

    std::shared_ptr<int64_t> get_ix() const { return ix; }
    void set_ix(std::shared_ptr<int64_t> value) { this->ix = value; }
};

using ItR = boost::variant<SaClass, int64_t>;

using SK = boost::variant<PurpleK, int64_t>;

class S {
    public:
    S() = default;
    virtual ~S() = default;

    private:
    int64_t a;
    std::vector<SK> k;
    std::shared_ptr<int64_t> ix;

    public:
    const int64_t & get_a() const { return a; }
    int64_t & get_mutable_a() { return a; }
    void set_a(const int64_t & value) { this->a = value; }

    const std::vector<SK> & get_k() const { return k; }
    std::vector<SK> & get_mutable_k() { return k; }
    void set_k(const std::vector<SK> & value) { this->k = value; }

    std::shared_ptr<int64_t> get_ix() const { return ix; }
    void set_ix(std::shared_ptr<int64_t> value) { this->ix = value; }
};

class It {
    public:
    It() = default;
    virtual ~It() = default;

    private:
    std::string ty;
    std::shared_ptr<int64_t> d;
    std::shared_ptr<S> s;
    std::shared_ptr<PurpleA> p;
    ItR r;
    std::string nm;
    std::shared_ptr<std::string> mn;
    std::shared_ptr<SaClass> o;
    std::shared_ptr<G> g;
    std::shared_ptr<SClass> e;
    std::shared_ptr<int64_t> t;
    std::shared_ptr<PurpleA> a;
    std::shared_ptr<SaClass> sk;
    std::shared_ptr<SaClass> sa;
    std::shared_ptr<SClass> c;

    public:
    const std::string & get_ty() const { return ty; }
    std::string & get_mutable_ty() { return ty; }
    void set_ty(const std::string & value) { this->ty = value; }

    std::shared_ptr<int64_t> get_d() const { return d; }
    void set_d(std::shared_ptr<int64_t> value) { this->d = value; }

    std::shared_ptr<S> get_s() const { return s; }
    void set_s(std::shared_ptr<S> value) { this->s = value; }

    std::shared_ptr<PurpleA> get_p() const { return p; }
    void set_p(std::shared_ptr<PurpleA> value) { this->p = value; }

    const ItR & get_r() const { return r; }
    ItR & get_mutable_r() { return r; }
    void set_r(const ItR & value) { this->r = value; }

    const std::string & get_nm() const { return nm; }
    std::string & get_mutable_nm() { return nm; }
    void set_nm(const std::string & value) { this->nm = value; }

    std::shared_ptr<std::string> get_mn() const { return mn; }
    void set_mn(std::shared_ptr<std::string> value) { this->mn = value; }

    std::shared_ptr<SaClass> get_o() const { return o; }
    void set_o(std::shared_ptr<SaClass> value) { this->o = value; }

    std::shared_ptr<G> get_g() const { return g; }
    void set_g(std::shared_ptr<G> value) { this->g = value; }

    std::shared_ptr<SClass> get_e() const { return e; }
    void set_e(std::shared_ptr<SClass> value) { this->e = value; }

    std::shared_ptr<int64_t> get_t() const { return t; }
    void set_t(std::shared_ptr<int64_t> value) { this->t = value; }

    std::shared_ptr<PurpleA> get_a() const { return a; }
    void set_a(std::shared_ptr<PurpleA> value) { this->a = value; }

    std::shared_ptr<SaClass> get_sk() const { return sk; }
    void set_sk(std::shared_ptr<SaClass> value) { this->sk = value; }

    std::shared_ptr<SaClass> get_sa() const { return sa; }
    void set_sa(std::shared_ptr<SaClass> value) { this->sa = value; }

    std::shared_ptr<SClass> get_c() const { return c; }
    void set_c(std::shared_ptr<SClass> value) { this->c = value; }
};

class EElement {
    public:
    EElement() = default;
    virtual ~EElement() = default;

    private:
    std::vector<std::vector<double>> i;
    std::vector<std::vector<double>> o;
    std::vector<std::vector<double>> v;
    bool c;

    public:
    const std::vector<std::vector<double>> & get_i() const { return i; }
    std::vector<std::vector<double>> & get_mutable_i() { return i; }
    void set_i(const std::vector<std::vector<double>> & value) { this->i = value; }

    const std::vector<std::vector<double>> & get_o() const { return o; }
    std::vector<std::vector<double>> & get_mutable_o() { return o; }
    void set_o(const std::vector<std::vector<double>> & value) { this->o = value; }

    const std::vector<std::vector<double>> & get_v() const { return v; }
    std::vector<std::vector<double>> & get_mutable_v() { return v; }
    void set_v(const std::vector<std::vector<double>> & value) { this->v = value; }

    const bool & get_c() const { return c; }
    bool & get_mutable_c() { return c; }
    void set_c(const bool & value) { this->c = value; }
};

class TentacledK {
    public:
    TentacledK() = default;
    virtual ~TentacledK() = default;

    private:
    std::shared_ptr<FluffyI> i;
    std::shared_ptr<FluffyI> o;
    std::shared_ptr<std::string> n;
    int64_t t;
    std::shared_ptr<std::vector<EElement>> s;
    std::shared_ptr<std::vector<EElement>> e;

    public:
    std::shared_ptr<FluffyI> get_i() const { return i; }
    void set_i(std::shared_ptr<FluffyI> value) { this->i = value; }

    std::shared_ptr<FluffyI> get_o() const { return o; }
    void set_o(std::shared_ptr<FluffyI> value) { this->o = value; }

    std::shared_ptr<std::string> get_n() const { return n; }
    void set_n(std::shared_ptr<std::string> value) { this->n = value; }

    const int64_t & get_t() const { return t; }
    int64_t & get_mutable_t() { return t; }
    void set_t(const int64_t & value) { this->t = value; }

    std::shared_ptr<std::vector<EElement>> get_s() const { return s; }
    void set_s(std::shared_ptr<std::vector<EElement>> value) { this->s = value; }

    std::shared_ptr<std::vector<EElement>> get_e() const { return e; }
    void set_e(std::shared_ptr<std::vector<EElement>> value) { this->e = value; }
};

using KsK = boost::variant<std::vector<TentacledK>, EElement>;

class ShapeKs {
    public:
    ShapeKs() = default;
    virtual ~ShapeKs() = default;

    private:
    int64_t a;
    KsK k;

    public:
    const int64_t & get_a() const { return a; }
    int64_t & get_mutable_a() { return a; }
    void set_a(const int64_t & value) { this->a = value; }

    const KsK & get_k() const { return k; }
    KsK & get_mutable_k() { return k; }
    void set_k(const KsK & value) { this->k = value; }
};

enum class Mn : int { ADBE_VECTOR_GRAPHIC_FILL, ADBE_VECTOR_GROUP, ADBE_VECTOR_SHAPE_GROUP, ADBE_VECTOR_SHAPE_RECT };

using ShapeRUnion = boost::variant<RClass, int64_t>;

enum class Ty : int { FL, GR, RC, SH };

class Shape {
    public:
    Shape() = default;
    virtual ~Shape() = default;

    private:
    Ty ty;
    std::shared_ptr<int64_t> d;
    std::shared_ptr<SClass> s;
    std::shared_ptr<SClass> p;
    std::shared_ptr<ShapeRUnion> r;
    std::string nm;
    Mn mn;
    std::shared_ptr<SClass> c;
    std::shared_ptr<RClass> o;
    std::shared_ptr<std::vector<It>> it;
    std::shared_ptr<int64_t> np;
    std::shared_ptr<int64_t> cix;
    std::shared_ptr<int64_t> ix;
    std::shared_ptr<int64_t> ind;
    std::shared_ptr<ShapeKs> ks;

    public:
    const Ty & get_ty() const { return ty; }
    Ty & get_mutable_ty() { return ty; }
    void set_ty(const Ty & value) { this->ty = value; }

    std::shared_ptr<int64_t> get_d() const { return d; }
    void set_d(std::shared_ptr<int64_t> value) { this->d = value; }

    std::shared_ptr<SClass> get_s() const { return s; }
    void set_s(std::shared_ptr<SClass> value) { this->s = value; }

    std::shared_ptr<SClass> get_p() const { return p; }
    void set_p(std::shared_ptr<SClass> value) { this->p = value; }

    std::shared_ptr<ShapeRUnion> get_r() const { return r; }
    void set_r(std::shared_ptr<ShapeRUnion> value) { this->r = value; }

    const std::string & get_nm() const { return nm; }
    std::string & get_mutable_nm() { return nm; }
    void set_nm(const std::string & value) { this->nm = value; }

    const Mn & get_mn() const { return mn; }
    Mn & get_mutable_mn() { return mn; }
    void set_mn(const Mn & value) { this->mn = value; }

    std::shared_ptr<SClass> get_c() const { return c; }
    void set_c(std::shared_ptr<SClass> value) { this->c = value; }

    std::shared_ptr<RClass> get_o() const { return o; }
    void set_o(std::shared_ptr<RClass> value) { this->o = value; }

    std::shared_ptr<std::vector<It>> get_it() const { return it; }
    void set_it(std::shared_ptr<std::vector<It>> value) { this->it = value; }

    std::shared_ptr<int64_t> get_np() const { return np; }
    void set_np(std::shared_ptr<int64_t> value) { this->np = value; }

    std::shared_ptr<int64_t> get_cix() const { return cix; }
    void set_cix(std::shared_ptr<int64_t> value) { this->cix = value; }

    std::shared_ptr<int64_t> get_ix() const { return ix; }
    void set_ix(std::shared_ptr<int64_t> value) { this->ix = value; }

    std::shared_ptr<int64_t> get_ind() const { return ind; }
    void set_ind(std::shared_ptr<int64_t> value) { this->ind = value; }

    std::shared_ptr<ShapeKs> get_ks() const { return ks; }
    void set_ks(std::shared_ptr<ShapeKs> value) { this->ks = value; }
};

class Layer {
    public:
    Layer() = default;
    virtual ~Layer() = default;

    private:
    int64_t ddd;
    int64_t ind;
    int64_t ty;
    std::string nm;
    std::shared_ptr<int64_t> td;
    LayerKs ks;
    int64_t ao;
    std::vector<Shape> shapes;
    int64_t ip;
    int64_t op;
    int64_t st;
    int64_t bm;
    int64_t sr;
    std::shared_ptr<int64_t> tt;

    public:
    const int64_t & get_ddd() const { return ddd; }
    int64_t & get_mutable_ddd() { return ddd; }
    void set_ddd(const int64_t & value) { this->ddd = value; }

    const int64_t & get_ind() const { return ind; }
    int64_t & get_mutable_ind() { return ind; }
    void set_ind(const int64_t & value) { this->ind = value; }

    const int64_t & get_ty() const { return ty; }
    int64_t & get_mutable_ty() { return ty; }
    void set_ty(const int64_t & value) { this->ty = value; }

    const std::string & get_nm() const { return nm; }
    std::string & get_mutable_nm() { return nm; }
    void set_nm(const std::string & value) { this->nm = value; }

    std::shared_ptr<int64_t> get_td() const { return td; }
    void set_td(std::shared_ptr<int64_t> value) { this->td = value; }

    const LayerKs & get_ks() const { return ks; }
    LayerKs & get_mutable_ks() { return ks; }
    void set_ks(const LayerKs & value) { this->ks = value; }

    const int64_t & get_ao() const { return ao; }
    int64_t & get_mutable_ao() { return ao; }
    void set_ao(const int64_t & value) { this->ao = value; }

    const std::vector<Shape> & get_shapes() const { return shapes; }
    std::vector<Shape> & get_mutable_shapes() { return shapes; }
    void set_shapes(const std::vector<Shape> & value) { this->shapes = value; }

    const int64_t & get_ip() const { return ip; }
    int64_t & get_mutable_ip() { return ip; }
    void set_ip(const int64_t & value) { this->ip = value; }

    const int64_t & get_op() const { return op; }
    int64_t & get_mutable_op() { return op; }
    void set_op(const int64_t & value) { this->op = value; }

    const int64_t & get_st() const { return st; }
    int64_t & get_mutable_st() { return st; }
    void set_st(const int64_t & value) { this->st = value; }

    const int64_t & get_bm() const { return bm; }
    int64_t & get_mutable_bm() { return bm; }
    void set_bm(const int64_t & value) { this->bm = value; }

    const int64_t & get_sr() const { return sr; }
    int64_t & get_mutable_sr() { return sr; }
    void set_sr(const int64_t & value) { this->sr = value; }

    std::shared_ptr<int64_t> get_tt() const { return tt; }
    void set_tt(std::shared_ptr<int64_t> value) { this->tt = value; }
};

class Welcome8 {
    public:
    Welcome8() = default;
    virtual ~Welcome8() = default;

    private:
    std::string v;
    int64_t fr;
    int64_t ip;
    int64_t op;
    int64_t w;
    int64_t h;
    std::string nm;
    int64_t ddd;
    std::vector<nlohmann::json> assets;
    std::vector<Layer> layers;

    public:
    const std::string & get_v() const { return v; }
    std::string & get_mutable_v() { return v; }
    void set_v(const std::string & value) { this->v = value; }

    const int64_t & get_fr() const { return fr; }
    int64_t & get_mutable_fr() { return fr; }
    void set_fr(const int64_t & value) { this->fr = value; }

    const int64_t & get_ip() const { return ip; }
    int64_t & get_mutable_ip() { return ip; }
    void set_ip(const int64_t & value) { this->ip = value; }

    const int64_t & get_op() const { return op; }
    int64_t & get_mutable_op() { return op; }
    void set_op(const int64_t & value) { this->op = value; }

    const int64_t & get_w() const { return w; }
    int64_t & get_mutable_w() { return w; }
    void set_w(const int64_t & value) { this->w = value; }

    const int64_t & get_h() const { return h; }
    int64_t & get_mutable_h() { return h; }
    void set_h(const int64_t & value) { this->h = value; }

    const std::string & get_nm() const { return nm; }
    std::string & get_mutable_nm() { return nm; }
    void set_nm(const std::string & value) { this->nm = value; }

    const int64_t & get_ddd() const { return ddd; }
    int64_t & get_mutable_ddd() { return ddd; }
    void set_ddd(const int64_t & value) { this->ddd = value; }

    const std::vector<nlohmann::json> & get_assets() const { return assets; }
    std::vector<nlohmann::json> & get_mutable_assets() { return assets; }
    void set_assets(const std::vector<nlohmann::json> & value) { this->assets = value; }

    const std::vector<Layer> & get_layers() const { return layers; }
    std::vector<Layer> & get_mutable_layers() { return layers; }
    void set_layers(const std::vector<Layer> & value) { this->layers = value; }
};