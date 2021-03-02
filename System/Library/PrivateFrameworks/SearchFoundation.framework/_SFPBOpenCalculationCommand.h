/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBOpenCalculationCommand.h>
@class NSString, NSData;


@protocol _SFPBOpenCalculationCommand <NSObject>
@property (nonatomic,copy) NSString * input; 
@property (nonatomic,copy) NSString * output; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSData *)jsonData;
-(NSString *)output;
-(NSString *)input;
-(void)setInput:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(id)initWithDictionary:(id)arg1;
-(void)setOutput:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface _SFPBOpenCalculationCommand : PBCodable <_SFPBOpenCalculationCommand, NSSecureCoding> {

	NSString* _input;
	NSString* _output;

}

@property (nonatomic,copy) NSString * input;                        //@synthesize input=_input - In the implementation block
@property (nonatomic,copy) NSString * output;                       //@synthesize output=_output - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSData *)jsonData;
-(NSString *)output;
-(NSString *)input;
-(void)setInput:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg1 ;
-(void)setOutput:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithFacade:(id)arg1 ;
@end
