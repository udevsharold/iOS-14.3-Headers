/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary, NSUserDefaults;

@interface _UIFeedbackPreferences : NSObject {

	NSMutableDictionary* _enabledFeedbackTypes;
	NSDictionary* _defaultFeedbackTypes;
	NSUserDefaults* _userDefaults;

}

@property (nonatomic,readonly) NSDictionary * defaultFeedbackTypes;              //@synthesize defaultFeedbackTypes=_defaultFeedbackTypes - In the implementation block
@property (nonatomic,retain) NSUserDefaults * userDefaults;                      //@synthesize userDefaults=_userDefaults - In the implementation block
+(id)sharedPreferences;
-(void)_updateEnabledFeedbackTypes:(unsigned long long*)arg1 forKey:(id)arg2 type:(unsigned long long)arg3 ;
-(id)init;
-(NSUserDefaults *)userDefaults;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(void)_accessibilityForceTouchChanged:(id)arg1 ;
-(unsigned long long)_defaultFeedbackTypesForCategory:(id)arg1 ;
-(void)_invalidate;
-(id)_defaultKeyForCategoryKey:(id)arg1 type:(unsigned long long)arg2 ;
-(id)_categoryForNullableCategory:(id)arg1 ;
-(void)_setEnabledFeedbackTypes:(unsigned long long)arg1 forCategory:(id)arg2 postNotification:(BOOL)arg3 ;
-(id)_categoryKeyForCategory:(id)arg1 type:(unsigned long long)arg2 ;
-(unsigned long long)_enabledFeedbackTypesForCategory:(id)arg1 ;
-(void)_setEnabledFeedbackTypes:(unsigned long long)arg1 forCategory:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSDictionary *)defaultFeedbackTypes;
-(unsigned long long)enabledFeedbackTypesForCategory:(id)arg1 ;
-(void)_startObservingDefaults;
@end

