/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKFamiliarPlayerInternal.h>

@class NSString;

@interface GKFriendRecommendationInternal : GKFamiliarPlayerInternal {

	NSString* _reason;
	NSString* _reason2;
	unsigned _rid;
	int _source;

}

@property (nonatomic,retain) NSString * reason;               //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) NSString * reason2;              //@synthesize reason2=_reason2 - In the implementation block
@property (assign,nonatomic) unsigned rid;                    //@synthesize rid=_rid - In the implementation block
@property (assign,nonatomic) int source;                      //@synthesize source=_source - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)secureCodedPropertyKeys;
-(unsigned)rid;
-(void)setRid:(unsigned)arg1 ;
-(void)dealloc;
-(NSString *)reason;
-(NSString *)reason2;
-(void)setReason:(NSString *)arg1 ;
-(int)source;
-(void)setSource:(int)arg1 ;
-(int)defaultFamiliarity;
-(void)setReason2:(NSString *)arg1 ;
@end
