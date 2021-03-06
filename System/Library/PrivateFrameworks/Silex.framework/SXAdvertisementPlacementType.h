/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/SXAdvertisementPlacementType.h>

@protocol SXAdvertisementPlacementType <SXAutoPlacementType>
@property (nonatomic,readonly) unsigned long long frequency; 
@property (nonatomic,readonly) unsigned long long bannerType; 
@property (nonatomic,readonly) SXConvertibleValue distanceFromMedia; 
@required
-(unsigned long long)frequency;
-(unsigned long long)bannerType;
-(SXConvertibleValue)distanceFromMedia;

@end


@class SXJSONArray, NSString;

@interface SXAdvertisementPlacementType : SXJSONObject <SXAdvertisementPlacementType>

@property (nonatomic,readonly) unsigned long long frequency; 
@property (nonatomic,readonly) unsigned long long bannerType; 
@property (nonatomic,readonly) SXConvertibleValue distanceFromMedia; 
@property (nonatomic,readonly) BOOL enabled; 
@property (nonatomic,readonly) id<SXAutoPlacementLayout> layout; 
@property (nonatomic,readonly) SXJSONArray * conditional; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2 ;
+(/*^block*/id)valueClassBlockForPropertyWithName:(id)arg1 ;
-(SXJSONArray *)conditional;
-(id<SXAutoPlacementLayout>)layout;
-(BOOL)enabled;
-(SXConvertibleValue)distanceFromMedia;
-(unsigned long long)bannerType;
-(unsigned long long)frequency;
-(NSString *)description;
-(unsigned long long)bannerTypeWithValue:(id)arg1 withType:(int)arg2 ;
@end

