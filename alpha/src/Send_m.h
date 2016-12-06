//
// Generated file, do not edit! Created by nedtool 4.6 from src/Send.msg.
//

#ifndef _SEND_M_H_
#define _SEND_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



/**
 * Class generated from <tt>src/Send.msg:3</tt> by nedtool.
 * <pre>
 * message Send
 * {
 *     string data;
 * }
 * </pre>
 */
class Send : public ::cMessage
{
  protected:
    opp_string data_var;

  private:
    void copy(const Send& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Send&);

  public:
    Send(const char *name=NULL, int kind=0);
    Send(const Send& other);
    virtual ~Send();
    Send& operator=(const Send& other);
    virtual Send *dup() const {return new Send(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual const char * getData() const;
    virtual void setData(const char * data);
};

inline void doPacking(cCommBuffer *b, Send& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Send& obj) {obj.parsimUnpack(b);}


#endif // ifndef _SEND_M_H_
