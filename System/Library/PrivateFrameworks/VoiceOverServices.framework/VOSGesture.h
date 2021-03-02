/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VoiceOverServices.framework/VoiceOverServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface VOSGesture : NSObject <NSSecureCoding> {

	NSString* _rawValue;

}

@property (nonatomic,readonly) NSString * rawValue; 
@property (nonatomic,readonly) NSString * localizedName; 
+(BOOL)supportsSecureCoding;
+(id)Invalid;
+(id)OneFingerSingleTap;
+(id)OneFingerDoubleTap;
+(id)OneFingerTripleTap;
+(id)OneFingerQuadrupleTap;
+(id)TwoFingerSingleTap;
+(id)TwoFingerDoubleTap;
+(id)TwoFingerTripleTap;
+(id)TwoFingerQuadrupleTap;
+(id)ThreeFingerSingleTap;
+(id)ThreeFingerDoubleTap;
+(id)ThreeFingerTripleTap;
+(id)ThreeFingerQuadrupleTap;
+(id)FourFingerSingleTap;
+(id)FourFingerDoubleTap;
+(id)FourFingerTripleTap;
+(id)FourFingerQuadrupleTap;
+(id)FiveFingerSingleTap;
+(id)FiveFingerDoubleTap;
+(id)FiveFingerTripleTap;
+(id)FiveFingerQuadrupleTap;
+(id)OneFingerFlickLeft;
+(id)OneFingerFlickRight;
+(id)OneFingerFlickUp;
+(id)OneFingerFlickDown;
+(id)TwoFingerFlickLeft;
+(id)TwoFingerFlickRight;
+(id)TwoFingerFlickUp;
+(id)TwoFingerFlickDown;
+(id)ThreeFingerFlickLeft;
+(id)ThreeFingerFlickRight;
+(id)ThreeFingerFlickUp;
+(id)ThreeFingerFlickDown;
+(id)FourFingerFlickLeft;
+(id)FourFingerFlickRight;
+(id)FourFingerFlickUp;
+(id)FourFingerFlickDown;
+(id)TwoFingerRotateCounterclockwise;
+(id)TwoFingerRotateClockwise;
+(id)TwoFingerScrub;
+(id)OneFingerSingleTapAndHold;
+(id)OneFingerDoubleTapAndHold;
+(id)TwoFingerSingleTapAndHold;
+(id)TwoFingerDoubleTapAndHold;
+(id)ThreeFingerSingleTapAndHold;
+(id)ThreeFingerDoubleTapAndHold;
+(id)ThreeFingerDoubleTapHoldAndFlickUp;
+(id)ThreeFingerDoubleTapHoldAndFlickLeft;
+(id)ThreeFingerDoubleTapHoldAndFlickDown;
+(id)ThreeFingerDoubleTapHoldAndFlickRight;
+(id)BackTapDoubleTap;
+(id)BackTapTripleTap;
+(id)allGestures;
+(id)_gesturesForFingerCount:(long long)arg1 ;
+(id)gestureWithStringValue:(id)arg1 ;
+(id)horizontalMirrorGestureForGesture:(id)arg1 ;
+(id)rtlGestureForGesture:(id)arg1 ;
+(id)oneFingerGestures;
+(id)twoFingerGestures;
+(id)threeFingerGestures;
+(id)fourFingerGestures;
+(id)fiveFingerGestures;
+(id)conflictingZoomGestures;
-(NSString *)rawValue;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)localizedName;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_initWithRawValue:(id)arg1 ;
@end
