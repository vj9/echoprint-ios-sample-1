//
//  echoprintViewController.h
//  echoprint
//
//  Created by Brian Whitman on 6/13/11.
//  Copyright 2011 The Echo Nest. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <MediaPlayer/MediaPlayer.h>
#import <AVFoundation/AVFoundation.h>
#import <AudioToolbox/AudioToolbox.h>  
#import "TSLibraryImport.h"
#import "MicrophoneInput.h"

#import "FPGenerator.h"


// developer.echonest.com
#define API_KEY @"L2NIBHIT9UWJT8TTQ"
//#define API_HOST @"developer.echonest.com"
//#define API_HOST @"10.11.97.189:37760"
#define API_HOST @"192.168.1.129:37760"

@interface echoprintViewController : UIViewController <MPMediaPickerControllerDelegate> {
	BOOL recording;
	IBOutlet UIButton* recordButton;
	IBOutlet UILabel* statusLine;
	MicrophoneInput* recorder;
    
}

- (IBAction)pickSong:(id)sender;
- (IBAction)startMicrophone:(id)sender;
- (void) getSong: (NSString*) fpCode;

@end

