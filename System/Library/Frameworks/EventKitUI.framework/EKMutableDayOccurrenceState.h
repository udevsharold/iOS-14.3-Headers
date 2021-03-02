/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class EKEvent, UITraitCollection;


@protocol EKMutableDayOccurrenceState <NSObject>
@property (nonatomic,retain) EKEvent * occurrence; 
@property (assign,nonatomic) long long birthdayCount; 
@property (assign,nonatomic) BOOL isProposedTime; 
@property (assign,nonatomic) BOOL isSelected; 
@property (assign,nonatomic) BOOL isDimmed; 
@property (assign,nonatomic) BOOL usesSmallText; 
@property (assign,nonatomic) BOOL isVibrant; 
@property (assign,nonatomic) double travelTime; 
@property (assign,nonatomic) long long colorBackgroundStyle; 
@property (assign,nonatomic) CGRect backgroundRect; 
@property (assign,nonatomic) double travelTimeHeight; 
@property (assign,nonatomic) double visibleHeight; 
@property (assign,nonatomic) double topYBoundaryForText; 
@property (nonatomic,retain) UITraitCollection * traitCollection; 
@required
-(void)setTraitCollection:(id)arg1;
-(void)setIsSelected:(BOOL)arg1;
-(void)setOccurrence:(id)arg1;
-(void)setBackgroundRect:(CGRect)arg1;
-(BOOL)isSelected;
-(void)setTravelTime:(double)arg1;
-(void)setIsDimmed:(BOOL)arg1;
-(void)setBirthdayCount:(long long)arg1;
-(double)travelTime;
-(void)setVisibleHeight:(double)arg1;
-(BOOL)usesSmallText;
-(long long)birthdayCount;
-(BOOL)isVibrant;
-(CGRect)backgroundRect;
-(void)setTravelTimeHeight:(double)arg1;
-(long long)colorBackgroundStyle;
-(UITraitCollection *)traitCollection;
-(BOOL)isProposedTime;
-(void)setTopYBoundaryForText:(double)arg1;
-(EKEvent *)occurrence;
-(double)topYBoundaryForText;
-(void)setIsVibrant:(BOOL)arg1;
-(void)setColorBackgroundStyle:(long long)arg1;
-(double)visibleHeight;
-(double)travelTimeHeight;
-(BOOL)isDimmed;
-(void)setUsesSmallText:(BOOL)arg1;
-(void)setIsProposedTime:(BOOL)arg1;

@end
