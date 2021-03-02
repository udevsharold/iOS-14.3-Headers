/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/AccessibilityBundles/Memories.axbundle/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@class NSString;

@interface AXMemoriesSlider : UIAccessibilityElement {

	long long _sliderType;
	NSString* _selectedDescription;

}

@property (assign,nonatomic) long long sliderType;                        //@synthesize sliderType=_sliderType - In the implementation block
@property (nonatomic,retain) NSString * selectedDescription;              //@synthesize selectedDescription=_selectedDescription - In the implementation block
-(CGRect)accessibilityFrame;
-(id)_accessibilityUserTestingElementBaseType;
-(unsigned long long)accessibilityTraits;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(long long)sliderType;
-(NSString *)selectedDescription;
-(id)_axContainingCollectionView;
-(long long)_axContainingSelectedItem;
-(void)setSelectedDescription:(NSString *)arg1 ;
-(void)setSliderType:(long long)arg1 ;
@end
