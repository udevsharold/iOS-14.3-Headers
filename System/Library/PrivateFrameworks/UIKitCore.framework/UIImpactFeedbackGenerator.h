/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIFeedbackGenerator.h>

@class _UIImpactFeedbackGeneratorConfiguration;

@interface UIImpactFeedbackGenerator : UIFeedbackGenerator {

	long long _style;

}

@property (getter=_impactConfiguration,nonatomic,readonly) _UIImpactFeedbackGeneratorConfiguration * impactConfiguration; 
+(Class)_configurationClass;
-(id)_stats_key;
-(void)impactOccurred;
-(id)_ui_descriptionBuilder;
-(id)_styleString;
-(id)initWithStyle:(long long)arg1 ;
-(id)initWithStyle:(long long)arg1 coordinateSpace:(id)arg2 ;
-(id)_impactConfiguration;
-(void)impactOccurredWithIntensity:(double)arg1 ;
-(void)_impactOccurredWithIntensity:(double)arg1 ;
@end
