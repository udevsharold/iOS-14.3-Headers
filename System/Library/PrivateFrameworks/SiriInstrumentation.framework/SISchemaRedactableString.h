/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface SISchemaRedactableString : PBCodable {

	int _redactionState;
	NSString* _value;
	BOOL _hasRedactionState;
	BOOL _hasValue;
	unsigned long long _which_String;

}

@property (assign,nonatomic) int redactionState;                             //@synthesize redactionState=_redactionState - In the implementation block
@property (assign,nonatomic) BOOL hasRedactionState;                         //@synthesize hasRedactionState=_hasRedactionState - In the implementation block
@property (nonatomic,copy) NSString * value;                                 //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL hasValue;                                  //@synthesize hasValue=_hasValue - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (nonatomic,readonly) unsigned long long which_String;              //@synthesize which_String=_which_String - In the implementation block
-(NSData *)jsonData;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasValue;
-(id)initWithDictionary:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasValue:(BOOL)arg1 ;
-(void)setRedactionState:(int)arg1 ;
-(unsigned long long)which_String;
-(int)redactionState;
-(BOOL)hasRedactionState;
-(void)setHasRedactionState:(BOOL)arg1 ;
@end
