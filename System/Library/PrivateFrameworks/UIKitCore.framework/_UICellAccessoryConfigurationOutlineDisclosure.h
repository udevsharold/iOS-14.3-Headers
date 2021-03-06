/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICellAccessoryConfiguration.h>

@class UIColor, UIImage;

@interface _UICellAccessoryConfigurationOutlineDisclosure : _UICellAccessoryConfiguration {

	BOOL _cellSelectionTogglesExpansionState;
	double _rotationAngle;
	UIColor* _selectedTintColor;
	UIImage* __customImage;

}

@property (nonatomic,readonly) UIImage * _customImage;                               //@synthesize _customImage=__customImage - In the implementation block
@property (nonatomic,readonly) BOOL cellSelectionTogglesExpansionState;              //@synthesize cellSelectionTogglesExpansionState=_cellSelectionTogglesExpansionState - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) double rotationAngle;                                   //@synthesize rotationAngle=_rotationAngle - In the implementation block
@property (nonatomic,retain) UIColor * selectedTintColor;                            //@synthesize selectedTintColor=_selectedTintColor - In the implementation block
+(id)new;
+(BOOL)supportsSecureCoding;
-(double)rotationAngle;
-(id)initWithImage:(id)arg1 ;
-(void)setRotationAngle:(double)arg1 ;
-(id)_identifier;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithCellSelectionTogglesExpansionState:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(UIImage *)_customImage;
-(long long)_systemType;
-(void)setSelectedTintColor:(UIColor *)arg1 ;
-(BOOL)cellSelectionTogglesExpansionState;
-(void)encodeWithCoder:(id)arg1 ;
-(UIColor *)selectedTintColor;
@end

