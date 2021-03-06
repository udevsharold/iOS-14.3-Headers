/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NTPBTodayWidgetConfig;

@interface NTPBTodayResultOperationFetchInfo : PBCodable <NSCopying> {

	SCD_Struct_NT10* _userSegmentationSegmentSetIds;
	SCD_Struct_NT20* _userSegmentationTreatmentIds;
	long long _appConfigTreatmentIDInteger;
	long long _cellularRadioAccessTechnology;
	long long _onboardingVersion;
	long long _reachabilityStatus;
	NSString* _bundleIap;
	NSData* _clickThroughRateByPersonalizationFeatureIDData;
	NSString* _contentStoreFrontID;
	NSString* _localeIdentifier;
	NSString* _todaySourceIdentifier;
	NSString* _userID;
	NTPBTodayWidgetConfig* _widgetConfig;
	BOOL _isBundleSubscriber;
	BOOL _wifiReachable;
	SCD_Struct_NT9 _has;

}

@property (nonatomic,readonly) BOOL hasTodaySourceIdentifier; 
@property (nonatomic,retain) NSString * todaySourceIdentifier;                                      //@synthesize todaySourceIdentifier=_todaySourceIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasAppConfigTreatmentIDInteger; 
@property (assign,nonatomic) long long appConfigTreatmentIDInteger;                                 //@synthesize appConfigTreatmentIDInteger=_appConfigTreatmentIDInteger - In the implementation block
@property (nonatomic,readonly) BOOL hasUserID; 
@property (nonatomic,retain) NSString * userID;                                                     //@synthesize userID=_userID - In the implementation block
@property (nonatomic,readonly) BOOL hasContentStoreFrontID; 
@property (nonatomic,retain) NSString * contentStoreFrontID;                                        //@synthesize contentStoreFrontID=_contentStoreFrontID - In the implementation block
@property (assign,nonatomic) BOOL hasWifiReachable; 
@property (assign,nonatomic) BOOL wifiReachable;                                                    //@synthesize wifiReachable=_wifiReachable - In the implementation block
@property (assign,nonatomic) BOOL hasCellularRadioAccessTechnology; 
@property (assign,nonatomic) long long cellularRadioAccessTechnology;                               //@synthesize cellularRadioAccessTechnology=_cellularRadioAccessTechnology - In the implementation block
@property (assign,nonatomic) BOOL hasReachabilityStatus; 
@property (assign,nonatomic) long long reachabilityStatus;                                          //@synthesize reachabilityStatus=_reachabilityStatus - In the implementation block
@property (nonatomic,readonly) BOOL hasWidgetConfig; 
@property (nonatomic,retain) NTPBTodayWidgetConfig * widgetConfig;                                  //@synthesize widgetConfig=_widgetConfig - In the implementation block
@property (assign,nonatomic) BOOL hasOnboardingVersion; 
@property (assign,nonatomic) long long onboardingVersion;                                           //@synthesize onboardingVersion=_onboardingVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasClickThroughRateByPersonalizationFeatureIDData; 
@property (nonatomic,retain) NSData * clickThroughRateByPersonalizationFeatureIDData;               //@synthesize clickThroughRateByPersonalizationFeatureIDData=_clickThroughRateByPersonalizationFeatureIDData - In the implementation block
@property (nonatomic,readonly) BOOL hasLocaleIdentifier; 
@property (nonatomic,retain) NSString * localeIdentifier;                                           //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long userSegmentationSegmentSetIdsCount; 
@property (nonatomic,readonly) int* userSegmentationSegmentSetIds; 
@property (nonatomic,readonly) unsigned long long userSegmentationTreatmentIdsCount; 
@property (nonatomic,readonly) long long* userSegmentationTreatmentIds; 
@property (assign,nonatomic) BOOL hasIsBundleSubscriber; 
@property (assign,nonatomic) BOOL isBundleSubscriber;                                               //@synthesize isBundleSubscriber=_isBundleSubscriber - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleIap; 
@property (nonatomic,retain) NSString * bundleIap;                                                  //@synthesize bundleIap=_bundleIap - In the implementation block
-(void)setHasCellularRadioAccessTechnology:(BOOL)arg1 ;
-(long long)cellularRadioAccessTechnology;
-(NSString *)localeIdentifier;
-(BOOL)hasReachabilityStatus;
-(BOOL)wifiReachable;
-(NSString *)contentStoreFrontID;
-(void)setContentStoreFrontID:(NSString *)arg1 ;
-(BOOL)hasWidgetConfig;
-(BOOL)hasLocaleIdentifier;
-(long long)userSegmentationTreatmentIdsAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasCellularRadioAccessTechnology;
-(long long)onboardingVersion;
-(void)dealloc;
-(void)addUserSegmentationTreatmentIds:(long long)arg1 ;
-(void)clearUserSegmentationSegmentSetIds;
-(void)setUserSegmentationTreatmentIds:(long long*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setUserID:(NSString *)arg1 ;
-(void)setOnboardingVersion:(long long)arg1 ;
-(unsigned long long)hash;
-(void)setHasWifiReachable:(BOOL)arg1 ;
-(BOOL)hasWifiReachable;
-(id)description;
-(void)setUserSegmentationSegmentSetIds:(int*)arg1 count:(unsigned long long)arg2 ;
-(int)userSegmentationSegmentSetIdsAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setBundleIap:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHasReachabilityStatus:(BOOL)arg1 ;
-(void)clearUserSegmentationTreatmentIds;
-(long long)reachabilityStatus;
-(NSString *)userID;
-(void)setTodaySourceIdentifier:(NSString *)arg1 ;
-(void)setClickThroughRateByPersonalizationFeatureIDData:(NSData *)arg1 ;
-(BOOL)hasTodaySourceIdentifier;
-(void)setAppConfigTreatmentIDInteger:(long long)arg1 ;
-(void)setHasAppConfigTreatmentIDInteger:(BOOL)arg1 ;
-(BOOL)hasAppConfigTreatmentIDInteger;
-(BOOL)hasContentStoreFrontID;
-(void)setHasOnboardingVersion:(BOOL)arg1 ;
-(BOOL)hasOnboardingVersion;
-(BOOL)hasClickThroughRateByPersonalizationFeatureIDData;
-(void)setIsBundleSubscriber:(BOOL)arg1 ;
-(void)setHasIsBundleSubscriber:(BOOL)arg1 ;
-(BOOL)hasIsBundleSubscriber;
-(BOOL)hasBundleIap;
-(NSString *)todaySourceIdentifier;
-(long long)appConfigTreatmentIDInteger;
-(NSData *)clickThroughRateByPersonalizationFeatureIDData;
-(BOOL)isBundleSubscriber;
-(NTPBTodayWidgetConfig *)widgetConfig;
-(void)addUserSegmentationSegmentSetIds:(int)arg1 ;
-(void)setReachabilityStatus:(long long)arg1 ;
-(long long*)userSegmentationTreatmentIds;
-(int*)userSegmentationSegmentSetIds;
-(void)setWifiReachable:(BOOL)arg1 ;
-(BOOL)hasUserID;
-(void)setWidgetConfig:(NTPBTodayWidgetConfig *)arg1 ;
-(void)setCellularRadioAccessTechnology:(long long)arg1 ;
-(NSString *)bundleIap;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)userSegmentationSegmentSetIdsCount;
-(unsigned long long)userSegmentationTreatmentIdsCount;
@end

