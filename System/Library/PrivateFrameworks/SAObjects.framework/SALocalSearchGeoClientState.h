/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAceClientState.h>

@class NSArray, NSString;

@interface SALocalSearchGeoClientState : SAAceClientState

@property (nonatomic,copy) NSArray * additionalEnabledTransitMarkets; 
@property (nonatomic,copy) NSString * environment; 
+(id)syncKey;
+(id)uniqueObjectIdentifier;
+(id)geoClientState;
+(id)geoClientStateWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)deliveryDeadline;
+(id)persistencePolicy;
-(id)groupIdentifier;
-(NSArray *)additionalEnabledTransitMarkets;
-(void)setAdditionalEnabledTransitMarkets:(NSArray *)arg1 ;
-(NSString *)environment;
-(id)encodedClassName;
-(void)setEnvironment:(NSString *)arg1 ;
@end

