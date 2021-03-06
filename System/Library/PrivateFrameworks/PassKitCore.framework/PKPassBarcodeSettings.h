/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL;

@interface PKPassBarcodeSettings : NSObject <NSSecureCoding> {

	long long _initialBarcodeFetchCount;
	NSURL* _barcodeServiceURL;

}

@property (nonatomic,readonly) long long initialBarcodeFetchCount;              //@synthesize initialBarcodeFetchCount=_initialBarcodeFetchCount - In the implementation block
@property (nonatomic,readonly) NSURL * barcodeServiceURL;                       //@synthesize barcodeServiceURL=_barcodeServiceURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)barcodeServiceURL;
-(long long)initialBarcodeFetchCount;
@end

