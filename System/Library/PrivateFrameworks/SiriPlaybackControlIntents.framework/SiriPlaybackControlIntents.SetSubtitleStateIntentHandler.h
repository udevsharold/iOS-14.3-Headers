/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SiriPlaybackControlIntents.framework/SiriPlaybackControlIntents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SetSubtitleStateIntentHandling.h>

@interface SiriPlaybackControlIntents.SetSubtitleStateIntentHandler : NSObject <SetSubtitleStateIntentHandling> {

	 playbackController;
	 deviceSelector;
	 analyticsService;

}
-(id)init;
-(void)handleSetSubtitleState:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveDeviceForSetSubtitleState:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveLanguageForSetSubtitleState:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)confirmSetSubtitleState:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

