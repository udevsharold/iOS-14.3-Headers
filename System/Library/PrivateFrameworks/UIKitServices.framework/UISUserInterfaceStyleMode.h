/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UISUserInterfaceStyleModeDelegate;
#import <UIKitServices/UIKitServices-Structs.h>
@interface UISUserInterfaceStyleMode : NSObject {

	id<UISUserInterfaceStyleModeDelegate> _delegate;
	BOOL _observingDefaults;

}

@property (assign,nonatomic) long long modeValue; 
@property (nonatomic,readonly) long long suggestedAutomaticModeValue; 
@property (assign,nonatomic) SCD_Struct_UI0 override; 
@property (assign,nonatomic) SCD_Struct_UI1 customSchedule; 
-(void)dealloc;
-(long long)suggestedAutomaticModeValue;
-(long long)modeValue;
-(void)setCustomSchedule:(SCD_Struct_UI1)arg1 ;
-(id)_commonAnalyticsEventDictionary;
-(id)initWithDelegate:(id)arg1 ;
-(void)setModeValue:(long long)arg1 ;
-(void)_setOverride:(SCD_Struct_UI0)arg1 force:(BOOL)arg2 ;
-(void)setOverride:(SCD_Struct_UI0)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(SCD_Struct_UI1)customSchedule;
-(SCD_Struct_UI0)override;
@end
