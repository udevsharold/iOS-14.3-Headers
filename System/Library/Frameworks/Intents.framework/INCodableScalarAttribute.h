/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INCodableAttribute.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface INCodableScalarAttribute : INCodableAttribute <NSSecureCoding> {

	long long _type;

}

@property (assign,nonatomic) long long type;              //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)updateWithDictionary:(id)arg1 ;
-(long long)valueType;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(id)__INTypeCodableDescriptionTypeKey;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setType:(long long)arg1 ;
-(id)__INIntentResponseCodableDescriptionTypeKey;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(BOOL)isEqual:(id)arg1 ;
-(Class)objectClass;
-(id)__INIntentResponseCodableDescriptionKey;
-(Class)_relationshipValueTransformerClass;
-(id)initWithPropertyName:(id)arg1 type:(long long)arg2 ;
-(id)__INTypeCodableDescriptionKey;
-(id)__INCodableDescriptionKey;
-(Class)resolutionResultClass;
-(id)__INCodableDescriptionTypeKey;
-(void)encodeWithCoder:(id)arg1 ;
@end
