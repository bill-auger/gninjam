// generated 2006/11/25 22:37:45 CET by tobias@THINKPAD-T43.(none)
// using glademm V2.6.0
//
// DO NOT EDIT THIS FILE ! It was created using
// glade-- /home/tobias/src/svn/gninjam/trunk/gninjam.glade
// for gtk 2.10.6 and gtkmm 2.10.4
//
// Please modify the corresponding derived classes in ./src/RemoteUserFrame.hh and./src/RemoteUserFrame.cc

#ifndef _REMOTEUSERFRAME_GLADE_HH
#  define _REMOTEUSERFRAME_GLADE_HH


#if !defined(GLADEMM_DATA)
#define GLADEMM_DATA 
#include <gtkmm/accelgroup.h>

class GlademmData
{  
        
        Glib::RefPtr<Gtk::AccelGroup> accgrp;
public:
        
        GlademmData(Glib::RefPtr<Gtk::AccelGroup> ag) : accgrp(ag)
        {  
        }
        
        Glib::RefPtr<Gtk::AccelGroup>  getAccelGroup()
        {  return accgrp;
        }
};
#endif //GLADEMM_DATA

#include <gtkmm/frame.h>
#include <gtkmm/scale.h>
#include <gtkmm/checkbutton.h>
#include <gtkmm/box.h>
#include <gtkmm/label.h>

class RemoteUserFrame_glade : public Gtk::Frame
{  
protected:
        
        class Gtk::HScale * hscale_volume;
        class Gtk::HScale * hscale_pan;
        class Gtk::CheckButton * checkbutton_mute;
        class Gtk::VBox * vbox;
        class Gtk::Label * label;
        
        RemoteUserFrame_glade(GlademmData *gmm_data);
        
        ~RemoteUserFrame_glade();
private:
        virtual void on_hscale_volume_value_changed() = 0;
        virtual void on_hscale_pan_value_changed() = 0;
        virtual void on_checkbutton_mute_toggled() = 0;
};
#endif
