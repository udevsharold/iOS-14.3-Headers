/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaExperience.framework/MediaExperience
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaExperience/MediaExperience-Structs.h>
@class NSString, NSMutableArray;

@interface MXSystemController : NSObject {

	BOOL mAppWantsVolumeChanges;
	BOOL mCanBeNowPlayingApp;
	int mClientPID;
	int mPIDToInheritAppStateFrom;
	NSString* mDisplayID;
	NSMutableArray* mNotificationsSubscribedTo;
	SecTaskRef mSecTask;

}

@property (readonly) BOOL phoneCallExists; 
@property (readonly) BOOL isSomeoneRecording; 
@property (readonly) BOOL someLongFormVideoClientIsPlaying; 
@property (readonly) BOOL someLongFormVideoClientIsActiveOverAirPlayVideo; 
@property (readonly) BOOL someLongFormVideoClientIsPlayingOverAirPlayVideo; 
+(int)getPIDForAnyAppThatWantsVolumeChanges;
+(id)getNotificationSenderQueue;
+(void)notifyAll:(id)arg1 payload:(id)arg2 dontPostIfSuspended:(BOOL)arg3 ;
+(void)updateMXSystemControllerList;
+(void)dumpInfoOfMXSystemControllers;
+(int)getPIDToInheritAppStateFromForPID:(int)arg1 ;
+(BOOL)getCanBeNowPlayingAppForPID:(int)arg1 ;
-(id)initWithPID:(int)arg1 ;
-(int)setAttributeForKey:(id)arg1 andValue:(const void*)arg2 ;
-(void)applyCanBeNowPlayingApp:(const void*)arg1 ;
-(BOOL)someLongFormVideoClientIsPlaying;
-(id)info;
-(BOOL)phoneCallExists;
-(void)dealloc;
-(BOOL)someLongFormVideoClientIsActiveOverAirPlayVideo;
-(int)copyAttributeForKey:(id)arg1 withValueOut:(void*)arg2 ;
-(BOOL)someLongFormVideoClientIsPlayingOverAirPlayVideo;
-(id)getDisplayID;
-(BOOL)isSomeoneRecording;
-(int)applyPIDToInheritAppStateFrom:(const void*)arg1 ;
@end
