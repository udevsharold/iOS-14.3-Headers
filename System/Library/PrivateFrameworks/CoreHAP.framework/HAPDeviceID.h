/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface HAPDeviceID : NSObject <NSCopying, NSSecureCoding> {

	NSData* _data;

}

@property (nonatomic,copy,readonly) NSData * data;                          //@synthesize data=_data - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceIDString; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)deviceIDString;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDeviceIDString:(id)arg1 ;
-(id)initWithDeviceIDData:(id)arg1 ;
-(BOOL)isEqualToDeviceID:(id)arg1 ;
@end
