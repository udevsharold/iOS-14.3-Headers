/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface HKMobileCountryCode : NSObject {

	NSString* _code;
	NSString* _ISOCode;

}

@property (nonatomic,copy,readonly) NSString * code;                 //@synthesize code=_code - In the implementation block
@property (nonatomic,copy,readonly) NSString * ISOCode;              //@synthesize ISOCode=_ISOCode - In the implementation block
-(NSString *)code;
-(NSString *)ISOCode;
-(id)initWithMobileCountryCode:(id)arg1 ISOCode:(id)arg2 ;
@end

