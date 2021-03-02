/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOServerFormatToken.h>

@protocol GEOServerFormatTokenPriceValue, GEOTransitArtworkDataSource, GEOServerFormatTokenCountdownValue;
@class NSString, NSArray;

@interface _TempToken : NSObject <GEOServerFormatToken> {

	BOOL _shouldScaleUnits;
	unsigned _value1;
	unsigned _value2;
	float _percentageValue;
	long long _type;
	NSString* _token;
	NSArray* _value3s;
	NSString* _stringValue;
	id<GEOServerFormatTokenPriceValue> _priceValue;
	id<GEOTransitArtworkDataSource> _artworkValue;
	NSArray* _timeStampValues;
	id<GEOServerFormatTokenCountdownValue> _countdownValue;

}

@property (assign,nonatomic) long long type;                                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * token;                                                   //@synthesize token=_token - In the implementation block
@property (assign,nonatomic) unsigned value1;                                                    //@synthesize value1=_value1 - In the implementation block
@property (assign,nonatomic) unsigned value2;                                                    //@synthesize value2=_value2 - In the implementation block
@property (nonatomic,retain) NSArray * value3s;                                                  //@synthesize value3s=_value3s - In the implementation block
@property (nonatomic,retain) NSString * stringValue;                                             //@synthesize stringValue=_stringValue - In the implementation block
@property (assign,nonatomic) float percentageValue;                                              //@synthesize percentageValue=_percentageValue - In the implementation block
@property (nonatomic,readonly) BOOL shouldScaleUnits;                                            //@synthesize shouldScaleUnits=_shouldScaleUnits - In the implementation block
@property (nonatomic,retain) id<GEOServerFormatTokenPriceValue> priceValue;                      //@synthesize priceValue=_priceValue - In the implementation block
@property (nonatomic,retain) id<GEOTransitArtworkDataSource> artworkValue;                       //@synthesize artworkValue=_artworkValue - In the implementation block
@property (nonatomic,retain) NSArray * timeStampValues;                                          //@synthesize timeStampValues=_timeStampValues - In the implementation block
@property (nonatomic,retain) id<GEOServerFormatTokenCountdownValue> countdownValue;              //@synthesize countdownValue=_countdownValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setToken:(NSString *)arg1 ;
-(id<GEOServerFormatTokenPriceValue>)priceValue;
-(NSArray *)value3s;
-(id<GEOTransitArtworkDataSource>)artworkValue;
-(NSArray *)timeStampValues;
-(unsigned)value1;
-(unsigned)value2;
-(void)setStringValue:(NSString *)arg1 ;
-(void)setType:(long long)arg1 ;
-(NSString *)stringValue;
-(id)initWithToken:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)token;
-(long long)type;
-(void)setValue1:(unsigned)arg1 ;
-(float)percentageValue;
-(id<GEOServerFormatTokenCountdownValue>)countdownValue;
-(BOOL)shouldScaleUnits;
-(void)setValue2:(unsigned)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setValue3s:(NSArray *)arg1 ;
-(void)setPercentageValue:(float)arg1 ;
-(void)setPriceValue:(id<GEOServerFormatTokenPriceValue>)arg1 ;
-(void)setArtworkValue:(id<GEOTransitArtworkDataSource>)arg1 ;
-(void)setTimeStampValues:(NSArray *)arg1 ;
-(void)setCountdownValue:(id<GEOServerFormatTokenCountdownValue>)arg1 ;
@end
