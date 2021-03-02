/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCSingleTagFeedGroupEmittingOperation.h>

@interface FCTestFeedGroupEmittingOperation : FCSingleTagFeedGroupEmittingOperation {

	BOOL _disableFiltering;

}

@property (assign,nonatomic) BOOL disableFiltering;              //@synthesize disableFiltering=_disableFiltering - In the implementation block
-(id)feedTransformations;
-(unsigned long long)feedItemsToFetchForDesiredHeadlineCount:(unsigned long long)arg1 ;
-(BOOL)disableFiltering;
-(void)setDisableFiltering:(BOOL)arg1 ;
@end
