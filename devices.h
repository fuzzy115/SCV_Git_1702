#ifndef DEVICES_H_INCLUDED
#define DEVICES_H_INCLUDED
typedef dev<class devices>

inline class devices
{virtual devices() const=0;
virtual devices(devices other)
virtual ~devices();
virtual int report_status(devices dev);
virtual int manage_device(devices dev);
virtual int error_dev(devices dev)

};



#endif // DEVICES_H_INCLUDED
