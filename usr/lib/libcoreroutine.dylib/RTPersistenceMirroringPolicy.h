/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RTTokenBucket;

@interface RTPersistenceMirroringPolicy : NSObject <NSCopying> {

	long long _qualityOfService;
	RTTokenBucket* _tokenBucket;

}

@property (nonatomic,retain) RTTokenBucket * tokenBucket;                    //@synthesize tokenBucket=_tokenBucket - In the implementation block
@property (nonatomic,readonly) long long qualityOfService;                   //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,readonly) BOOL allowsMirroringViaCellular; 
@property (nonatomic,readonly) BOOL mirroringOperationAllowed; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithQualityOfService:(long long)arg1 ;
-(long long)qualityOfService;
-(double)timeIntervalUntilOperationAllowed;
-(BOOL)mirroringOperationAllowed;
-(BOOL)allowsMirroringViaCellular;
-(id)initWithQualityOfService:(long long)arg1 tokenBucket:(id)arg2 ;
-(RTTokenBucket *)tokenBucket;
-(id)qualityOfServiceToString:(long long)arg1 ;
-(void)setTokenBucket:(RTTokenBucket *)arg1 ;
@end

