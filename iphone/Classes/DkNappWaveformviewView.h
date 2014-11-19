/**
 * Module developed by Napp ApS
 * www.napp.dk
 * Mads Møller
 *
 * Appcelerator Titanium is Copyright (c) 2009-2010 by Appcelerator, Inc.
 * and licensed under the Apache Public License (version 2)
 */

#import "TiUIView.h"
#import <UIKit/UIKit.h>
#import "FDWaveformView.h"

@interface DkNappWaveformviewView : TiUIView <FDWaveformViewDelegate> {

@private
    FDWaveformView *waveform;
    
}

-(NSNumber *)totalSamples:(id)unused;


@end
