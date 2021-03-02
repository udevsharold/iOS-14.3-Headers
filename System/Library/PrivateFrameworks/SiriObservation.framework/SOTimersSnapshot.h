/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SiriObservation.framework/SiriObservation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriObservation/SiriObservation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSDictionary;

@interface SOTimersSnapshot : NSObject <NSCopying, NSSecureCoding> {

	NSDate* _date;
	NSDictionary* _timersByID;

}

@property (nonatomic,copy,readonly) NSDate * date;                          //@synthesize date=_date - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * timersByID;              //@synthesize timersByID=_timersByID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)date;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(NSDictionary *)timersByID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDate:(id)arg1 timersByID:(id)arg2 ;
@end
