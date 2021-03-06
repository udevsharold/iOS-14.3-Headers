/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RTLocation, NSDate;

@interface RTHint : NSObject <NSSecureCoding, NSCopying> {

	RTLocation* _location;
	long long _source;
	NSDate* _date;

}

@property (nonatomic,readonly) RTLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) long long source;                   //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSDate * date;                      //@synthesize date=_date - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)hintSourceToString:(long long)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)date;
-(RTLocation *)location;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithLocation:(id)arg1 source:(long long)arg2 date:(id)arg3 ;
-(long long)source;
-(void)encodeWithCoder:(id)arg1 ;
@end

