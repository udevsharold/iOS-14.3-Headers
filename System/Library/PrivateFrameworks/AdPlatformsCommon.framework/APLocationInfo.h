/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AdPlatformsCommon.framework/AdPlatformsCommon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface APLocationInfo : NSObject <NSSecureCoding> {

	NSString* _locality;
	NSString* _administrativeArea;
	NSString* _subAdministrativeArea;
	NSString* _isoCountryCode;
	NSString* _postalCode;

}

@property (retain) NSString * locality;                           //@synthesize locality=_locality - In the implementation block
@property (retain) NSString * administrativeArea;                 //@synthesize administrativeArea=_administrativeArea - In the implementation block
@property (retain) NSString * subAdministrativeArea;              //@synthesize subAdministrativeArea=_subAdministrativeArea - In the implementation block
@property (retain) NSString * isoCountryCode;                     //@synthesize isoCountryCode=_isoCountryCode - In the implementation block
@property (retain) NSString * postalCode;                         //@synthesize postalCode=_postalCode - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)administrativeArea;
-(NSString *)locality;
-(void)setIsoCountryCode:(NSString *)arg1 ;
-(NSString *)subAdministrativeArea;
-(void)setSubAdministrativeArea:(NSString *)arg1 ;
-(NSString *)postalCode;
-(void)setPostalCode:(NSString *)arg1 ;
-(NSString *)isoCountryCode;
-(BOOL)isEmpty;
-(void)setAdministrativeArea:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setLocality:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

