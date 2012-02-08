#ifndef RC_ENCODER_H
#define RC_ENCODER_H

#include "rcmodel.h"
#ifdef _WIN32
#pragma warning(push)
#pragma warning(disable:4146)
#endif
class RCencoder {
public:
  RCencoder() : low(0), range(-1u) {}
  virtual ~RCencoder() {}

  // finish encoding
  void finish();

  // encode a bit s
  void encode(bool s);

  // encode a number s : 0 <= s < 2^n
  template <typename UINT>
  void encode(UINT s, unsigned n);

  // encode a number s : l <= s < h
  template <typename UINT>
  void encode(UINT s, UINT l, UINT h);

  // encode a symbol s using probability modeling
  void encode(unsigned s, RCmodel* rm);

  // virtual function for writing byte stream
  virtual void putbyte(unsigned byte) = 0;

private:
  void encode_shift(unsigned s, unsigned n);
  void encode_ratio(unsigned s, unsigned n);
  void put(unsigned n);
  void normalize();

  unsigned low;   // low end of interval
  unsigned range; // length of interval
};

#include "rcencoder.inl"

#ifdef _WIN32
#pragma warning(pop)
#endif

#endif
