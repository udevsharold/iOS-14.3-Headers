/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PKCloudStoreCoding.h>

@class NSString, NSURL, PKMapsMerchant, PKMapsBrand;

@interface PKMerchant : NSObject <NSSecureCoding, PKCloudStoreCoding> {

	BOOL _useRawMerchantData;
	BOOL _mapsDataIsFromLocalMatch;
	NSString* _displayName;
	NSURL* _originURL;
	NSString* _webMerchantIdentifier;
	NSString* _webMerchantName;
	long long _adamIdentifier;
	long long _industryCode;
	NSString* _industryCategory;
	NSString* _name;
	NSString* _rawName;
	NSString* _merchantIdentifier;
	NSString* _rawCANL;
	NSString* _rawCity;
	NSString* _rawState;
	NSString* _rawCountry;
	NSString* _city;
	NSString* _state;
	NSString* _zip;
	long long _cleanConfidenceLevel;
	long long _fallbackcategory;
	NSString* _fallbackDetailedCategory;
	PKMapsMerchant* _mapsMerchant;
	PKMapsBrand* _mapsBrand;

}

@property (nonatomic,copy) NSURL * originURL;                                //@synthesize originURL=_originURL - In the implementation block
@property (nonatomic,copy) NSString * webMerchantIdentifier;                 //@synthesize webMerchantIdentifier=_webMerchantIdentifier - In the implementation block
@property (nonatomic,copy) NSString * webMerchantName;                       //@synthesize webMerchantName=_webMerchantName - In the implementation block
@property (assign,nonatomic) long long adamIdentifier;                       //@synthesize adamIdentifier=_adamIdentifier - In the implementation block
@property (assign,nonatomic) long long industryCode;                         //@synthesize industryCode=_industryCode - In the implementation block
@property (nonatomic,copy) NSString * industryCategory;                      //@synthesize industryCategory=_industryCategory - In the implementation block
@property (nonatomic,copy) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * rawName;                               //@synthesize rawName=_rawName - In the implementation block
@property (nonatomic,copy) NSString * merchantIdentifier;                    //@synthesize merchantIdentifier=_merchantIdentifier - In the implementation block
@property (nonatomic,copy) NSString * rawCANL;                               //@synthesize rawCANL=_rawCANL - In the implementation block
@property (nonatomic,copy) NSString * rawCity;                               //@synthesize rawCity=_rawCity - In the implementation block
@property (nonatomic,copy) NSString * rawState;                              //@synthesize rawState=_rawState - In the implementation block
@property (nonatomic,copy) NSString * rawCountry;                            //@synthesize rawCountry=_rawCountry - In the implementation block
@property (nonatomic,copy) NSString * city;                                  //@synthesize city=_city - In the implementation block
@property (nonatomic,copy) NSString * state;                                 //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * zip;                                   //@synthesize zip=_zip - In the implementation block
@property (assign,nonatomic) long long cleanConfidenceLevel;                 //@synthesize cleanConfidenceLevel=_cleanConfidenceLevel - In the implementation block
@property (assign,nonatomic) BOOL useRawMerchantData;                        //@synthesize useRawMerchantData=_useRawMerchantData - In the implementation block
@property (assign,nonatomic) long long fallbackcategory;                     //@synthesize fallbackcategory=_fallbackcategory - In the implementation block
@property (nonatomic,copy) NSString * fallbackDetailedCategory;              //@synthesize fallbackDetailedCategory=_fallbackDetailedCategory - In the implementation block
@property (nonatomic,retain) PKMapsMerchant * mapsMerchant;                  //@synthesize mapsMerchant=_mapsMerchant - In the implementation block
@property (nonatomic,retain) PKMapsBrand * mapsBrand;                        //@synthesize mapsBrand=_mapsBrand - In the implementation block
@property (assign,nonatomic) BOOL mapsDataIsFromLocalMatch;                  //@synthesize mapsDataIsFromLocalMatch=_mapsDataIsFromLocalMatch - In the implementation block
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) BOOL hasMapsMatch; 
@property (nonatomic,readonly) NSString * displayName;                       //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) long long category; 
@property (nonatomic,readonly) NSString * detailedCategory; 
@property (nonatomic,readonly) NSURL * heroImageURL; 
@property (nonatomic,readonly) NSString * heroImageAttribution; 
@property (nonatomic,readonly) NSURL * logoImageURL; 
@property (nonatomic,readonly) NSString * phoneNumber; 
@property (nonatomic,readonly) NSURL * businessChatURL; 
+(BOOL)supportsSecureCoding;
+(id)recordNamePrefix;
-(NSString *)rawState;
-(NSString *)zip;
-(NSString *)city;
-(void)setCity:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(long long)category;
-(NSString *)rawCity;
-(NSURL *)logoImageURL;
-(NSString *)rawCANL;
-(NSString *)detailedCategory;
-(NSURL *)businessChatURL;
-(long long)cleanConfidenceLevel;
-(BOOL)useRawMerchantData;
-(long long)adamIdentifier;
-(NSString *)webMerchantIdentifier;
-(NSString *)webMerchantName;
-(NSURL *)heroImageURL;
-(void)setZip:(NSString *)arg1 ;
-(NSString *)phoneNumber;
-(NSString *)state;
-(NSString *)rawName;
-(NSString *)rawCountry;
-(PKMapsBrand *)mapsBrand;
-(unsigned long long)hash;
-(BOOL)isValid;
-(void)setFallbackcategory:(long long)arg1 ;
-(id)jsonDictionaryRepresentation;
-(void)setMapsMerchant:(PKMapsMerchant *)arg1 ;
-(void)setMapsBrand:(PKMapsBrand *)arg1 ;
-(void)setMapsDataIsFromLocalMatch:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_regenerateDisplayName;
-(unsigned long long)itemType;
-(long long)fallbackcategory;
-(NSString *)fallbackDetailedCategory;
-(BOOL)mapsDataIsFromLocalMatch;
-(BOOL)isEqualToMerchant:(id)arg1 ;
-(void)setUseRawMerchantData:(BOOL)arg1 ;
-(BOOL)hasMapsMatch;
-(void)setRawCANL:(NSString *)arg1 ;
-(NSString *)heroImageAttribution;
-(void)setRawCity:(NSString *)arg1 ;
-(void)setRawState:(NSString *)arg1 ;
-(void)setRawCountry:(NSString *)arg1 ;
-(void)setCleanConfidenceLevel:(long long)arg1 ;
-(void)setFallbackDetailedCategory:(NSString *)arg1 ;
-(id)uniqueIdentifier;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)shouldBeCombinedWithMerchant:(id)arg1 ;
-(BOOL)hasBetterVisualPropertiesThanMerchant:(id)arg1 ;
-(id)primaryIdentifier;
-(void)setOriginURL:(NSURL *)arg1 ;
-(NSString *)name;
-(void)setAdamIdentifier:(long long)arg1 ;
-(void)setWebMerchantIdentifier:(NSString *)arg1 ;
-(void)setWebMerchantName:(NSString *)arg1 ;
-(long long)industryCode;
-(NSString *)industryCategory;
-(void)setIndustryCode:(long long)arg1 ;
-(void)setIndustryCategory:(NSString *)arg1 ;
-(void)encodeWithCloudStoreCoder:(id)arg1 ;
-(id)initWithCloudStoreCoder:(id)arg1 ;
-(id)recordTypesAndNamesIncludingServerData:(BOOL)arg1 ;
-(void)applyPropertiesFromCloudStoreRecord:(id)arg1 ;
-(void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)arg1 ;
-(NSString *)merchantIdentifier;
-(void)setMerchantIdentifier:(NSString *)arg1 ;
-(NSURL *)originURL;
-(void)setRawName:(NSString *)arg1 ;
-(PKMapsMerchant *)mapsMerchant;
-(void)setState:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)displayName;
-(BOOL)isCloudArchivableDeviceDataEqual:(id)arg1 ;
-(BOOL)hasCloudArchivableDeviceData;
@end
