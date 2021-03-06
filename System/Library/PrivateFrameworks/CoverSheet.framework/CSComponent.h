/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor, NSNumber, UIView, _UILegibilitySettings;

@interface CSComponent : NSObject <NSCopying> {

	BOOL _hidden;
	long long _type;
	unsigned long long _properties;
	NSString* _identifier;
	long long _priority;
	long long _flag;
	NSString* _string;
	UIColor* _color;
	NSNumber* _value;
	UIView* _view;
	_UILegibilitySettings* _legibilitySettings;
	double _alpha;
	CGPoint _offset;

}

@property (assign,nonatomic) long long type;                                          //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long properties;                           //@synthesize properties=_properties - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long priority;                                      //@synthesize priority=_priority - In the implementation block
@property (assign,getter=isHidden,nonatomic) BOOL hidden;                             //@synthesize hidden=_hidden - In the implementation block
@property (assign,nonatomic) long long flag;                                          //@synthesize flag=_flag - In the implementation block
@property (assign,nonatomic) CGPoint offset;                                          //@synthesize offset=_offset - In the implementation block
@property (nonatomic,copy) NSString * string;                                         //@synthesize string=_string - In the implementation block
@property (nonatomic,retain) UIColor * color;                                         //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) NSNumber * value;                                        //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) UIView * view;                                           //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (assign,nonatomic) double alpha;                                            //@synthesize alpha=_alpha - In the implementation block
+(id)dateView;
+(id)footerStatusLabel;
+(id)componentWithType:(long long)arg1 ;
+(id)pageContent;
+(id)wallpaper;
+(id)slideableContent;
+(id)quickActions;
+(id)pageControl;
+(id)statusBar;
+(id)controlCenterGrabber;
+(id)homeAffordance;
+(id)proudLock;
+(id)scalableContent;
+(id)poseidon;
+(id)statusBarBackground;
+(id)tinting;
+(id)whitePoint;
+(id)statusBarGradient;
+(id)footerCallToActionLabel;
-(id)view:(id)arg1 ;
-(void)setColor:(UIColor *)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(id)flag:(long long)arg1 ;
-(void)setPriority:(long long)arg1 ;
-(NSNumber *)value;
-(NSString *)string;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(id)init;
-(double)alpha;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)color;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(UIView *)view;
-(id)legibilitySettings:(id)arg1 ;
-(CGPoint)offset;
-(void)setType:(long long)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setOffset:(CGPoint)arg1 ;
-(void)setValue:(NSNumber *)arg1 ;
-(void)setProperties:(unsigned long long)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(id)succinctDescription;
-(void)resetProperties:(unsigned long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)identifier;
-(id)description;
-(id)offset:(CGPoint)arg1 ;
-(unsigned long long)properties;
-(long long)type;
-(id)hidden:(BOOL)arg1 ;
-(id)identifier:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)setView:(UIView *)arg1 ;
-(id)priority:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isHidden;
-(id)string:(id)arg1 ;
-(BOOL)hasValueForProperty:(unsigned long long)arg1 ;
-(void)resetAllProperties;
-(long long)flag;
-(long long)priority;
-(void)setFlag:(long long)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(id)value:(id)arg1 ;
@end

