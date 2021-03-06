/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@class NSString;

@interface FCPPTFeedGroupEmittingOperation : FCFeedGroupEmittingOperation {

	NSString* _channelID;

}

@property (nonatomic,retain) NSString * channelID;              //@synthesize channelID=_channelID - In the implementation block
-(void)performOperation;
-(id)initWithChannelID:(id)arg1 context:(id)arg2 fromCursor:(id)arg3 toCursor:(id)arg4 groupEmitterIdentifier:(id)arg5 ;
-(NSString *)channelID;
-(void)setChannelID:(NSString *)arg1 ;
@end

