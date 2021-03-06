/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpotlightUI/SpotlightUI-Structs.h>
#import <SpotlightUI/SPUILegibilitySceneSettings.h>
#import <libobjc.A.dylib/SPUISearchViewSceneSettings.h>

@protocol SPUISearchViewSceneSettings <NSObject>
@property (nonatomic,readonly) double revealProgress; 
@property (nonatomic,readonly) unsigned long long presentationSource; 
@property (nonatomic,readonly) unsigned long long presentationIntent; 
@required
-(unsigned long long)presentationSource;
-(unsigned long long)presentationIntent;
-(double)revealProgress;

@end


@class NSString;

@interface SPUISearchViewSceneSettings : SPUILegibilitySceneSettings <SPUISearchViewSceneSettings>

@property (nonatomic,readonly) double revealProgress; 
@property (nonatomic,readonly) unsigned long long presentationSource; 
@property (nonatomic,readonly) unsigned long long presentationIntent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)presentationSource;
-(unsigned long long)presentationIntent;
-(double)revealProgress;
@end

