/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FCFeedItemFeature : NSObject <NSCopying> {

	BOOL _queryable;
	NSString* _key;
	long long _type;

}

@property (nonatomic,readonly) NSString * key;                  //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL queryable;                    //@synthesize queryable=_queryable - In the implementation block
@property (nonatomic,readonly) long long type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * topicID; 
+(id)featureForTopicID:(id)arg1 ;
+(id)featureForAllArticles;
-(NSString *)key;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithType:(long long)arg1 key:(id)arg2 ;
-(NSString *)topicID;
-(unsigned long long)hash;
-(long long)type;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)queryable;
-(void)setQueryable:(BOOL)arg1 ;
@end

