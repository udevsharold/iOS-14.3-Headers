/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class MRNowPlayingState, NSArray, NSString;

@interface MRSetDefaultSupportedCommandsMessage : MRProtocolMessage {

	MRNowPlayingState* _state;

}

@property (nonatomic,readonly) NSArray * supportedCommands; 
@property (nonatomic,readonly) NSString * bundleID; 
-(NSString *)bundleID;
-(id)initWithUnderlyingCodableMessage:(id)arg1 error:(id)arg2 ;
-(NSArray *)supportedCommands;
-(unsigned long long)type;
-(id)initWithDefaultSupportedCommands:(id)arg1 forPlayerPath:(id)arg2 ;
@end

