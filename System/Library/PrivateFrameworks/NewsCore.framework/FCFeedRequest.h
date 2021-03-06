/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FCFeedRange, FCFeedItemFeature;

@interface FCFeedRequest : NSObject <NSCopying> {

	BOOL _cachedOnly;
	NSString* _feedID;
	long long _feedBin;
	FCFeedRange* _feedRange;
	unsigned long long _maxCount;
	FCFeedItemFeature* _requiredFeature;

}

@property (nonatomic,copy) NSString * feedID;                                //@synthesize feedID=_feedID - In the implementation block
@property (assign,nonatomic) long long feedBin;                              //@synthesize feedBin=_feedBin - In the implementation block
@property (nonatomic,copy) FCFeedRange * feedRange;                          //@synthesize feedRange=_feedRange - In the implementation block
@property (assign,nonatomic) unsigned long long maxCount;                    //@synthesize maxCount=_maxCount - In the implementation block
@property (assign,nonatomic) BOOL cachedOnly;                                //@synthesize cachedOnly=_cachedOnly - In the implementation block
@property (nonatomic,copy) FCFeedItemFeature * requiredFeature;              //@synthesize requiredFeature=_requiredFeature - In the implementation block
-(void)setFeedID:(NSString *)arg1 ;
-(BOOL)cachedOnly;
-(void)setRequiredFeature:(FCFeedItemFeature *)arg1 ;
-(NSString *)feedID;
-(FCFeedItemFeature *)requiredFeature;
-(void)setFeedRange:(FCFeedRange *)arg1 ;
-(void)setMaxCount:(unsigned long long)arg1 ;
-(unsigned long long)maxCount;
-(FCFeedRange *)feedRange;
-(void)setCachedOnly:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)feedBin;
-(void)setFeedBin:(long long)arg1 ;
@end

