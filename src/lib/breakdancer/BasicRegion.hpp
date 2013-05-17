#pragma once

#include "Read.hpp"

#include <vector>

class BasicRegion {
public:
    typedef std::vector<breakdancer::Read> ReadVector;

    BasicRegion() {}
    BasicRegion(int chr, int start, int end, int normal_read_pairs)
        : chr(chr)
        , start(start)
        , end(end)
        , normal_read_pairs(normal_read_pairs)
    {
    }

    int chr;
    int start;
    int end;
    int normal_read_pairs;

    void swap_reads(ReadVector& reads) {
        _reads.swap(reads);
    }

    int size() const {
        return end - start + 1;
    }

    ReadVector const& reads() const {
        return _reads;
    }

private:
    ReadVector _reads;
};
