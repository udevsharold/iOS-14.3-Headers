/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface CUTDSEndpoint : NSObject <NSSecureCoding> {

	int _dataLinkType;
	NSData* _deviceAddress;
	NSString* _serviceType;

}

@property (assign,nonatomic) int dataLinkType;                  //@synthesize dataLinkType=_dataLinkType - In the implementation block
@property (nonatomic,copy) NSData * deviceAddress;              //@synthesize deviceAddress=_deviceAddress - In the implementation block
@property (nonatomic,copy) NSString * serviceType;              //@synthesize serviceType=_serviceType - In the implementation block
+(BOOL)supportsSecureCoding;
-(int)dataLinkType;
-(void)setDataLinkType:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setServiceType:(NSString *)arg1 ;
-(NSString *)serviceType;
-(id)description;
-(NSData *)deviceAddress;
-(void)setDeviceAddress:(NSData *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

