/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AirPlayReceiver/AirPlayReceiver-Structs.h>
@class NSObject;

@interface AirPlayReceiverMediaRemoteHelper : NSObject {

	void* _mediaRemotePlayer;
	void* _mediaRemotePlayerPathRef;
	void* _mediaRemoteCommandHandlerToken;
	NSObject*<OS_dispatch_queue> _dataTransferQueue;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	OpaqueFigCFWeakReferenceHolderRef _weakDelegate;

}
+(void)becomeNowPlayingApplication;
+(void)resignAsNowPlayingApplication;
+(void)setIsNowPlayingApplication:(unsigned char)arg1 ;
-(void)dealloc;
-(id)initWithPlayerID:(CFStringRef)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)setMRNowPlayingInfo:(CFDictionaryRef)arg1 withMergePolicy:(unsigned char)arg2 ;
-(void)setMRPlaybackState:(unsigned)arg1 ;
-(unsigned)handleMediaRemoteCommand:(unsigned)arg1 withOptions:(CFDictionaryRef)arg2 ;
-(void)registerCommandHandler;
-(void)unregisterCommandHandler;
-(void)setMRSupportedCommands:(CFArrayRef)arg1 ;
-(void)setMRSupportedCommandsFromSerializedArray:(CFArrayRef)arg1 ;
-(void)makeNowPlayingPlayer;
-(void)removeNowPlayingArtwork;
-(void)setAPNowPlayingInfo:(CFDictionaryRef)arg1 ;
-(void)setMRNowPlayingClient:(CFDataRef)arg1 ;
@end
