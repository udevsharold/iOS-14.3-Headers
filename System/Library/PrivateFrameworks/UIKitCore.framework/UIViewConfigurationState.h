/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIViewConfigurationStateReadonly.h>
#import <UIKit/UIConfigurationState.h>

@class UITraitCollection, NSMutableDictionary, NSString;

@interface UIViewConfigurationState : NSObject <_UIViewConfigurationStateReadonly, UIConfigurationState> {

	unsigned long long _mutations;
	NSMutableDictionary* _customStates;
	struct {
		unsigned isDisabled : 1;
		unsigned isHighlighted : 1;
		unsigned isSelected : 1;
		unsigned isFocused : 1;
	}  _stateFlags;
	UITraitCollection* _traitCollection;

}

@property (nonatomic,readonly) unsigned long long _mutations; 
@property (assign,setter=_setShowingCompactContextMenu:,nonatomic) BOOL _showingCompactContextMenu; 
@property (nonatomic,retain) UITraitCollection * traitCollection;                                                //@synthesize traitCollection=_traitCollection - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (assign,getter=isFocused,nonatomic) BOOL focused; 
@property (nonatomic,readonly) unsigned long long _viewConfigurationState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isDisabled;
-(unsigned long long)_mutations;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(BOOL)isSelected;
-(BOOL)isHighlighted;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTraitCollection:(id)arg1 ;
-(NSString *)description;
-(UITraitCollection *)traitCollection;
-(void)setFocused:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isFocused;
-(id)_initWithState:(id)arg1 ;
-(void)_appendPropertiesForDescription:(id)arg1 ;
-(void)setCustomState:(id)arg1 forKey:(id)arg2 ;
-(id)customStateForKey:(id)arg1 ;
-(BOOL)_showingCompactContextMenu;
-(void)_setShowingCompactContextMenu:(BOOL)arg1 ;
-(unsigned long long)_viewConfigurationState;
-(id)_customStatesForSwiftBridging;
-(void)_setSwiftBridgingCustomState:(id)arg1 forKey:(id)arg2 ;
-(void)_configureWithViewConfigurationState:(unsigned long long)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

