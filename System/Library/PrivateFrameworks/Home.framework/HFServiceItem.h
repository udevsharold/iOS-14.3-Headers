/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFServiceLikeItem.h>
#import <libobjc.A.dylib/HFActionBuilderFactory.h>
#import <libobjc.A.dylib/HFServiceLikeBuilderCreating.h>
#import <libobjc.A.dylib/HFNamingComponentCreating.h>

@protocol HFCharacteristicValueSource;
@class HMService, NSString, HMHome, NSSet;

@interface HFServiceItem : HFItem <HFServiceLikeItem, HFActionBuilderFactory, HFServiceLikeBuilderCreating, HFNamingComponentCreating> {

	id<HFCharacteristicValueSource> _valueSource;
	HMService* _service;

}

@property (nonatomic,readonly) id<HFCharacteristicValueSource> valueSource;              //@synthesize valueSource=_valueSource - In the implementation block
@property (nonatomic,readonly) HMService * service;                                      //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) HMHome * home; 
@property (nonatomic,readonly) NSSet * services; 
+(id)serviceItemForService:(id)arg1 valueSource:(id)arg2 ;
+(id)supportedServiceTypes;
+(id)_serviceTypeToServiceItemClassMap;
+(Class)itemClassForService:(id)arg1 ;
-(id)performStandardUpdateWithCharacteristicTypes:(id)arg1 options:(id)arg2 ;
-(id)descriptionForCharacteristic:(id)arg1 withValue:(id)arg2 ;
-(id)controlDescriptionForCharacteristic:(id)arg1 withValue:(id)arg2 ;
-(id)createControlItems;
-(id)init;
-(HMHome *)home;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)copyWithValueSource:(id)arg1 ;
-(id<HFHomeKitObject>)homeKitObject;
-(HMService *)service;
-(NSString *)description;
-(id)servicesToReadForCharacteristicType:(id)arg1 ;
-(id)accessories;
-(id)controlItemValueSourceForPrimaryService;
-(BOOL)actionsMayRequireDeviceUnlock;
-(id)namingComponentForHomeKitObject;
-(id)serviceLikeBuilderInHome:(id)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithValueSource:(id)arg1 service:(id)arg2 ;
-(NSString *)debugDescription;
-(NSSet *)services;
-(id)controlItemValueSourceForServices:(id)arg1 ;
-(BOOL)containsActions;
-(id)currentStateActionBuildersForHome:(id)arg1 ;
-(id)_descriptionBuilder;
-(id)_allRepresentedServices;
-(id)_actionableCharacteristics;
-(id)characteristicsToReadForCharacteristicTypes:(id)arg1 controlItems:(id)arg2 ;
-(id)_augmentedStandardResultsForUpdateResponse:(id)arg1 controlItems:(id)arg2 ;
-(id)incrementalStateIconDescriptorForPrimaryState:(long long)arg1 incrementalValue:(id)arg2 ;
@end
