/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString, NSData, NSUUID;

@interface HMSettingValue : NSObject <NSCopying, NSSecureCoding> {

	long long _type;
	NSNumber* _numberValue;
	NSString* _stringValue;
	NSData* _dataValue;
	NSUUID* _selectionIdentifier;
	NSString* _selectionValue;

}

@property (nonatomic,readonly) long long type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * numberValue;                    //@synthesize numberValue=_numberValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * stringValue;                    //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,copy,readonly) NSData * dataValue;                        //@synthesize dataValue=_dataValue - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * selectionIdentifier;              //@synthesize selectionIdentifier=_selectionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * selectionValue;                 //@synthesize selectionValue=_selectionValue - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)stringValue;
-(NSNumber *)numberValue;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)dataValue;
-(id)description;
-(long long)type;
-(id)initDataSettingWithValue:(id)arg1 ;
-(id)initNumberSettingWithValue:(id)arg1 ;
-(id)initStringSettingWithValue:(id)arg1 ;
-(id)initWithType:(long long)arg1 stringValue:(id)arg2 numberValue:(id)arg3 dataValue:(id)arg4 selectionIdentifier:(id)arg5 selectionValue:(id)arg6 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSUUID *)selectionIdentifier;
-(NSString *)selectionValue;
-(void)encodeWithCoder:(id)arg1 ;
@end
