/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBImageOption.h>
@class NSString, _SFPBStringDictionary, NSData;


@protocol _SFPBImageOption <NSObject>
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * defaultValue; 
@property (nonatomic,retain) _SFPBStringDictionary * options; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setDefaultValue:(id)arg1;
-(NSData *)jsonData;
-(void)setName:(id)arg1;
-(NSString *)defaultValue;
-(id)initWithJSON:(id)arg1;
-(void)setOptions:(id)arg1;
-(NSString *)name;
-(id)initWithDictionary:(id)arg1;
-(_SFPBStringDictionary *)options;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, _SFPBStringDictionary, NSData;

@interface _SFPBImageOption : PBCodable <_SFPBImageOption, NSSecureCoding> {

	NSString* _name;
	NSString* _defaultValue;
	_SFPBStringDictionary* _options;

}

@property (nonatomic,copy) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * defaultValue;                        //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,retain) _SFPBStringDictionary * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDefaultValue:(NSString *)arg1 ;
-(NSData *)jsonData;
-(void)setName:(NSString *)arg1 ;
-(NSString *)defaultValue;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setOptions:(_SFPBStringDictionary *)arg1 ;
-(NSString *)name;
-(id)initWithDictionary:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(_SFPBStringDictionary *)options;
@end
