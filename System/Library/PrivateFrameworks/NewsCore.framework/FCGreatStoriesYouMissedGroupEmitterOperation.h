/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@interface FCGreatStoriesYouMissedGroupEmitterOperation : FCFeedGroupEmittingOperation {

	unsigned long long _restrictToBestSourceFeeds;

}

@property (assign,nonatomic) unsigned long long restrictToBestSourceFeeds;              //@synthesize restrictToBestSourceFeeds=_restrictToBestSourceFeeds - In the implementation block
-(void)performOperation;
-(id)initWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 groupEmitterIdentifier:(id)arg4 ;
-(unsigned long long)restrictToBestSourceFeeds;
-(void)setRestrictToBestSourceFeeds:(unsigned long long)arg1 ;
-(id)_feedTransformation;
@end
