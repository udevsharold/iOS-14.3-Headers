/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/INCodableCoding.h>

@class NSDictionary, INCodableLocalizationTable, NSString, NSArray;

@interface INCodableEnum : NSObject <NSSecureCoding, NSCopying, INCodableCoding> {

	NSDictionary* _valuesByIndex;
	INCodableLocalizationTable* _localizationTable;
	NSString* _name;
	NSString* _displayName;
	NSString* _displayNameID;
	NSString* _enumNamespace;
	long long _type;
	NSArray* _values;

}

@property (setter=_setLocalizationTable:,nonatomic,copy) INCodableLocalizationTable * _localizationTable;              //@synthesize localizationTable=_localizationTable - In the implementation block
@property (setter=_setEnumNamespace:,nonatomic,copy) NSString * enumNamespace;                                         //@synthesize enumNamespace=_enumNamespace - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                                                            //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayNameID;                                                          //@synthesize displayNameID=_displayNameID - In the implementation block
@property (nonatomic,readonly) long long type;                                                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSArray * values;                                                                  //@synthesize values=_values - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedDisplayName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)__NameKey;
+(id)__DisplayNameKey;
+(BOOL)supportsSecureCoding;
+(id)__INCodableEnumValueSynonymSynonymKey;
+(id)__INCodableEnumValueSynonymSynonymIDKey;
+(id)__INCodableEnumValueSynonymPronunciationHintKey;
+(id)__INCodableEnumValueSynonymPronunciationHintIDKey;
+(id)__INCodableEnumValueIndexKey;
+(id)__INCodableEnumValueDisplayNameKey;
+(id)__INCodableEnumValueDisplayNameIDKey;
+(id)__INCodableEnumValueSynonymsKey;
+(id)__INCodableEnumValueNameKey;
+(id)__ValuesKey;
+(id)__DisplayNameIDKey;
+(id)__TypeKey;
-(NSArray *)values;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_setLocalizationTable:(id)arg1 ;
-(unsigned long long)hash;
-(id)valuesByIndexForValues:(id)arg1 ;
-(id)initWithName:(id)arg1 displayName:(id)arg2 displayNameID:(id)arg3 enumNamespace:(id)arg4 type:(long long)arg5 values:(id)arg6 localizationTable:(id)arg7 ;
-(void)_setEnumNamespace:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(INCodableLocalizationTable *)_localizationTable;
-(long long)type;
-(NSString *)localizedDisplayName;
-(id)localizedDisplayNameWithLocalizer:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)name;
-(id)valueForIndex:(unsigned long long)arg1 ;
-(NSString *)enumNamespace;
-(NSString *)displayNameID;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)displayName;
@end
