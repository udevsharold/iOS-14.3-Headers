/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSData;

@interface HMFHardwareAddress : HMFObject <HMFObject, NSCopying, NSSecureCoding> {

	NSString* _formattedString;
	NSData* _data;

}

@property (readonly) unsigned long long length; 
@property (copy,readonly) NSData * data;                                          //@synthesize data=_data - In the implementation block
@property (copy,readonly) NSString * formattedString;                             //@synthesize formattedString=_formattedString - In the implementation block
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(unsigned long long)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(id)initWithAddressString:(id)arg1 length:(unsigned long long)arg2 ;
-(id)initWithAddressData:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToAddress:(id)arg1 ;
-(NSString *)propertyDescription;
-(NSString *)formattedString;
-(void)encodeWithCoder:(id)arg1 ;
@end

