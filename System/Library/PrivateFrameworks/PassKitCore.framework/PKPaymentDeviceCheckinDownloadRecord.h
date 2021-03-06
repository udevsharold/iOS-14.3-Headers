/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentBackgroundDownloadRecord.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID, NSData;

@interface PKPaymentDeviceCheckinDownloadRecord : PKPaymentBackgroundDownloadRecord <NSSecureCoding> {

	NSString* _region;
	NSUUID* _identifier;
	NSData* _responseData;

}

@property (nonatomic,retain) NSString * region;                  //@synthesize region=_region - In the implementation block
@property (nonatomic,retain) NSUUID * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSData * responseData;              //@synthesize responseData=_responseData - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)responseData;
-(void)setRegion:(NSString *)arg1 ;
-(void)setResponseData:(NSData *)arg1 ;
-(NSString *)region;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(void)encodeWithCoder:(id)arg1 ;
@end

