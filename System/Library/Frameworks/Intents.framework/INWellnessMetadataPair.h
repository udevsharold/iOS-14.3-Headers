/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface INWellnessMetadataPair : NSObject <NSCopying, NSSecureCoding> {

	NSString* _key;
	NSNumber* _numberValue;
	NSString* _stringValue;

}

@property (nonatomic,copy,readonly) NSString * key;                      //@synthesize key=_key - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * numberValue;              //@synthesize numberValue=_numberValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * stringValue;              //@synthesize stringValue=_stringValue - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)key;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)stringValue;
-(NSNumber *)numberValue;
-(id)initWithNumber:(id)arg1 key:(id)arg2 ;
-(id)initWithString:(id)arg1 key:(id)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
