/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBTextColumn.h>
@class NSArray, NSData;


@protocol _SFPBTextColumn <NSObject>
@property (nonatomic,copy) NSArray * sections; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSData *)jsonData;
-(NSArray *)sections;
-(void)addSections:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(id)sectionsAtIndex:(unsigned long long)arg1;
-(void)setSections:(id)arg1;
-(id)initWithDictionary:(id)arg1;
-(unsigned long long)sectionsCount;
-(void)clearSections;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSData, NSString;

@interface _SFPBTextColumn : PBCodable <_SFPBTextColumn, NSSecureCoding> {

	NSArray* _sections;

}

@property (nonatomic,copy) NSArray * sections;                      //@synthesize sections=_sections - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSData *)jsonData;
-(BOOL)readFrom:(id)arg1 ;
-(NSArray *)sections;
-(unsigned long long)hash;
-(void)addSections:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)sectionsAtIndex:(unsigned long long)arg1 ;
-(void)setSections:(NSArray *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)sectionsCount;
-(void)clearSections;
-(void)writeTo:(id)arg1 ;
-(id)initWithFacade:(id)arg1 ;
@end

