/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface PPSiriQueryResult : NSObject <NSCopying> {

	NSString* _qid;
	NSString* _domain;
	NSNumber* _confidence;

}

@property (nonatomic,readonly) NSString * qid;                     //@synthesize qid=_qid - In the implementation block
@property (nonatomic,readonly) NSString * domain;                  //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) NSNumber * confidence;              //@synthesize confidence=_confidence - In the implementation block
+(id)siriQueryResultWithQid:(id)arg1 domain:(id)arg2 confidence:(id)arg3 ;
-(NSString *)qid;
-(NSNumber *)confidence;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithQid:(id)arg1 domain:(id)arg2 confidence:(id)arg3 ;
-(BOOL)isEqualToSiriQueryResult:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)domain;
-(BOOL)isEqual:(id)arg1 ;
@end

