/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INCodableAttributeMetadata.h>
#import <libobjc.A.dylib/INCodableAttributeDefaultValueProviding.h>

@class NSURL, NSString;

@interface INCodableURLAttributeMetadata : INCodableAttributeMetadata <INCodableAttributeDefaultValueProviding> {

	NSURL* _defaultValue;

}

@property (nonatomic,copy) NSURL * defaultValue;                    //@synthesize defaultValue=_defaultValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)updateWithDictionary:(id)arg1 ;
-(void)setDefaultValue:(NSURL *)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(id)defaultValueForIntentDefaultValueProvider;
-(NSURL *)defaultValue;
-(id)initWithCoder:(id)arg1 ;
-(id)__INCodableDescriptionDefaultValueKey;
-(id)__INIntentResponseCodableDescriptionKey;
-(id)__INTypeCodableDescriptionKey;
-(id)__INCodableDescriptionKey;
-(id)__INIntentResponseCodableDescriptionDefaultValueKey;
-(id)__INTypeCodableDescriptionDefaultValueKey;
-(void)encodeWithCoder:(id)arg1 ;
@end
