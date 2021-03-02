/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailCore/EmailCore-Structs.h>
#import <libobjc.A.dylib/ECEmailAddressConvertible.h>
#import <libobjc.A.dylib/EFPubliclyDescribable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, ECEmailAddressComponents;

@interface ECEmailAddress : NSObject <ECEmailAddressConvertible, EFPubliclyDescribable, NSSecureCoding> {

	unsigned long long _hash;
	NSArray* _groupList;
	ECEmailAddressComponents* _components;

}

@property (copy,readonly) NSString * idnaAddress; 
@property (nonatomic,copy,readonly) ECEmailAddressComponents * components;              //@synthesize components=_components - In the implementation block
@property (readonly) NSString * stringValue; 
@property (copy,readonly) NSString * displayName; 
@property (copy,readonly) NSString * simpleAddress; 
@property (copy,readonly) NSString * localPart; 
@property (copy,readonly) NSString * domain; 
@property (copy,readonly) NSArray * groupList;                                          //@synthesize groupList=_groupList - In the implementation block
@property (nonatomic,readonly) ECEmailAddress * emailAddressValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
+(BOOL)supportsSecureCoding;
+(id)_cachedEmailAddressForString:(id)arg1 generator:(/*^block*/id)arg2 ;
+(id)emailAddressWithString:(id)arg1 ;
+(id)emailAddressesFromStrings:(id)arg1 invalidAddresses:(id*)arg2 ;
-(id)em_displayableString;
-(id)initWithString:(id)arg1 ;
-(NSString *)ef_publicDescription;
-(long long)compare:(id)arg1 ;
-(ECEmailAddressComponents *)components;
-(NSArray *)groupList;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(NSString *)stringValue;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)debugDescription;
-(id)_initWithComponents:(id)arg1 ;
-(ECEmailAddress *)emailAddressValue;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_createComponentsFrom:(id)arg1 ;
@end
