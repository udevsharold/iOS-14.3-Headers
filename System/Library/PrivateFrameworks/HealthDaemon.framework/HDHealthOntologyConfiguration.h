/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray;

@interface HDHealthOntologyConfiguration : NSObject {

	NSDictionary* _countryConfigurations;

}

@property (nonatomic,copy,readonly) NSDictionary * countryConfigurations;              //@synthesize countryConfigurations=_countryConfigurations - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allCountryConfigurations; 
+(id)bundledHealthOntologyConfiguration;
-(id)init;
-(id)initWithCountryConfigurations:(id)arg1 ;
-(NSArray *)allCountryConfigurations;
-(id)configurationForCountryCode:(id)arg1 ;
-(NSDictionary *)countryConfigurations;
@end

