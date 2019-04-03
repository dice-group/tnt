#ifndef TNT_HEADERS_HPP
#define TNT_HEADERS_HPP

#include <pistache/http.h>

/**
 * Content-Type for SPARQL OUTPUT JSON FORMAT
 */
namespace tnt::http {
    class SPARQLJSON : public Pistache::Http::Header::Header {
    public:
        NAME("Content-Type")

        SPARQLJSON() {}

        void parse([[maybe_unused]] const std::string &str) override {
        }

        void write(std::ostream &os) const override {
            os << "application/sparql-results+json";
        }
    };
}
#endif //TNT_HEADERS_HPP