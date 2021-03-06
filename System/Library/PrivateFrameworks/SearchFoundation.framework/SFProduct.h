/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFProduct.h>
@class NSString, NSURL, NSDictionary, NSData;


@protocol SFProduct <NSObject>
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * productIdentifier; 
@property (nonatomic,copy) NSURL * availabilityURL; 
@property (nonatomic,copy) NSString * displayName; 
@property (assign,nonatomic) BOOL buyable; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSData *)jsonData;
-(BOOL)buyable;
-(void)setAvailabilityURL:(id)arg1;
-(void)setBuyable:(BOOL)arg1;
-(NSURL *)availabilityURL;
-(void)setIdentifier:(id)arg1;
-(void)setDisplayName:(id)arg1;
-(NSString *)identifier;
-(NSString *)productIdentifier;
-(NSDictionary *)dictionaryRepresentation;
-(void)setProductIdentifier:(id)arg1;
-(NSString *)displayName;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, NSDictionary, NSData;

@interface SFProduct : NSObject <SFProduct, NSSecureCoding, NSCopying> {

	SCD_Struct_SF2 _has;
	BOOL _buyable;
	NSString* _identifier;
	NSString* _productIdentifier;
	NSURL* _availabilityURL;
	NSString* _displayName;

}

@property (nonatomic,copy) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * productIdentifier;                             //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * availabilityURL;                                  //@synthesize availabilityURL=_availabilityURL - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                   //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) BOOL buyable;                                           //@synthesize buyable=_buyable - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSData *)jsonData;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(BOOL)buyable;
-(void)setAvailabilityURL:(NSURL *)arg1 ;
-(void)setBuyable:(BOOL)arg1 ;
-(NSURL *)availabilityURL;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(BOOL)hasBuyable;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)productIdentifier;
-(NSDictionary *)dictionaryRepresentation;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)displayName;
@end

