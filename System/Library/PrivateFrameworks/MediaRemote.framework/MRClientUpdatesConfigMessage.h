/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray;

@interface MRClientUpdatesConfigMessage : MRProtocolMessage {

	NSArray* _subscribedPlayerPaths;

}

@property (nonatomic,copy) NSArray * subscribedPlayerPaths;              //@synthesize subscribedPlayerPaths=_subscribedPlayerPaths - In the implementation block
@property (nonatomic,readonly) BOOL nowPlayingUpdates; 
@property (nonatomic,readonly) BOOL artworkUpdates; 
@property (nonatomic,readonly) BOOL volumeUpdates; 
@property (nonatomic,readonly) BOOL keyboardUpdates; 
@property (nonatomic,readonly) BOOL outputDeviceUpdates; 
@property (nonatomic,readonly) BOOL systemEndpointUpdates; 
-(id)initWithUnderlyingCodableMessage:(id)arg1 error:(id)arg2 ;
-(unsigned long long)type;
-(BOOL)nowPlayingUpdates;
-(BOOL)artworkUpdates;
-(BOOL)volumeUpdates;
-(id)initWithNowPlayingUpdates:(BOOL)arg1 artworkUpdates:(BOOL)arg2 volumeUpdates:(BOOL)arg3 keyboardUpdates:(BOOL)arg4 outputDeviceUpdates:(BOOL)arg5 systemEndpointUpdates:(BOOL)arg6 subscribedPlayerPaths:(id)arg7 ;
-(BOOL)keyboardUpdates;
-(BOOL)outputDeviceUpdates;
-(BOOL)systemEndpointUpdates;
-(NSArray *)subscribedPlayerPaths;
-(void)setSubscribedPlayerPaths:(NSArray *)arg1 ;
@end

