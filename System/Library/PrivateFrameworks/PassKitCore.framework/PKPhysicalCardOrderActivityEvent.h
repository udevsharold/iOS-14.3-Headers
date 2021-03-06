/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSString;

@interface PKPhysicalCardOrderActivityEvent : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _activity;
	NSDate* _date;
	NSString* _localizedReason;

}

@property (assign,nonatomic) unsigned long long activity;                    //@synthesize activity=_activity - In the implementation block
@property (nonatomic,retain) NSDate * date;                                  //@synthesize date=_date - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedReason;              //@synthesize localizedReason=_localizedReason - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)activity;
-(void)setActivity:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)date;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setDate:(NSDate *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)localizedReason;
-(id)initWithDictionary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

