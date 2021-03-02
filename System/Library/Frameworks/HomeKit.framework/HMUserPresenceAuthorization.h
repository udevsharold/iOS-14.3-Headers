/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface HMUserPresenceAuthorization : NSObject {

	unsigned long long _value;

}

@property (nonatomic,readonly) NSNumber * number; 
@property (nonatomic,readonly) unsigned long long value;              //@synthesize value=_value - In the implementation block
+(id)authWithMessage:(id)arg1 ;
+(id)authWithCoder:(id)arg1 ;
+(id)authWithNumber:(id)arg1 ;
+(id)authWithValue:(unsigned long long)arg1 ;
+(id)authWithDict:(id)arg1 ;
-(unsigned long long)value;
-(NSNumber *)number;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithNumber:(id)arg1 ;
-(void)addToCoder:(id)arg1 ;
-(void)addToPayload:(id)arg1 ;
@end
