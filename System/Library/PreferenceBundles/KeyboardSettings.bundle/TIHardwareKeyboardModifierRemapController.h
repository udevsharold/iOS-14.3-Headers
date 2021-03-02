/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeyboardSettings/KeyboardSettings-Structs.h>
#import <Preferences/PSListController.h>

@class NSMutableArray, NSMutableDictionary;

@interface TIHardwareKeyboardModifierRemapController : PSListController {

	IOHIDEventSystemClientRef _eventSystemClient;
	NSMutableArray* _keyboards;
	unsigned long long _keysSectionStart;
	IOHIDServiceClientRef _currentKeyboard;
	NSMutableDictionary* _remapping;

}

@property (nonatomic,readonly) IOHIDServiceClientRef currentKeyboard; 
-(id)specifiers;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(IOHIDServiceClientRef)currentKeyboard;
-(id)newSpecifiers;
-(id)valueForRemappingKey:(id)arg1 ;
-(void)reloadSpecifiersWithAnimation;
-(void)saveRemapping;
-(void)loadKeyboards;
-(void)loadRemapping;
-(id)keyboardsSectionSpecifiers;
-(id)keysSectionSpecifiers;
-(void)resetRemapping;
-(id)subtitleForSpecifier:(id)arg1 ;
-(void)setRemappingFromKey:(id)arg1 toValue:(id)arg2 ;
@end
