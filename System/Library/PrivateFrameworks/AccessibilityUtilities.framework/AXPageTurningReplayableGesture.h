/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <AccessibilityUtilities/AXReplayableGesture.h>

@interface AXPageTurningReplayableGesture : AXReplayableGesture {

	BOOL _isLeftToRightSwipe;
	BOOL _isLandscape;

}

@property (assign,nonatomic) BOOL isLeftToRightSwipe;              //@synthesize isLeftToRightSwipe=_isLeftToRightSwipe - In the implementation block
@property (assign,nonatomic) BOOL isLandscape;                     //@synthesize isLandscape=_isLandscape - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)numberOfEvents;
-(double)timeAtEventIndex:(unsigned long long)arg1 ;
-(id)fingerIdentifiersAtEventIndex:(unsigned long long)arg1 ;
-(CGPoint)pointForFingerIdentifier:(id)arg1 atEventIndex:(unsigned long long)arg2 ;
-(double)forceForFingerIdentifier:(id)arg1 atEventIndex:(unsigned long long)arg2 ;
-(BOOL)arePointsDeviceRelative;
-(void)updateForLandscape:(BOOL)arg1 ;
-(BOOL)isLeftToRightSwipe;
-(id)initForLeftToRightSwipe:(BOOL)arg1 ;
-(void)setIsLeftToRightSwipe:(BOOL)arg1 ;
-(BOOL)isLandscape;
-(void)setIsLandscape:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

