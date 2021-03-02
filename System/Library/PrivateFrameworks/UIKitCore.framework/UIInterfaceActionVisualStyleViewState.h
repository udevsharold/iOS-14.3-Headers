/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UITraitCollection, UIScreen, UIColor;

@interface UIInterfaceActionVisualStyleViewState : NSObject <NSCopying> {

	UITraitCollection* _traitCollection;
	UIScreen* _screen;
	UIColor* _tintColor;

}

@property (nonatomic,readonly) UITraitCollection * traitCollection;              //@synthesize traitCollection=_traitCollection - In the implementation block
@property (nonatomic,readonly) UIScreen * screen;                                //@synthesize screen=_screen - In the implementation block
@property (nonatomic,readonly) UIColor * tintColor;                              //@synthesize tintColor=_tintColor - In the implementation block
-(UIScreen *)screen;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_stateEqualToVisualStyleViewState:(id)arg1 ;
-(id)initWithPropertiesFromTopLevelView:(id)arg1 ;
-(void)_collectStateFromVisualStyleViewState:(id)arg1 ;
-(UIColor *)tintColor;
-(id)description;
-(UITraitCollection *)traitCollection;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithScreen:(id)arg1 ;
-(id)copyWithTraitCollection:(id)arg1 ;
-(void)_collectStateFromScreen:(id)arg1 ;
-(void)_collectStateFromView:(id)arg1 ;
@end
