//
//  VoiceControlViewController.h
//  VoiceControlTest
//
//  Created by Abhinav Suraiya on 7/25/14.
//  Copyright (c) 2014 Abe. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <OpenEars/PocketsphinxController.h>
#import <OpenEars/AcousticModel.h>
#import <OpenEars/OpenEarsEventsObserver.h>

PocketsphinxController *pocketsphinxController;
OpenEarsEventsObserver *openEarsEventsObserver;

@interface VoiceControlViewController : UIViewController <OpenEarsEventsObserverDelegate>
@property (strong, nonatomic) IBOutlet UILabel *Label1;
@property (strong, nonatomic) PocketsphinxController *pocketsphinxController;
@property (strong, nonatomic) OpenEarsEventsObserver *openEarsEventsObserver;

@end
