/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSOpportuneSpeakListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CSOpportuneSpeakListener, NSString;

@interface CSOpportuneSpeakListnerTestService : NSObject <CSOpportuneSpeakListenerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	int _notifyToken;
	CSOpportuneSpeakListener* listener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)opportuneSpeakListener:(id)arg1 hasVADAvailable:(BOOL)arg2 ;
-(void)receiveOpportuneSpeakListenerStop;
-(void)receiveOpportuneSpeakListenerStart;
-(void)opportuneSpeakListener:(id)arg1 hasRemoteVADAvailable:(BOOL)arg2 ;
-(void)opportuneSpeakListener:(id)arg1 didStopUnexpectly:(BOOL)arg2 ;
-(void)start;
@end

