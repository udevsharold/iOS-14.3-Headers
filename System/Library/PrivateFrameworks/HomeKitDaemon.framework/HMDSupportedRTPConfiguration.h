/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/HAPTLVBase.h>
#import <libobjc.A.dylib/HAPTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface HMDSupportedRTPConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {

	NSArray* _srtpCryptoSuites;

}

@property (nonatomic,copy,readonly) NSArray * srtpCryptoSuites;              //@synthesize srtpCryptoSuites=_srtpCryptoSuites - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(id)tlvData;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_parseFromTLVData;
-(NSArray *)srtpCryptoSuites;
-(id)initWithCryptoSuites:(id)arg1 ;
@end

