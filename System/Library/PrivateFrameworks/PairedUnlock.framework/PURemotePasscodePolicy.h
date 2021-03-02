/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PairedUnlock.framework/PairedUnlock
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PURemotePasscodePolicy : NSObject <NSSecureCoding> {

	BOOL _modificationAllowed;
	unsigned long long _passcodeMinimumLength;

}

@property (assign,getter=isModificationAllowed,nonatomic) BOOL modificationAllowed;              //@synthesize modificationAllowed=_modificationAllowed - In the implementation block
@property (assign,nonatomic) unsigned long long passcodeMinimumLength;                           //@synthesize passcodeMinimumLength=_passcodeMinimumLength - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isModificationAllowed;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)passcodeMinimumLength;
-(void)setModificationAllowed:(BOOL)arg1 ;
-(void)setPasscodeMinimumLength:(unsigned long long)arg1 ;
@end
