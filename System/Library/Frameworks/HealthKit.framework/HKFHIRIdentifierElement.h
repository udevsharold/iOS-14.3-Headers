/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HKCodedObject.h>

@class NSArray, NSString, HKConcept, HKMedicalCodingCollection;

@interface HKFHIRIdentifierElement : NSObject <NSSecureCoding, NSCopying, HKCodedObject> {

	NSArray* _typeCodings;
	NSString* _value;
	HKConcept* _type;

}

@property (nonatomic,copy,readonly) NSString * value;                                              //@synthesize value=_value - In the implementation block
@property (nonatomic,copy,readonly) HKConcept * type; 
@property (nonatomic,copy,readonly) NSArray * typeCodings;                                         //@synthesize typeCodings=_typeCodings - In the implementation block
@property (nonatomic,copy,readonly) HKMedicalCodingCollection * typeCodingCollection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)indexableKeyPathsWithPrefix:(id)arg1 ;
+(id)identifierWithTypeCodings:(id)arg1 value:(id)arg2 ;
-(NSString *)value;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)codingsForKeyPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3 ;
-(NSArray *)typeCodings;
-(id)initWithTypeCodings:(id)arg1 value:(id)arg2 ;
-(HKMedicalCodingCollection *)typeCodingCollection;
-(void)_setTypeCodings:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(HKConcept *)type;
-(BOOL)isEqual:(id)arg1 ;
-(void)_setType:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
