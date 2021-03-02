/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSString, NSDictionary;

@interface WFNextHourPrecipitationDescription : NSObject <NSCopying> {

	NSDate* _validUntil;
	NSString* _shortTemplate;
	NSString* _longTemplate;
	NSDictionary* _parameters;

}

@property (nonatomic,copy) NSString * shortTemplate;                     //@synthesize shortTemplate=_shortTemplate - In the implementation block
@property (nonatomic,copy) NSString * longTemplate;                      //@synthesize longTemplate=_longTemplate - In the implementation block
@property (nonatomic,copy) NSDictionary * parameters;                    //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) NSString * shortDescription; 
@property (nonatomic,readonly) NSString * longDescription; 
@property (nonatomic,copy,readonly) NSDate * validUntil;                 //@synthesize validUntil=_validUntil - In the implementation block
-(void)setParameters:(NSDictionary *)arg1 ;
-(NSDictionary *)parameters;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithShortTemplate:(id)arg1 longTemplate:(id)arg2 parameters:(id)arg3 validUntil:(id)arg4 ;
-(NSString *)shortDescription;
-(id)fillTemplate:(id)arg1 withDate:(id)arg2 ;
-(NSString *)shortTemplate;
-(void)setShortTemplate:(NSString *)arg1 ;
-(NSString *)longTemplate;
-(void)setLongTemplate:(NSString *)arg1 ;
-(NSDate *)validUntil;
-(BOOL)isValidAtDate:(id)arg1 ;
-(NSString *)longDescription;
@end
