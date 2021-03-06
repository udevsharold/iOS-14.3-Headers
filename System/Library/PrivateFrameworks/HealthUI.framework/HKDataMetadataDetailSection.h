/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKDataMetadataSimpleSection.h>
#import <libobjc.A.dylib/HKDataMetadataDetailSectionDataReceiver.h>

@protocol HKDataMetadataObject;
@class HKDisplayTypeController, HKUnitPreferenceController, HKDataMetadataDataSource, NSObject;

@interface HKDataMetadataDetailSection : HKDataMetadataSimpleSection <HKDataMetadataDetailSectionDataReceiver> {

	HKDataMetadataDataSource* _metadataDataSource;
	NSObject*<HKDataMetadataObject> _object;
	HKDisplayTypeController* _displayTypeController;
	HKUnitPreferenceController* _unitController;

}

@property (nonatomic,readonly) NSObject*<HKDataMetadataObject> object;                       //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) HKDisplayTypeController * displayTypeController;              //@synthesize displayTypeController=_displayTypeController - In the implementation block
@property (nonatomic,readonly) HKUnitPreferenceController * unitController;                  //@synthesize unitController=_unitController - In the implementation block
-(NSObject*<HKDataMetadataObject>)object;
-(HKDisplayTypeController *)displayTypeController;
-(HKUnitPreferenceController *)unitController;
-(id)initWithWorkoutEvent:(id)arg1 ;
-(id)initWithSample:(id)arg1 displayTypeController:(id)arg2 unitController:(id)arg3 ;
-(void)_loadMetadataValues;
@end

