/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailFoundation/EmailFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/EFPubliclyDescribable.h>

@class NSString;

@interface EFStringHash : NSObject <NSCopying, NSSecureCoding, EFPubliclyDescribable> {

	long long _primitiveHash;

}

@property (nonatomic,readonly) long long primitiveHash;                           //@synthesize primitiveHash=_primitiveHash - In the implementation block
@property (nonatomic,readonly) long long int64Value; 
@property (nonatomic,copy,readonly) NSString * stringValue; 
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithString:(id)arg1 ;
-(NSString *)ef_publicDescription;
-(long long)int64Value;
-(long long)primitiveHash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)stringValue;
-(id)initWithHash:(long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)_hexStringFromHash:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithMD5Digest:(id)arg1 ;
-(id)redactedStringValue;
-(id)initWithData:(id)arg1 ;
-(NSString *)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
@end

