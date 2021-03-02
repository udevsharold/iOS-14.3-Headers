/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSError;

@interface IDSLocalPairingIdentityDataErrorPair : NSObject <NSSecureCoding> {

	NSData* _identityData;
	NSError* _error;

}

@property (nonatomic,retain) NSData * identityData;              //@synthesize identityData=_identityData - In the implementation block
@property (nonatomic,retain) NSError * error;                    //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithError:(id)arg1 ;
-(NSError *)error;
-(NSData *)identityData;
-(id)initWithCoder:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithIdentityData:(id)arg1 error:(id)arg2 ;
-(id)initWithIdentityData:(id)arg1 ;
-(void)setIdentityData:(NSData *)arg1 ;
@end
