/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libAccessibility.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface AccessibilitySupportOverrides : NSObject {

	NSNumber* _boldText;
	NSNumber* _increaseContrast;
	NSNumber* _reduceTransparency;
	NSNumber* _reduceMotion;
	NSNumber* _onOffLabels;
	NSNumber* _buttonShapes;
	NSNumber* _grayscale;
	NSNumber* _smartInvert;
	NSNumber* _differentiateWithoutColor;

}

@property (nonatomic,retain) NSNumber * boldText;                               //@synthesize boldText=_boldText - In the implementation block
@property (nonatomic,retain) NSNumber * increaseContrast;                       //@synthesize increaseContrast=_increaseContrast - In the implementation block
@property (nonatomic,retain) NSNumber * reduceTransparency;                     //@synthesize reduceTransparency=_reduceTransparency - In the implementation block
@property (nonatomic,retain) NSNumber * reduceMotion;                           //@synthesize reduceMotion=_reduceMotion - In the implementation block
@property (nonatomic,retain) NSNumber * onOffLabels;                            //@synthesize onOffLabels=_onOffLabels - In the implementation block
@property (nonatomic,retain) NSNumber * buttonShapes;                           //@synthesize buttonShapes=_buttonShapes - In the implementation block
@property (nonatomic,retain) NSNumber * grayscale;                              //@synthesize grayscale=_grayscale - In the implementation block
@property (nonatomic,retain) NSNumber * smartInvert;                            //@synthesize smartInvert=_smartInvert - In the implementation block
@property (nonatomic,retain) NSNumber * differentiateWithoutColor;              //@synthesize differentiateWithoutColor=_differentiateWithoutColor - In the implementation block
+(id)shared;
-(void)setSmartInvert:(NSNumber *)arg1 ;
-(void)_removeFilterWithName:(id)arg1 ;
-(NSNumber *)buttonShapes;
-(void)setOnOffLabels:(NSNumber *)arg1 ;
-(void)setGrayscale:(NSNumber *)arg1 ;
-(NSNumber *)reduceTransparency;
-(void)setIncreaseContrast:(NSNumber *)arg1 ;
-(void)setBoldText:(NSNumber *)arg1 ;
-(void)_installInvertColorsFilter;
-(NSNumber *)smartInvert;
-(void)setDifferentiateWithoutColor:(NSNumber *)arg1 ;
-(void)_addFilter:(id)arg1 ;
-(NSNumber *)boldText;
-(NSNumber *)differentiateWithoutColor;
-(void)_installGrayscaleFilter;
-(void)setReduceTransparency:(NSNumber *)arg1 ;
-(NSNumber *)reduceMotion;
-(NSNumber *)onOffLabels;
-(NSNumber *)grayscale;
-(NSNumber *)increaseContrast;
-(void)setReduceMotion:(NSNumber *)arg1 ;
-(void)setButtonShapes:(NSNumber *)arg1 ;
@end
