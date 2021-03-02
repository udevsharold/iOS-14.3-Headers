/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SharedWebCredentials/SharedWebCredentials-Structs.h>
#import <libobjc.A.dylib/SWCRedactedDescription.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface _SWCApplicationIdentifier : NSObject <SWCRedactedDescription, NSCopying, NSSecureCoding> {

	unsigned long long _hash;
	NSString* _prefix;
	NSString* _bundleIdentifier;

}

@property (readonly) NSString * rawValue; 
@property (readonly) NSString * prefix;                        //@synthesize prefix=_prefix - In the implementation block
@property (readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (getter=isValid,readonly) BOOL valid; 
+(id)new;
+(BOOL)isCaseSensitive;
+(BOOL)supportsSecureCoding;
-(id)initWithString:(id)arg1 ;
-(NSString *)prefix;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqualToApplicationIdentifierIgnoringPrefix:(id)arg1 ;
-(id)UUIDRepresentation;
-(id)initForBundleRecord:(id)arg1 ;
-(NSString *)rawValue;
-(unsigned long long)hash;
-(BOOL)isValid;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)debugDescription;
-(id)redactedDescription;
-(NSString *)bundleIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
@end
