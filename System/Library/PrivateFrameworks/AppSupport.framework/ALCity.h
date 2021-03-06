/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface ALCity : NSObject {

	int _identifier;
	NSString* _localeCode;
	NSString* _timeZone;
	float _longitude;
	float _latitude;
	NSString* _yahooCode;
	NSString* _name;
	NSString* _unlocalizedName;
	NSString* _countryName;
	NSString* _unlocalizedCountryName;
	NSString* _countryOverride;
	NSString* _unlocalizedCountryOverride;
	NSString* _identifierForCPCity;
	BOOL _localizationAttempted;
	BOOL _displayNameIncludingCountryShowsOnlyCountry;

}

@property (nonatomic,readonly) NSString * classicIdentifier; 
@property (nonatomic,readonly) NSDictionary * properties; 
@property (assign,nonatomic) int identifier;                                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * localeCode;                                         //@synthesize localeCode=_localeCode - In the implementation block
@property (nonatomic,retain) NSString * timeZone;                                           //@synthesize timeZone=_timeZone - In the implementation block
@property (assign,nonatomic) float longitude;                                               //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) float latitude;                                                //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,retain) NSString * yahooCode;                                          //@synthesize yahooCode=_yahooCode - In the implementation block
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSString * unlocalizedName; 
@property (nonatomic,retain) NSString * countryName; 
@property (nonatomic,retain) NSString * unlocalizedCountryName; 
@property (nonatomic,retain) NSString * countryOverride; 
@property (nonatomic,retain) NSString * unlocalizedCountryOverride;                         //@synthesize unlocalizedCountryOverride=_unlocalizedCountryOverride - In the implementation block
@property (assign,nonatomic) BOOL displayNameIncludingCountryShowsOnlyCountry;              //@synthesize displayNameIncludingCountryShowsOnlyCountry=_displayNameIncludingCountryShowsOnlyCountry - In the implementation block
-(NSString *)localeCode;
-(NSString *)timeZone;
-(id)initWithProperties:(id)arg1 ;
-(void)setTimeZone:(NSString *)arg1 ;
-(BOOL)displayNameIncludingCountryShowsOnlyCountry;
-(void)setName:(NSString *)arg1 ;
-(NSString *)countryName;
-(id)displayNameIncludingCountry:(BOOL)arg1 ;
-(void)setUnlocalizedCountryName:(NSString *)arg1 ;
-(id)init;
-(NSString *)unlocalizedCountryName;
-(void)setYahooCode:(NSString *)arg1 ;
-(float)longitude;
-(NSString *)classicIdentifier;
-(void)dealloc;
-(void)setCountryName:(NSString *)arg1 ;
-(id)initWithSQLRow:(char**)arg1 ;
-(void)ensureLocalized;
-(void)setLocaleCode:(NSString *)arg1 ;
-(void)setIdentifier:(int)arg1 ;
-(unsigned long long)hash;
-(NSString *)unlocalizedCountryOverride;
-(int)identifier;
-(id)description;
-(NSString *)yahooCode;
-(NSDictionary *)properties;
-(void)setUnlocalizedCountryOverride:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)unlocalizedName;
-(void)setDisplayNameIncludingCountryShowsOnlyCountry:(BOOL)arg1 ;
-(void)setLongitude:(float)arg1 ;
-(float)latitude;
-(NSString *)name;
-(id)displayNameIncludingCountry:(BOOL)arg1 withFormat:(id)arg2 ;
-(void)setLatitude:(float)arg1 ;
-(void)setUnlocalizedName:(NSString *)arg1 ;
-(NSString *)countryOverride;
-(void)setCountryOverride:(NSString *)arg1 ;
@end

