/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <CoreSuggestions/SGLabeledObject.h>

@class NSString, SGPostalAddressComponents;

@interface SGPostalAddress : SGLabeledObject {

	NSString* _cachedAddress;
	opaque_pthread_mutex_t _cachedAddressLock;
	NSString* _rawAddress;
	SGPostalAddressComponents* _components;

}

@property (nonatomic,readonly) NSString * address; 
@property (nonatomic,readonly) NSString * rawAddress;                               //@synthesize rawAddress=_rawAddress - In the implementation block
@property (nonatomic,readonly) SGPostalAddressComponents * components;              //@synthesize components=_components - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)postalAddress:(id)arg1 components:(id)arg2 label:(id)arg3 extractionInfo:(id)arg4 recordId:(id)arg5 ;
+(id)postalAddress:(id)arg1 components:(id)arg2 label:(id)arg3 extractionType:(unsigned long long)arg4 recordId:(id)arg5 origin:(id)arg6 ;
+(id)postalAddress:(id)arg1 components:(id)arg2 label:(id)arg3 extractionType:(unsigned long long)arg4 recordId:(id)arg5 ;
-(SGPostalAddressComponents *)components;
-(NSString *)address;
-(void)dealloc;
-(unsigned long long)hash;
-(BOOL)isEqualToPostalAddress:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)rawAddress;
-(id)initWithAddress:(id)arg1 components:(id)arg2 label:(id)arg3 extractionInfo:(id)arg4 recordId:(id)arg5 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

